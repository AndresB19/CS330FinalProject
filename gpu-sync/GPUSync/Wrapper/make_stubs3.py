#!/usr/bin/python3
#
# Generates stub C code fragments for each Cuda function defined in
# the cuda_runtime_api.h file.  There is one such C fragment generated
# for each Cuda function (stored in the ./stubs directory with the
# file name of the Cuda function).  Each stub consists of the lines of
# C code generated from the function template defined below.  The
# template code simply generates a fragment to call the original
# Cuda function and return to the caller.  These fragments are
# integrated into a complete wrapper for each call by the Python
# program wrap_generate.py.
#
# The wrapper for a Cuda function can be customized with GPU locking
# calls by editing the stub code for a function after it has been generated
# by this program and before it is integrated into wrappers by the
# wrap_generate.py program,  For example, the stub generated for the
# Cuda cudaMemcpy() function is:
#        cudaError_t ret;
#        // Write your own custom c code in the cudaMemcpy.c file
#        ret = orig_cudaMemcpy(dst, src, count, kind);
#        return ret;
#
# This code should be modified to lock the CE before the call and
# unlock it when the call returns (cudaMemcpy() is a synchronous call).
#        cudaError_t ret;
#        // Write your own custom c code in the cudaMemcpy.c file
#        CE_Lock();
#        ret = orig_cudaMemcpy(dst, src, count, kind);
#        CE_UnLock();
#        return ret;
#
# WARNING: running this program after making edits for locking functions
# will overwrite the edited stubs
#
# Written by Vance Miller and Forrest Li, Department of Computer Science,
# University of North Carolina at Chapel Hill.
# 2015.
#

import re

### Config vars

OUTPUT_FILE = "libcudart_wrapper.c"
STUB_LOCATION = "/usr/local/cuda-12.4/targets/x86_64-linux/lib/stubs/"
SOURCE_HEADER = "/usr/local/cuda-12.4/include/cuda_runtime_api.h"

###

findFuncNameRE = re.compile(r"(\w+)\(")
findPrototypeRE = re.compile(r"^extern\s+__host__.+?\(.*?\);$", flags=(re.DOTALL | re.MULTILINE))
finddvRE = re.compile(r"__dv\(.+?\)")

### Function Template ###
#
# By modifying this template, other wrapper executions can be
# achieved.  For example, the following template will enable
# logging of all Cuda calls in a program.
#

FUNC_BODY = """\t{func_ret} ret;
 \t// Write your own custom c code in the {func_name}.c file
 \tFILE *fp = fopen("Kernel_Log.txt", "a");
 \tfprintf(fp, ">>>>>>>> {func_name} called \\n");
 \tret = orig_{func_name}({func_args});
 \tfprintf(fp, ">>>>>>>> {func_name} returned\\n");
 \treturn ret;
""";
#
# FUNC_BODY = """\t{func_ret} ret;
# \t// Write your own custom c code in the {func_name}.c file
# \tret = orig_{func_name}({func_args});
# \treturn ret;
# """;
# end of function template

def generate():
    # open file
    prototypes = findPrototypes(SOURCE_HEADER)

    for prototype in prototypes:
        # remove newlines
        prototype = prototype.replace('\n', '')
        func_name, func_args, func_ret = parse_proto(prototype)

        with open(STUB_LOCATION + func_name + '.c', 'w') as stub:
            stub.write(FUNC_BODY.format(func_name=func_name, func_ret=func_ret, func_args=func_args))

def parse_proto(prototype):
    # remove __dv(0)
    prototype = re.sub(finddvRE, "", prototype)
    # remove extern
    prototype = func_format_prototype(prototype)
    # strip everything but the name
    func_name = func_format_name(prototype)
    # get args
    func_args = func_format_args(prototype)
    # get ret
    func_ret = func_ret_type(prototype)

    return func_name, func_args, func_ret

def findPrototypes(file_name):
    with open(file_name, "r") as fd:
        contents = fd.read()
    return re.findall(findPrototypeRE, contents)

def func_format_prototype(prototype):
    # remove extern
    if prototype.startswith("extern "):
        prototype = prototype[7:]
    # remove semicolon
    if prototype.endswith(";"):
        prototype = prototype[:-1]
    return prototype.replace("__dv(0)", "")

def func_format_name(prototype):
    return re.search(findFuncNameRE, prototype).group(1)

def func_format_args(prototype):
    args = [param.strip().split(" ")[-1].replace("*", "") if param.strip().find(" ") != -1 else ""
            for param in re.findall(r"\(.*\)", prototype)[0][1:-1].split(",")]
    return re.sub(r"['\[\]]", "", str(args))

def func_ret_type(prototype):
    ret = re.sub("__.*?__", "", prototype)
    ret = re.sub("CUDARTAPI", "", ret)
    return re.sub(r"[A-Za-z0-9\$]+\(.+?\)", "", ret).strip()

if __name__ == "__main__":
    generate()


	
