#!/usr/bin/python
#
# Generates a complete library of wrapper functions for all the
# Cuda calls defined in cuda_runtime_api.h.  The library is a single
# C file (libcudart_wrapper.c) which is to be compiled and linked
# with the GPU_Locklib.c file to form a dynamically loaded library
# libcudart_wrapper.so.  (see Makefile for GPU_Locklib.c)
# This library is loaded at execution time for
# a Cuda process using the LD_PRELOAD function before the real 
# libcudart.  This sequence causes calls from the Cuda program to
# be linked to libcudart_wrapper.so which is then linked to the real
# libcudart.  The result is that Cuda calls from the program go first
# to the wrapper library where calls to GPU locking code can be 
# executed before calls to the Cuda library functions and after those
# calls return.  Here is an example of using LD_PRELOAD to execute
# a Cuda program with GPU locking.
#
# LD_PRELOAD=<complete path to>/libcudart_wrapper.so ./<cuda program>
#
# Note that the Makefile for the Cuda program should specify dynamic linkage using
# the flags "-cudart shared" on the nvcc command to generate the executable
# Example from a Makefile in the Cuda sample programs:
# $(EXEC) $(NVCC) $(ALL_LDFLAGS) $(GENCODE_FLAGS) -cudart shared -o $@ $+ $(LIBRARIES)
# 
# Written by Vance Miller and Forrest Li, Department of Computer Science,
# University of North Carolina at Chapel Hill.
# 2015.
#

import re
import pdb

### Config vars

OUTPUT_FILE = "libcudart_wrapper.c"; # relative to python program
STUB_LOCATION = "/usr/local/cuda-12.4/targets/x86_64-linux/lib/stubs/"; # relative to python program
SOURCE_HEADER = "/usr/local/cuda-12.4/include/cuda_runtime_api.h"; # absolute path

### Compile regex

findFuncNameRE = re.compile(r"(\w+)\(");
findPrototypeRE = re.compile(r"^extern\s+__host__.+?\(.*?\);$", flags=(re.DOTALL | re.MULTILINE));
finddvRE = re.compile(r"__dv\(.+?\)");

# library header
# Note that the include for GPU_Locks.h is necessary to provide
# function prototypes for the GPU locking calls
#
LIB_HEADER = """
#define _GNU_SOURCE

#include <stdio.h>
#include <dlfcn.h>
#include <unistd.h>
#include "cuda_runtime_api.h"
#include "GPU_Locks.h"
""";

# Intercept function template
FUNC_TEMPLATE = """
static {func_ptr} = NULL;

{func_proto} {{
    {custom_code}
}}
""";

# Library init function header

INIT_HEADER = """__attribute__((constructor)) static void init() {
	char *dl_error;""";

# Init template for each function to intercept

INIT_TEMPLATE = """
    // clear dl error
    dlerror();
    if (orig_{func_name} == NULL) {{
        orig_{func_name} = dlsym(RTLD_NEXT, "{func_name}");
    }}
    if ((dl_error = dlerror()) != NULL)
    {{
        fprintf(stderr, ">>>>>>> %s\\n", dl_error);
    }}

""";

# End init function

INIT_FOOTER = """}""";

def generate():
    """
    Generate the libcudart.c library
    """
    # open file
    prototypes = findPrototypes(SOURCE_HEADER);

    # open file to write to
    ofh = open(OUTPUT_FILE, "w");

    # write header
    ofh.write(LIB_HEADER);

    # array of func names
    func_names = [];

    for prototype in prototypes:
        # remove newlines
        prototype = prototype.replace('\n', '');
        func_proto, func_ptr, func_args, func_name, func_ret = parse_proto(prototype);

        func_names.append(func_name);

        # get custom content
        custom_fd = open(STUB_LOCATION + func_name + ".c");
        custom_code = custom_fd.read();
        custom_fd.close();

        # write proto wrapper
        ofh.write(FUNC_TEMPLATE.format( \
                func_proto=func_proto, func_ptr=func_ptr, \
                func_args=func_args, custom_code=custom_code, func_name=func_name,
                func_ret=func_ret));

    # write init
    ofh.write(INIT_HEADER);
    for name in func_names:
        ofh.write(INIT_TEMPLATE.format(func_name=name));
    ofh.write(INIT_FOOTER);

    ofh.close();

def parse_proto(prototype):
    # remove __dv(0)
    prototype = re.sub(finddvRE, "", prototype);
    # remove semicolon and extern
    func_proto = func_format_prototype(prototype);
    # strip parameter types, keep names
    func_args = func_format_args(prototype);
    # strip everything but the name
    func_name = func_format_name(prototype);
    # strip return type and other tokens
    func_ptr = func_format_ptr(func_proto, func_name);
    # get just return type
    func_ret = func_ret_type(func_proto);

    return func_proto, func_ptr, func_args, func_name, func_ret;

def findPrototypes(file_name):
    fd = open(file_name, 'r');
    contents = fd.read();
    fd.close();
    return re.findall(findPrototypeRE, contents);

def func_format_prototype(prototype):
    # remove extern
    if (prototype[0:7] == 'extern '):
        prototype = prototype[7:];
    # remove semicolon
    if (prototype[-1] == ';'):
        prototype = prototype[0:-1];
    return prototype;

def func_format_ptr(prototype, func_name):
    return re.sub(findFuncNameRE, "(*orig_" + func_name + ")(", prototype, count=1);

def func_format_args(prototype):
    args = [ param.strip().split(" ")[-1].replace("*","") \
            if param.strip().find(" ") != -1 else '' \
            for param in re.findall(r"\(.*\)", prototype)[0][1:-1].split(',') ];

    return re.sub(r"['\[\]]", "", str(args));

def func_format_name(prototype):
    return re.search(findFuncNameRE, prototype).group(1);

def func_ret_type(prototype):
    ret = re.sub("__.*?__", "", prototype);
    ret = re.sub("CUDARTAPI", "", ret);
    return re.sub(r"[A-Za-z0-9\$]+\(.*?\)","",ret).strip();

if __name__ == "__main__":
    generate();

