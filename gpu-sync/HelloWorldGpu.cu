#include <stdio.h>



__global__ void printHelloWorld() {

    printf("Hello World from GPU!\n");

}



int main() {

    printHelloWorld<<<1, 1>>>(); // Launch kernel with 1 block and 1 thread

    cudaDeviceSynchronize(); // Wait for GPU to finish

    return 0;

}
