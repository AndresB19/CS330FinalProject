# Makefile for the Hello World CUDA program

# Compiler and flags
NVCC = nvcc
CFLAGS = -std=c++11

# Target executable
TARGET = HelloWorldGpu

# Source files
SRCS = HelloWorldGpu.cu

PYTHON_SCRIPT = generate_stubs.py
# Rule to build the target executable
all: generate_stubs $(TARGET)

generate_stubs:
	python3 $(PYTHON_SCRIPT)

$(TARGET): $(SRCS)
	$(NVCC) $(CFLAGS) --cudart shared -o $(TARGET) $(SRCS)
#	 $(NVCC) $(CFLAGS) -o $(TARGET) $(SRCS)


# Rule to clean the build
clean:
	rm -f $(TARGET) $(STUB_LOCATION)*.c
