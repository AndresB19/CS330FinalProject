
#define _GNU_SOURCE

#include <stdio.h>
#include <dlfcn.h>
#include <unistd.h>
#include "cuda_runtime_api.h"
#include "GPU_Locks.h"

static __host__ cudaError_t  (*orig_cudaDeviceReset)(void) = NULL;

__host__ cudaError_t  cudaDeviceReset(void) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceReset.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceReset called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceReset called with \n");
	ret = orig_cudaDeviceReset();
	// fprintf(stderr, ">>>>>>>> cudaDeviceReset returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceReset returned with \n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaDeviceSynchronize)(void) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaDeviceSynchronize(void) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceSynchronize.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceSynchronize called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceSynchronize called with \n");
	ret = orig_cudaDeviceSynchronize();
	// fprintf(stderr, ">>>>>>>> cudaDeviceSynchronize returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceSynchronize returned with \n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceSetLimit)(enum cudaLimit limit, size_t value) = NULL;

__host__ cudaError_t  cudaDeviceSetLimit(enum cudaLimit limit, size_t value) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceSetLimit.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceSetLimit called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceSetLimit called with limit, value\n");
	ret = orig_cudaDeviceSetLimit(limit, value);
	// fprintf(stderr, ">>>>>>>> cudaDeviceSetLimit returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceSetLimit returned with limit, value\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaDeviceGetLimit)(size_t *pValue, enum cudaLimit limit) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaDeviceGetLimit(size_t *pValue, enum cudaLimit limit) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetLimit.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetLimit called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetLimit called with pValue, limit\n");
	ret = orig_cudaDeviceGetLimit(pValue, limit);
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetLimit returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetLimit returned with pValue, limit\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaDeviceGetCacheConfig)(enum cudaFuncCache *pCacheConfig) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaDeviceGetCacheConfig(enum cudaFuncCache *pCacheConfig) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetCacheConfig.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetCacheConfig called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetCacheConfig called with pCacheConfig\n");
	ret = orig_cudaDeviceGetCacheConfig(pCacheConfig);
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetCacheConfig returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetCacheConfig returned with pCacheConfig\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaDeviceGetStreamPriorityRange)(int *leastPriority, int *greatestPriority) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaDeviceGetStreamPriorityRange(int *leastPriority, int *greatestPriority) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetStreamPriorityRange.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetStreamPriorityRange called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetStreamPriorityRange called with leastPriority, greatestPriority\n");
	ret = orig_cudaDeviceGetStreamPriorityRange(leastPriority, greatestPriority);
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetStreamPriorityRange returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetStreamPriorityRange returned with leastPriority, greatestPriority\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceSetCacheConfig)(enum cudaFuncCache cacheConfig) = NULL;

__host__ cudaError_t  cudaDeviceSetCacheConfig(enum cudaFuncCache cacheConfig) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceSetCacheConfig.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceSetCacheConfig called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceSetCacheConfig called with cacheConfig\n");
	ret = orig_cudaDeviceSetCacheConfig(cacheConfig);
	// fprintf(stderr, ">>>>>>>> cudaDeviceSetCacheConfig returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceSetCacheConfig returned with cacheConfig\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceGetByPCIBusId)(int *device, const char *pciBusId) = NULL;

__host__ cudaError_t  cudaDeviceGetByPCIBusId(int *device, const char *pciBusId) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetByPCIBusId.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetByPCIBusId called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetByPCIBusId called with device, pciBusId\n");
	ret = orig_cudaDeviceGetByPCIBusId(device, pciBusId);
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetByPCIBusId returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetByPCIBusId returned with device, pciBusId\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceGetPCIBusId)(char *pciBusId, int len, int device) = NULL;

__host__ cudaError_t  cudaDeviceGetPCIBusId(char *pciBusId, int len, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetPCIBusId.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetPCIBusId called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetPCIBusId called with pciBusId, len, device\n");
	ret = orig_cudaDeviceGetPCIBusId(pciBusId, len, device);
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetPCIBusId returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetPCIBusId returned with pciBusId, len, device\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaIpcGetEventHandle)(cudaIpcEventHandle_t *handle, cudaEvent_t event) = NULL;

__host__ cudaError_t  cudaIpcGetEventHandle(cudaIpcEventHandle_t *handle, cudaEvent_t event) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaIpcGetEventHandle.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaIpcGetEventHandle called with \n");
	fprintf(fp, ">>>>>>>> cudaIpcGetEventHandle called with handle, event\n");
	ret = orig_cudaIpcGetEventHandle(handle, event);
	// fprintf(stderr, ">>>>>>>> cudaIpcGetEventHandle returned\n");
	fprintf(fp, ">>>>>>>> cudaIpcGetEventHandle returned with handle, event\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaIpcOpenEventHandle)(cudaEvent_t *event, cudaIpcEventHandle_t handle) = NULL;

__host__ cudaError_t  cudaIpcOpenEventHandle(cudaEvent_t *event, cudaIpcEventHandle_t handle) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaIpcOpenEventHandle.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaIpcOpenEventHandle called with \n");
	fprintf(fp, ">>>>>>>> cudaIpcOpenEventHandle called with event, handle\n");
	ret = orig_cudaIpcOpenEventHandle(event, handle);
	// fprintf(stderr, ">>>>>>>> cudaIpcOpenEventHandle returned\n");
	fprintf(fp, ">>>>>>>> cudaIpcOpenEventHandle returned with event, handle\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaIpcGetMemHandle)(cudaIpcMemHandle_t *handle, void *devPtr) = NULL;

__host__ cudaError_t  cudaIpcGetMemHandle(cudaIpcMemHandle_t *handle, void *devPtr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaIpcGetMemHandle.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaIpcGetMemHandle called with \n");
	fprintf(fp, ">>>>>>>> cudaIpcGetMemHandle called with handle, devPtr\n");
	ret = orig_cudaIpcGetMemHandle(handle, devPtr);
	// fprintf(stderr, ">>>>>>>> cudaIpcGetMemHandle returned\n");
	fprintf(fp, ">>>>>>>> cudaIpcGetMemHandle returned with handle, devPtr\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaIpcOpenMemHandle)(void **devPtr, cudaIpcMemHandle_t handle, unsigned int flags) = NULL;

__host__ cudaError_t  cudaIpcOpenMemHandle(void **devPtr, cudaIpcMemHandle_t handle, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaIpcOpenMemHandle.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaIpcOpenMemHandle called with \n");
	fprintf(fp, ">>>>>>>> cudaIpcOpenMemHandle called with devPtr, handle, flags\n");
	ret = orig_cudaIpcOpenMemHandle(devPtr, handle, flags);
	// fprintf(stderr, ">>>>>>>> cudaIpcOpenMemHandle returned\n");
	fprintf(fp, ">>>>>>>> cudaIpcOpenMemHandle returned with devPtr, handle, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaIpcCloseMemHandle)(void *devPtr) = NULL;

__host__ cudaError_t  cudaIpcCloseMemHandle(void *devPtr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaIpcCloseMemHandle.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaIpcCloseMemHandle called with \n");
	fprintf(fp, ">>>>>>>> cudaIpcCloseMemHandle called with devPtr\n");
	ret = orig_cudaIpcCloseMemHandle(devPtr);
	// fprintf(stderr, ">>>>>>>> cudaIpcCloseMemHandle returned\n");
	fprintf(fp, ">>>>>>>> cudaIpcCloseMemHandle returned with devPtr\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceFlushGPUDirectRDMAWrites)(enum cudaFlushGPUDirectRDMAWritesTarget target, enum cudaFlushGPUDirectRDMAWritesScope scope) = NULL;

__host__ cudaError_t  cudaDeviceFlushGPUDirectRDMAWrites(enum cudaFlushGPUDirectRDMAWritesTarget target, enum cudaFlushGPUDirectRDMAWritesScope scope) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceFlushGPUDirectRDMAWrites.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceFlushGPUDirectRDMAWrites called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceFlushGPUDirectRDMAWrites called with target, scope\n");
	ret = orig_cudaDeviceFlushGPUDirectRDMAWrites(target, scope);
	// fprintf(stderr, ">>>>>>>> cudaDeviceFlushGPUDirectRDMAWrites returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceFlushGPUDirectRDMAWrites returned with target, scope\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceRegisterAsyncNotification)(int device, cudaAsyncCallback callbackFunc, void* userData, cudaAsyncCallbackHandle_t* callback) = NULL;

__host__ cudaError_t  cudaDeviceRegisterAsyncNotification(int device, cudaAsyncCallback callbackFunc, void* userData, cudaAsyncCallbackHandle_t* callback) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceRegisterAsyncNotification.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceRegisterAsyncNotification called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceRegisterAsyncNotification called with device, callbackFunc, userData, callback\n");
	ret = orig_cudaDeviceRegisterAsyncNotification(device, callbackFunc, userData, callback);
	// fprintf(stderr, ">>>>>>>> cudaDeviceRegisterAsyncNotification returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceRegisterAsyncNotification returned with device, callbackFunc, userData, callback\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceUnregisterAsyncNotification)(int device, cudaAsyncCallbackHandle_t callback) = NULL;

__host__ cudaError_t  cudaDeviceUnregisterAsyncNotification(int device, cudaAsyncCallbackHandle_t callback) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceUnregisterAsyncNotification.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceUnregisterAsyncNotification called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceUnregisterAsyncNotification called with device, callback\n");
	ret = orig_cudaDeviceUnregisterAsyncNotification(device, callback);
	// fprintf(stderr, ">>>>>>>> cudaDeviceUnregisterAsyncNotification returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceUnregisterAsyncNotification returned with device, callback\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaGetLastError)(void) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaGetLastError(void) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetLastError.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetLastError called with \n");
	fprintf(fp, ">>>>>>>> cudaGetLastError called with \n");
	ret = orig_cudaGetLastError();
	// fprintf(stderr, ">>>>>>>> cudaGetLastError returned\n");
	fprintf(fp, ">>>>>>>> cudaGetLastError returned with \n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaPeekAtLastError)(void) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaPeekAtLastError(void) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaPeekAtLastError.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaPeekAtLastError called with \n");
	fprintf(fp, ">>>>>>>> cudaPeekAtLastError called with \n");
	ret = orig_cudaPeekAtLastError();
	// fprintf(stderr, ">>>>>>>> cudaPeekAtLastError returned\n");
	fprintf(fp, ">>>>>>>> cudaPeekAtLastError returned with \n");
	return ret;

}

static __host__ __cudart_builtin__ const char*  (*orig_cudaGetErrorName)(cudaError_t error) = NULL;

__host__ __cudart_builtin__ const char*  cudaGetErrorName(cudaError_t error) {
    	const char* ret;
	// Write your own custom c code in the cudaGetErrorName.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetErrorName called with \n");
	fprintf(fp, ">>>>>>>> cudaGetErrorName called with error\n");
	ret = orig_cudaGetErrorName(error);
	// fprintf(stderr, ">>>>>>>> cudaGetErrorName returned\n");
	fprintf(fp, ">>>>>>>> cudaGetErrorName returned with error\n");
	return ret;

}

static __host__ __cudart_builtin__ const char*  (*orig_cudaGetErrorString)(cudaError_t error) = NULL;

__host__ __cudart_builtin__ const char*  cudaGetErrorString(cudaError_t error) {
    	const char* ret;
	// Write your own custom c code in the cudaGetErrorString.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetErrorString called with \n");
	fprintf(fp, ">>>>>>>> cudaGetErrorString called with error\n");
	ret = orig_cudaGetErrorString(error);
	// fprintf(stderr, ">>>>>>>> cudaGetErrorString returned\n");
	fprintf(fp, ">>>>>>>> cudaGetErrorString returned with error\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaGetDeviceCount)(int *count) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaGetDeviceCount(int *count) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetDeviceCount.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetDeviceCount called with \n");
	fprintf(fp, ">>>>>>>> cudaGetDeviceCount called with count\n");
	ret = orig_cudaGetDeviceCount(count);
	// fprintf(stderr, ">>>>>>>> cudaGetDeviceCount returned\n");
	fprintf(fp, ">>>>>>>> cudaGetDeviceCount returned with count\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaGetDeviceProperties)(struct cudaDeviceProp *prop, int device) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaGetDeviceProperties(struct cudaDeviceProp *prop, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetDeviceProperties.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetDeviceProperties called with \n");
	fprintf(fp, ">>>>>>>> cudaGetDeviceProperties called with prop, device\n");
	ret = orig_cudaGetDeviceProperties(prop, device);
	// fprintf(stderr, ">>>>>>>> cudaGetDeviceProperties returned\n");
	fprintf(fp, ">>>>>>>> cudaGetDeviceProperties returned with prop, device\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaDeviceGetAttribute)(int *value, enum cudaDeviceAttr attr, int device) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaDeviceGetAttribute(int *value, enum cudaDeviceAttr attr, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetAttribute.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetAttribute called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetAttribute called with value, attr, device\n");
	ret = orig_cudaDeviceGetAttribute(value, attr, device);
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetAttribute returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetAttribute returned with value, attr, device\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceGetDefaultMemPool)(cudaMemPool_t *memPool, int device) = NULL;

__host__ cudaError_t  cudaDeviceGetDefaultMemPool(cudaMemPool_t *memPool, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetDefaultMemPool.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetDefaultMemPool called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetDefaultMemPool called with memPool, device\n");
	ret = orig_cudaDeviceGetDefaultMemPool(memPool, device);
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetDefaultMemPool returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetDefaultMemPool returned with memPool, device\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceSetMemPool)(int device, cudaMemPool_t memPool) = NULL;

__host__ cudaError_t  cudaDeviceSetMemPool(int device, cudaMemPool_t memPool) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceSetMemPool.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceSetMemPool called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceSetMemPool called with device, memPool\n");
	ret = orig_cudaDeviceSetMemPool(device, memPool);
	// fprintf(stderr, ">>>>>>>> cudaDeviceSetMemPool returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceSetMemPool returned with device, memPool\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceGetMemPool)(cudaMemPool_t *memPool, int device) = NULL;

__host__ cudaError_t  cudaDeviceGetMemPool(cudaMemPool_t *memPool, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetMemPool.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetMemPool called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetMemPool called with memPool, device\n");
	ret = orig_cudaDeviceGetMemPool(memPool, device);
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetMemPool returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetMemPool returned with memPool, device\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceGetNvSciSyncAttributes)(void *nvSciSyncAttrList, int device, int flags) = NULL;

__host__ cudaError_t  cudaDeviceGetNvSciSyncAttributes(void *nvSciSyncAttrList, int device, int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetNvSciSyncAttributes.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetNvSciSyncAttributes called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetNvSciSyncAttributes called with nvSciSyncAttrList, device, flags\n");
	ret = orig_cudaDeviceGetNvSciSyncAttributes(nvSciSyncAttrList, device, flags);
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetNvSciSyncAttributes returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetNvSciSyncAttributes returned with nvSciSyncAttrList, device, flags\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaDeviceGetP2PAttribute)(int *value, enum cudaDeviceP2PAttr attr, int srcDevice, int dstDevice) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaDeviceGetP2PAttribute(int *value, enum cudaDeviceP2PAttr attr, int srcDevice, int dstDevice) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetP2PAttribute.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetP2PAttribute called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetP2PAttribute called with value, attr, srcDevice, dstDevice\n");
	ret = orig_cudaDeviceGetP2PAttribute(value, attr, srcDevice, dstDevice);
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetP2PAttribute returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetP2PAttribute returned with value, attr, srcDevice, dstDevice\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaChooseDevice)(int *device, const struct cudaDeviceProp *prop) = NULL;

__host__ cudaError_t  cudaChooseDevice(int *device, const struct cudaDeviceProp *prop) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaChooseDevice.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaChooseDevice called with \n");
	fprintf(fp, ">>>>>>>> cudaChooseDevice called with device, prop\n");
	ret = orig_cudaChooseDevice(device, prop);
	// fprintf(stderr, ">>>>>>>> cudaChooseDevice returned\n");
	fprintf(fp, ">>>>>>>> cudaChooseDevice returned with device, prop\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaInitDevice)(int device, unsigned int deviceFlags, unsigned int flags) = NULL;

__host__ cudaError_t  cudaInitDevice(int device, unsigned int deviceFlags, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaInitDevice.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaInitDevice called with \n");
	fprintf(fp, ">>>>>>>> cudaInitDevice called with device, deviceFlags, flags\n");
	ret = orig_cudaInitDevice(device, deviceFlags, flags);
	// fprintf(stderr, ">>>>>>>> cudaInitDevice returned\n");
	fprintf(fp, ">>>>>>>> cudaInitDevice returned with device, deviceFlags, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaSetDevice)(int device) = NULL;

__host__ cudaError_t  cudaSetDevice(int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaSetDevice.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaSetDevice called with \n");
	fprintf(fp, ">>>>>>>> cudaSetDevice called with device\n");
	ret = orig_cudaSetDevice(device);
	// fprintf(stderr, ">>>>>>>> cudaSetDevice returned\n");
	fprintf(fp, ">>>>>>>> cudaSetDevice returned with device\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaGetDevice)(int *device) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaGetDevice(int *device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetDevice.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetDevice called with \n");
	fprintf(fp, ">>>>>>>> cudaGetDevice called with device\n");
	ret = orig_cudaGetDevice(device);
	// fprintf(stderr, ">>>>>>>> cudaGetDevice returned\n");
	fprintf(fp, ">>>>>>>> cudaGetDevice returned with device\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaSetValidDevices)(int *device_arr, int len) = NULL;

__host__ cudaError_t  cudaSetValidDevices(int *device_arr, int len) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaSetValidDevices.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaSetValidDevices called with \n");
	fprintf(fp, ">>>>>>>> cudaSetValidDevices called with device_arr, len\n");
	ret = orig_cudaSetValidDevices(device_arr, len);
	// fprintf(stderr, ">>>>>>>> cudaSetValidDevices returned\n");
	fprintf(fp, ">>>>>>>> cudaSetValidDevices returned with device_arr, len\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaSetDeviceFlags)( unsigned int flags ) = NULL;

__host__ cudaError_t  cudaSetDeviceFlags( unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaSetDeviceFlags.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaSetDeviceFlags called with \n");
	fprintf(fp, ">>>>>>>> cudaSetDeviceFlags called with flags\n");
	ret = orig_cudaSetDeviceFlags(flags);
	// fprintf(stderr, ">>>>>>>> cudaSetDeviceFlags returned\n");
	fprintf(fp, ">>>>>>>> cudaSetDeviceFlags returned with flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetDeviceFlags)( unsigned int *flags ) = NULL;

__host__ cudaError_t  cudaGetDeviceFlags( unsigned int *flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetDeviceFlags.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetDeviceFlags called with \n");
	fprintf(fp, ">>>>>>>> cudaGetDeviceFlags called with flags\n");
	ret = orig_cudaGetDeviceFlags(flags);
	// fprintf(stderr, ">>>>>>>> cudaGetDeviceFlags returned\n");
	fprintf(fp, ">>>>>>>> cudaGetDeviceFlags returned with flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamCreate)(cudaStream_t *pStream) = NULL;

__host__ cudaError_t  cudaStreamCreate(cudaStream_t *pStream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamCreate.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamCreate called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamCreate called with pStream\n");
	ret = orig_cudaStreamCreate(pStream);
	// fprintf(stderr, ">>>>>>>> cudaStreamCreate returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamCreate returned with pStream\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamCreateWithFlags)(cudaStream_t *pStream, unsigned int flags) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamCreateWithFlags(cudaStream_t *pStream, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamCreateWithFlags.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamCreateWithFlags called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamCreateWithFlags called with pStream, flags\n");
	ret = orig_cudaStreamCreateWithFlags(pStream, flags);
	// fprintf(stderr, ">>>>>>>> cudaStreamCreateWithFlags returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamCreateWithFlags returned with pStream, flags\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamCreateWithPriority)(cudaStream_t *pStream, unsigned int flags, int priority) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamCreateWithPriority(cudaStream_t *pStream, unsigned int flags, int priority) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamCreateWithPriority.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamCreateWithPriority called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamCreateWithPriority called with pStream, flags, priority\n");
	ret = orig_cudaStreamCreateWithPriority(pStream, flags, priority);
	// fprintf(stderr, ">>>>>>>> cudaStreamCreateWithPriority returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamCreateWithPriority returned with pStream, flags, priority\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamGetPriority)(cudaStream_t hStream, int *priority) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamGetPriority(cudaStream_t hStream, int *priority) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamGetPriority.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamGetPriority called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamGetPriority called with hStream, priority\n");
	ret = orig_cudaStreamGetPriority(hStream, priority);
	// fprintf(stderr, ">>>>>>>> cudaStreamGetPriority returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamGetPriority returned with hStream, priority\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamGetFlags)(cudaStream_t hStream, unsigned int *flags) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamGetFlags(cudaStream_t hStream, unsigned int *flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamGetFlags.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamGetFlags called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamGetFlags called with hStream, flags\n");
	ret = orig_cudaStreamGetFlags(hStream, flags);
	// fprintf(stderr, ">>>>>>>> cudaStreamGetFlags returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamGetFlags returned with hStream, flags\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamGetId)(cudaStream_t hStream, unsigned long long *streamId) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamGetId(cudaStream_t hStream, unsigned long long *streamId) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamGetId.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamGetId called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamGetId called with hStream, streamId\n");
	ret = orig_cudaStreamGetId(hStream, streamId);
	// fprintf(stderr, ">>>>>>>> cudaStreamGetId returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamGetId returned with hStream, streamId\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaCtxResetPersistingL2Cache)(void) = NULL;

__host__ cudaError_t  cudaCtxResetPersistingL2Cache(void) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaCtxResetPersistingL2Cache.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaCtxResetPersistingL2Cache called with \n");
	fprintf(fp, ">>>>>>>> cudaCtxResetPersistingL2Cache called with \n");
	ret = orig_cudaCtxResetPersistingL2Cache();
	// fprintf(stderr, ">>>>>>>> cudaCtxResetPersistingL2Cache returned\n");
	fprintf(fp, ">>>>>>>> cudaCtxResetPersistingL2Cache returned with \n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamCopyAttributes)(cudaStream_t dst, cudaStream_t src) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamCopyAttributes(cudaStream_t dst, cudaStream_t src) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamCopyAttributes.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamCopyAttributes called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamCopyAttributes called with dst, src\n");
	ret = orig_cudaStreamCopyAttributes(dst, src);
	// fprintf(stderr, ">>>>>>>> cudaStreamCopyAttributes returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamCopyAttributes returned with dst, src\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamGetAttribute)(        cudaStream_t hStream, cudaStreamAttrID attr,        cudaStreamAttrValue *value_out) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamGetAttribute(        cudaStream_t hStream, cudaStreamAttrID attr,        cudaStreamAttrValue *value_out) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamGetAttribute.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamGetAttribute called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamGetAttribute called with hStream, attr, value_out\n");
	ret = orig_cudaStreamGetAttribute(hStream, attr, value_out);
	// fprintf(stderr, ">>>>>>>> cudaStreamGetAttribute returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamGetAttribute returned with hStream, attr, value_out\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamSetAttribute)(        cudaStream_t hStream, cudaStreamAttrID attr,        const cudaStreamAttrValue *value) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamSetAttribute(        cudaStream_t hStream, cudaStreamAttrID attr,        const cudaStreamAttrValue *value) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamSetAttribute.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamSetAttribute called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamSetAttribute called with hStream, attr, value\n");
	ret = orig_cudaStreamSetAttribute(hStream, attr, value);
	// fprintf(stderr, ">>>>>>>> cudaStreamSetAttribute returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamSetAttribute returned with hStream, attr, value\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamDestroy)(cudaStream_t stream) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamDestroy(cudaStream_t stream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamDestroy.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamDestroy called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamDestroy called with stream\n");
	ret = orig_cudaStreamDestroy(stream);
	// fprintf(stderr, ">>>>>>>> cudaStreamDestroy returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamDestroy returned with stream\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamWaitEvent)(cudaStream_t stream, cudaEvent_t event, unsigned int flags ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamWaitEvent.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamWaitEvent called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamWaitEvent called with stream, event, flags\n");
	ret = orig_cudaStreamWaitEvent(stream, event, flags);
	// fprintf(stderr, ">>>>>>>> cudaStreamWaitEvent returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamWaitEvent returned with stream, event, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamAddCallback)(cudaStream_t stream,        cudaStreamCallback_t callback, void *userData, unsigned int flags) = NULL;

__host__ cudaError_t  cudaStreamAddCallback(cudaStream_t stream,        cudaStreamCallback_t callback, void *userData, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamAddCallback.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamAddCallback called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamAddCallback called with stream, callback, userData, flags\n");
	ret = orig_cudaStreamAddCallback(stream, callback, userData, flags);
	// fprintf(stderr, ">>>>>>>> cudaStreamAddCallback returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamAddCallback returned with stream, callback, userData, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamSynchronize)(cudaStream_t stream) = NULL;

__host__ cudaError_t  cudaStreamSynchronize(cudaStream_t stream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamSynchronize.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamSynchronize called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamSynchronize called with stream\n");
	ret = orig_cudaStreamSynchronize(stream);
	// fprintf(stderr, ">>>>>>>> cudaStreamSynchronize returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamSynchronize returned with stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamQuery)(cudaStream_t stream) = NULL;

__host__ cudaError_t  cudaStreamQuery(cudaStream_t stream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamQuery.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamQuery called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamQuery called with stream\n");
	ret = orig_cudaStreamQuery(stream);
	// fprintf(stderr, ">>>>>>>> cudaStreamQuery returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamQuery returned with stream\n");
	return ret;

}

// static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamAttachMemAsync)(cudaStream_t stream, void *devPtr, size_t length , unsigned int flags = cudaMemAttachSingle) = NULL;

// __host__ __cudart_builtin__ cudaError_t  cudaStreamAttachMemAsync(cudaStream_t stream, void *devPtr, size_t length , unsigned int flags = cudaMemAttachSingle) {
//     	cudaError_t ret;
// 	// Write your own custom c code in the cudaStreamAttachMemAsync.c file
// 	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
// 	// fprintf(stderr, ">>>>>>>> cudaStreamAttachMemAsync called with \n");
// 	fprintf(fp, ">>>>>>>> cudaStreamAttachMemAsync called with stream, devPtr, length, flags\n");
// 	ret = orig_cudaStreamAttachMemAsync(stream, devPtr, length, flags);
// 	// fprintf(stderr, ">>>>>>>> cudaStreamAttachMemAsync returned\n");
// 	fprintf(fp, ">>>>>>>> cudaStreamAttachMemAsync returned with stream, devPtr, length, flags\n");
// 	return ret;

// }

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamAttachMemAsync)(cudaStream_t stream, void *devPtr, size_t length , unsigned int flags) = NULL;

// __host__ __cudart_builtin__ cudaError_t  cudaStreamAttachMemAsync(cudaStream_t stream, void *devPtr, size_t length , unsigned int flags) {
//     	cudaError_t ret;
// 	// Write your own custom c code in the cudaStreamAttachMemAsync.c file
// 	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
// 	// fprintf(stderr, ">>>>>>>> cudaStreamAttachMemAsync called with \n");
// 	fprintf(fp, ">>>>>>>> cudaStreamAttachMemAsync called with stream, devPtr, length, flags\n");
// 	ret = orig_cudaStreamAttachMemAsync(stream, devPtr, length, flags);
// 	// fprintf(stderr, ">>>>>>>> cudaStreamAttachMemAsync returned\n");
// 	fprintf(fp, ">>>>>>>> cudaStreamAttachMemAsync returned with stream, devPtr, length, flags\n");
// 	return ret;

// }

static __host__ cudaError_t  (*orig_cudaStreamBeginCapture)(cudaStream_t stream, enum cudaStreamCaptureMode mode) = NULL;

__host__ cudaError_t  cudaStreamBeginCapture(cudaStream_t stream, enum cudaStreamCaptureMode mode) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamBeginCapture.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamBeginCapture called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamBeginCapture called with stream, mode\n");
	ret = orig_cudaStreamBeginCapture(stream, mode);
	// fprintf(stderr, ">>>>>>>> cudaStreamBeginCapture returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamBeginCapture returned with stream, mode\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamBeginCaptureToGraph)(cudaStream_t stream, cudaGraph_t graph, const cudaGraphNode_t *dependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, enum cudaStreamCaptureMode mode) = NULL;

__host__ cudaError_t  cudaStreamBeginCaptureToGraph(cudaStream_t stream, cudaGraph_t graph, const cudaGraphNode_t *dependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, enum cudaStreamCaptureMode mode) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamBeginCaptureToGraph.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamBeginCaptureToGraph called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamBeginCaptureToGraph called with stream, graph, dependencies, dependencyData, numDependencies, mode\n");
	ret = orig_cudaStreamBeginCaptureToGraph(stream, graph, dependencies, dependencyData, numDependencies, mode);
	// fprintf(stderr, ">>>>>>>> cudaStreamBeginCaptureToGraph returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamBeginCaptureToGraph returned with stream, graph, dependencies, dependencyData, numDependencies, mode\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaThreadExchangeStreamCaptureMode)(enum cudaStreamCaptureMode *mode) = NULL;

__host__ cudaError_t  cudaThreadExchangeStreamCaptureMode(enum cudaStreamCaptureMode *mode) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaThreadExchangeStreamCaptureMode.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaThreadExchangeStreamCaptureMode called with \n");
	fprintf(fp, ">>>>>>>> cudaThreadExchangeStreamCaptureMode called with mode\n");
	ret = orig_cudaThreadExchangeStreamCaptureMode(mode);
	// fprintf(stderr, ">>>>>>>> cudaThreadExchangeStreamCaptureMode returned\n");
	fprintf(fp, ">>>>>>>> cudaThreadExchangeStreamCaptureMode returned with mode\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamEndCapture)(cudaStream_t stream, cudaGraph_t *pGraph) = NULL;

__host__ cudaError_t  cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t *pGraph) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamEndCapture.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamEndCapture called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamEndCapture called with stream, pGraph\n");
	ret = orig_cudaStreamEndCapture(stream, pGraph);
	// fprintf(stderr, ">>>>>>>> cudaStreamEndCapture returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamEndCapture returned with stream, pGraph\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamIsCapturing)(cudaStream_t stream, enum cudaStreamCaptureStatus *pCaptureStatus) = NULL;

__host__ cudaError_t  cudaStreamIsCapturing(cudaStream_t stream, enum cudaStreamCaptureStatus *pCaptureStatus) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamIsCapturing.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamIsCapturing called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamIsCapturing called with stream, pCaptureStatus\n");
	ret = orig_cudaStreamIsCapturing(stream, pCaptureStatus);
	// fprintf(stderr, ">>>>>>>> cudaStreamIsCapturing returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamIsCapturing returned with stream, pCaptureStatus\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamGetCaptureInfo)(cudaStream_t stream, enum cudaStreamCaptureStatus *captureStatus_out, unsigned long long *id_out , cudaGraph_t *graph_out , const cudaGraphNode_t **dependencies_out , size_t *numDependencies_out ) = NULL;

__host__ cudaError_t  cudaStreamGetCaptureInfo(cudaStream_t stream, enum cudaStreamCaptureStatus *captureStatus_out, unsigned long long *id_out , cudaGraph_t *graph_out , const cudaGraphNode_t **dependencies_out , size_t *numDependencies_out ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamGetCaptureInfo.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamGetCaptureInfo called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamGetCaptureInfo called with stream, captureStatus_out, id_out, graph_out, dependencies_out, numDependencies_out\n");
	ret = orig_cudaStreamGetCaptureInfo(stream, captureStatus_out, id_out, graph_out, dependencies_out, numDependencies_out);
	// fprintf(stderr, ">>>>>>>> cudaStreamGetCaptureInfo returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamGetCaptureInfo returned with stream, captureStatus_out, id_out, graph_out, dependencies_out, numDependencies_out\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamGetCaptureInfo_v3)(cudaStream_t stream,    enum cudaStreamCaptureStatus *captureStatus_out, unsigned long long *id_out ,    cudaGraph_t *graph_out , const cudaGraphNode_t **dependencies_out ,    const cudaGraphEdgeData **edgeData_out , size_t *numDependencies_out ) = NULL;

__host__ cudaError_t  cudaStreamGetCaptureInfo_v3(cudaStream_t stream,    enum cudaStreamCaptureStatus *captureStatus_out, unsigned long long *id_out ,    cudaGraph_t *graph_out , const cudaGraphNode_t **dependencies_out ,    const cudaGraphEdgeData **edgeData_out , size_t *numDependencies_out ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamGetCaptureInfo_v3.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamGetCaptureInfo_v3 called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamGetCaptureInfo_v3 called with stream, captureStatus_out, id_out, graph_out, dependencies_out, edgeData_out, numDependencies_out\n");
	ret = orig_cudaStreamGetCaptureInfo_v3(stream, captureStatus_out, id_out, graph_out, dependencies_out, edgeData_out, numDependencies_out);
	// fprintf(stderr, ">>>>>>>> cudaStreamGetCaptureInfo_v3 returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamGetCaptureInfo_v3 returned with stream, captureStatus_out, id_out, graph_out, dependencies_out, edgeData_out, numDependencies_out\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamUpdateCaptureDependencies)(cudaStream_t stream, cudaGraphNode_t *dependencies, size_t numDependencies, unsigned int flags ) = NULL;

__host__ cudaError_t  cudaStreamUpdateCaptureDependencies(cudaStream_t stream, cudaGraphNode_t *dependencies, size_t numDependencies, unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamUpdateCaptureDependencies.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamUpdateCaptureDependencies called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamUpdateCaptureDependencies called with stream, dependencies, numDependencies, flags\n");
	ret = orig_cudaStreamUpdateCaptureDependencies(stream, dependencies, numDependencies, flags);
	// fprintf(stderr, ">>>>>>>> cudaStreamUpdateCaptureDependencies returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamUpdateCaptureDependencies returned with stream, dependencies, numDependencies, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamUpdateCaptureDependencies_v2)(cudaStream_t stream, cudaGraphNode_t *dependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, unsigned int flags ) = NULL;

__host__ cudaError_t  cudaStreamUpdateCaptureDependencies_v2(cudaStream_t stream, cudaGraphNode_t *dependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamUpdateCaptureDependencies_v2.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaStreamUpdateCaptureDependencies_v2 called with \n");
	fprintf(fp, ">>>>>>>> cudaStreamUpdateCaptureDependencies_v2 called with stream, dependencies, dependencyData, numDependencies, flags\n");
	ret = orig_cudaStreamUpdateCaptureDependencies_v2(stream, dependencies, dependencyData, numDependencies, flags);
	// fprintf(stderr, ">>>>>>>> cudaStreamUpdateCaptureDependencies_v2 returned\n");
	fprintf(fp, ">>>>>>>> cudaStreamUpdateCaptureDependencies_v2 returned with stream, dependencies, dependencyData, numDependencies, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaEventCreate)(cudaEvent_t *event) = NULL;

__host__ cudaError_t  cudaEventCreate(cudaEvent_t *event) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaEventCreate.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaEventCreate called with \n");
	fprintf(fp, ">>>>>>>> cudaEventCreate called with event\n");
	ret = orig_cudaEventCreate(event);
	// fprintf(stderr, ">>>>>>>> cudaEventCreate returned\n");
	fprintf(fp, ">>>>>>>> cudaEventCreate returned with event\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaEventCreateWithFlags)(cudaEvent_t *event, unsigned int flags) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaEventCreateWithFlags(cudaEvent_t *event, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaEventCreateWithFlags.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaEventCreateWithFlags called with \n");
	fprintf(fp, ">>>>>>>> cudaEventCreateWithFlags called with event, flags\n");
	ret = orig_cudaEventCreateWithFlags(event, flags);
	// fprintf(stderr, ">>>>>>>> cudaEventCreateWithFlags returned\n");
	fprintf(fp, ">>>>>>>> cudaEventCreateWithFlags returned with event, flags\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaEventRecord)(cudaEvent_t event, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaEventRecord(cudaEvent_t event, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaEventRecord.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaEventRecord called with \n");
	fprintf(fp, ">>>>>>>> cudaEventRecord called with event, stream\n");
	ret = orig_cudaEventRecord(event, stream);
	// fprintf(stderr, ">>>>>>>> cudaEventRecord returned\n");
	fprintf(fp, ">>>>>>>> cudaEventRecord returned with event, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaEventQuery)(cudaEvent_t event) = NULL;

__host__ cudaError_t  cudaEventQuery(cudaEvent_t event) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaEventQuery.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaEventQuery called with \n");
	fprintf(fp, ">>>>>>>> cudaEventQuery called with event\n");
	ret = orig_cudaEventQuery(event);
	// fprintf(stderr, ">>>>>>>> cudaEventQuery returned\n");
	fprintf(fp, ">>>>>>>> cudaEventQuery returned with event\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaEventSynchronize)(cudaEvent_t event) = NULL;

__host__ cudaError_t  cudaEventSynchronize(cudaEvent_t event) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaEventSynchronize.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaEventSynchronize called with \n");
	fprintf(fp, ">>>>>>>> cudaEventSynchronize called with event\n");
	ret = orig_cudaEventSynchronize(event);
	// fprintf(stderr, ">>>>>>>> cudaEventSynchronize returned\n");
	fprintf(fp, ">>>>>>>> cudaEventSynchronize returned with event\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaEventDestroy)(cudaEvent_t event) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaEventDestroy(cudaEvent_t event) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaEventDestroy.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaEventDestroy called with \n");
	fprintf(fp, ">>>>>>>> cudaEventDestroy called with event\n");
	ret = orig_cudaEventDestroy(event);
	// fprintf(stderr, ">>>>>>>> cudaEventDestroy returned\n");
	fprintf(fp, ">>>>>>>> cudaEventDestroy returned with event\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaEventElapsedTime)(float *ms, cudaEvent_t start, cudaEvent_t end) = NULL;

__host__ cudaError_t  cudaEventElapsedTime(float *ms, cudaEvent_t start, cudaEvent_t end) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaEventElapsedTime.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaEventElapsedTime called with \n");
	fprintf(fp, ">>>>>>>> cudaEventElapsedTime called with ms, start, end\n");
	ret = orig_cudaEventElapsedTime(ms, start, end);
	// fprintf(stderr, ">>>>>>>> cudaEventElapsedTime returned\n");
	fprintf(fp, ">>>>>>>> cudaEventElapsedTime returned with ms, start, end\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaImportExternalMemory)(cudaExternalMemory_t *extMem_out, const struct cudaExternalMemoryHandleDesc *memHandleDesc) = NULL;

__host__ cudaError_t  cudaImportExternalMemory(cudaExternalMemory_t *extMem_out, const struct cudaExternalMemoryHandleDesc *memHandleDesc) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaImportExternalMemory.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaImportExternalMemory called with \n");
	fprintf(fp, ">>>>>>>> cudaImportExternalMemory called with extMem_out, memHandleDesc\n");
	ret = orig_cudaImportExternalMemory(extMem_out, memHandleDesc);
	// fprintf(stderr, ">>>>>>>> cudaImportExternalMemory returned\n");
	fprintf(fp, ">>>>>>>> cudaImportExternalMemory returned with extMem_out, memHandleDesc\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaExternalMemoryGetMappedBuffer)(void **devPtr, cudaExternalMemory_t extMem, const struct cudaExternalMemoryBufferDesc *bufferDesc) = NULL;

__host__ cudaError_t  cudaExternalMemoryGetMappedBuffer(void **devPtr, cudaExternalMemory_t extMem, const struct cudaExternalMemoryBufferDesc *bufferDesc) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaExternalMemoryGetMappedBuffer.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaExternalMemoryGetMappedBuffer called with \n");
	fprintf(fp, ">>>>>>>> cudaExternalMemoryGetMappedBuffer called with devPtr, extMem, bufferDesc\n");
	ret = orig_cudaExternalMemoryGetMappedBuffer(devPtr, extMem, bufferDesc);
	// fprintf(stderr, ">>>>>>>> cudaExternalMemoryGetMappedBuffer returned\n");
	fprintf(fp, ">>>>>>>> cudaExternalMemoryGetMappedBuffer returned with devPtr, extMem, bufferDesc\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaExternalMemoryGetMappedMipmappedArray)(cudaMipmappedArray_t *mipmap, cudaExternalMemory_t extMem, const struct cudaExternalMemoryMipmappedArrayDesc *mipmapDesc) = NULL;

__host__ cudaError_t  cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t *mipmap, cudaExternalMemory_t extMem, const struct cudaExternalMemoryMipmappedArrayDesc *mipmapDesc) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaExternalMemoryGetMappedMipmappedArray.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaExternalMemoryGetMappedMipmappedArray called with \n");
	fprintf(fp, ">>>>>>>> cudaExternalMemoryGetMappedMipmappedArray called with mipmap, extMem, mipmapDesc\n");
	ret = orig_cudaExternalMemoryGetMappedMipmappedArray(mipmap, extMem, mipmapDesc);
	// fprintf(stderr, ">>>>>>>> cudaExternalMemoryGetMappedMipmappedArray returned\n");
	fprintf(fp, ">>>>>>>> cudaExternalMemoryGetMappedMipmappedArray returned with mipmap, extMem, mipmapDesc\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDestroyExternalMemory)(cudaExternalMemory_t extMem) = NULL;

__host__ cudaError_t  cudaDestroyExternalMemory(cudaExternalMemory_t extMem) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDestroyExternalMemory.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDestroyExternalMemory called with \n");
	fprintf(fp, ">>>>>>>> cudaDestroyExternalMemory called with extMem\n");
	ret = orig_cudaDestroyExternalMemory(extMem);
	// fprintf(stderr, ">>>>>>>> cudaDestroyExternalMemory returned\n");
	fprintf(fp, ">>>>>>>> cudaDestroyExternalMemory returned with extMem\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaImportExternalSemaphore)(cudaExternalSemaphore_t *extSem_out, const struct cudaExternalSemaphoreHandleDesc *semHandleDesc) = NULL;

__host__ cudaError_t  cudaImportExternalSemaphore(cudaExternalSemaphore_t *extSem_out, const struct cudaExternalSemaphoreHandleDesc *semHandleDesc) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaImportExternalSemaphore.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaImportExternalSemaphore called with \n");
	fprintf(fp, ">>>>>>>> cudaImportExternalSemaphore called with extSem_out, semHandleDesc\n");
	ret = orig_cudaImportExternalSemaphore(extSem_out, semHandleDesc);
	// fprintf(stderr, ">>>>>>>> cudaImportExternalSemaphore returned\n");
	fprintf(fp, ">>>>>>>> cudaImportExternalSemaphore returned with extSem_out, semHandleDesc\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaSignalExternalSemaphoresAsync)(const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreSignalParams *paramsArray, unsigned int numExtSems, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaSignalExternalSemaphoresAsync(const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreSignalParams *paramsArray, unsigned int numExtSems, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaSignalExternalSemaphoresAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaSignalExternalSemaphoresAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaSignalExternalSemaphoresAsync called with extSemArray, paramsArray, numExtSems, stream\n");
	ret = orig_cudaSignalExternalSemaphoresAsync(extSemArray, paramsArray, numExtSems, stream);
	// fprintf(stderr, ">>>>>>>> cudaSignalExternalSemaphoresAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaSignalExternalSemaphoresAsync returned with extSemArray, paramsArray, numExtSems, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaWaitExternalSemaphoresAsync)(const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreWaitParams *paramsArray, unsigned int numExtSems, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaWaitExternalSemaphoresAsync(const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreWaitParams *paramsArray, unsigned int numExtSems, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaWaitExternalSemaphoresAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaWaitExternalSemaphoresAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaWaitExternalSemaphoresAsync called with extSemArray, paramsArray, numExtSems, stream\n");
	ret = orig_cudaWaitExternalSemaphoresAsync(extSemArray, paramsArray, numExtSems, stream);
	// fprintf(stderr, ">>>>>>>> cudaWaitExternalSemaphoresAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaWaitExternalSemaphoresAsync returned with extSemArray, paramsArray, numExtSems, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDestroyExternalSemaphore)(cudaExternalSemaphore_t extSem) = NULL;

__host__ cudaError_t  cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDestroyExternalSemaphore.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDestroyExternalSemaphore called with \n");
	fprintf(fp, ">>>>>>>> cudaDestroyExternalSemaphore called with extSem\n");
	ret = orig_cudaDestroyExternalSemaphore(extSem);
	// fprintf(stderr, ">>>>>>>> cudaDestroyExternalSemaphore returned\n");
	fprintf(fp, ">>>>>>>> cudaDestroyExternalSemaphore returned with extSem\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaLaunchKernel)(const void *func, dim3 gridDim, dim3 blockDim, void **args, size_t sharedMem, cudaStream_t stream) = NULL;

__host__ cudaError_t  cudaLaunchKernel(const void *func, dim3 gridDim, dim3 blockDim, void **args, size_t sharedMem, cudaStream_t stream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaLaunchKernel.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaLaunchKernel called with \n");
	fprintf(fp, ">>>>>>>> cudaLaunchKernel called with stream = %d \n", stream);
	ret = orig_cudaLaunchKernel(func, gridDim, blockDim, args, sharedMem, stream);
	// fprintf(stderr, ">>>>>>>> cudaLaunchKernel returned\n");
	fprintf(fp, ">>>>>>>> cudaLaunchKernel returned with func, gridDim, blockDim, args, sharedMem, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaLaunchKernelExC)(const cudaLaunchConfig_t *config, const void *func, void **args) = NULL;

__host__ cudaError_t  cudaLaunchKernelExC(const cudaLaunchConfig_t *config, const void *func, void **args) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaLaunchKernelExC.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaLaunchKernelExC called with \n");
	fprintf(fp, ">>>>>>>> cudaLaunchKernelExC called with config, func, args\n");
	ret = orig_cudaLaunchKernelExC(config, func, args);
	// fprintf(stderr, ">>>>>>>> cudaLaunchKernelExC returned\n");
	fprintf(fp, ">>>>>>>> cudaLaunchKernelExC returned with config, func, args\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaLaunchCooperativeKernel)(const void *func, dim3 gridDim, dim3 blockDim, void **args, size_t sharedMem, cudaStream_t stream) = NULL;

__host__ cudaError_t  cudaLaunchCooperativeKernel(const void *func, dim3 gridDim, dim3 blockDim, void **args, size_t sharedMem, cudaStream_t stream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaLaunchCooperativeKernel.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaLaunchCooperativeKernel called with \n");
	fprintf(fp, ">>>>>>>> cudaLaunchCooperativeKernel called with func, gridDim, blockDim, args, sharedMem, stream\n");
	ret = orig_cudaLaunchCooperativeKernel(func, gridDim, blockDim, args, sharedMem, stream);
	// fprintf(stderr, ">>>>>>>> cudaLaunchCooperativeKernel returned\n");
	fprintf(fp, ">>>>>>>> cudaLaunchCooperativeKernel returned with func, gridDim, blockDim, args, sharedMem, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaFuncSetCacheConfig)(const void *func, enum cudaFuncCache cacheConfig) = NULL;

__host__ cudaError_t  cudaFuncSetCacheConfig(const void *func, enum cudaFuncCache cacheConfig) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFuncSetCacheConfig.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaFuncSetCacheConfig called with \n");
	fprintf(fp, ">>>>>>>> cudaFuncSetCacheConfig called with func, cacheConfig\n");
	ret = orig_cudaFuncSetCacheConfig(func, cacheConfig);
	// fprintf(stderr, ">>>>>>>> cudaFuncSetCacheConfig returned\n");
	fprintf(fp, ">>>>>>>> cudaFuncSetCacheConfig returned with func, cacheConfig\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaFuncGetAttributes)(struct cudaFuncAttributes *attr, const void *func) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaFuncGetAttributes(struct cudaFuncAttributes *attr, const void *func) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFuncGetAttributes.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaFuncGetAttributes called with \n");
	fprintf(fp, ">>>>>>>> cudaFuncGetAttributes called with attr, func\n");
	ret = orig_cudaFuncGetAttributes(attr, func);
	// fprintf(stderr, ">>>>>>>> cudaFuncGetAttributes returned\n");
	fprintf(fp, ">>>>>>>> cudaFuncGetAttributes returned with attr, func\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaFuncSetAttribute)(const void *func, enum cudaFuncAttribute attr, int value) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaFuncSetAttribute(const void *func, enum cudaFuncAttribute attr, int value) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFuncSetAttribute.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaFuncSetAttribute called with \n");
	fprintf(fp, ">>>>>>>> cudaFuncSetAttribute called with func, attr, value\n");
	ret = orig_cudaFuncSetAttribute(func, attr, value);
	// fprintf(stderr, ">>>>>>>> cudaFuncSetAttribute returned\n");
	fprintf(fp, ">>>>>>>> cudaFuncSetAttribute returned with func, attr, value\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaFuncGetName)(const char **name, const void *func) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaFuncGetName(const char **name, const void *func) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFuncGetName.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaFuncGetName called with \n");
	fprintf(fp, ">>>>>>>> cudaFuncGetName called with name, func\n");
	ret = orig_cudaFuncGetName(name, func);
	// fprintf(stderr, ">>>>>>>> cudaFuncGetName returned\n");
	fprintf(fp, ">>>>>>>> cudaFuncGetName returned with name, func\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaFuncGetParamInfo)(const void *func, size_t paramIndex, size_t *paramOffset, size_t *paramSize) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaFuncGetParamInfo(const void *func, size_t paramIndex, size_t *paramOffset, size_t *paramSize) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFuncGetParamInfo.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaFuncGetParamInfo called with \n");
	fprintf(fp, ">>>>>>>> cudaFuncGetParamInfo called with func, paramIndex, paramOffset, paramSize\n");
	ret = orig_cudaFuncGetParamInfo(func, paramIndex, paramOffset, paramSize);
	// fprintf(stderr, ">>>>>>>> cudaFuncGetParamInfo returned\n");
	fprintf(fp, ">>>>>>>> cudaFuncGetParamInfo returned with func, paramIndex, paramOffset, paramSize\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaLaunchHostFunc)(cudaStream_t stream, cudaHostFn_t fn, void *userData) = NULL;

__host__ cudaError_t  cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void *userData) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaLaunchHostFunc.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaLaunchHostFunc called with \n");
	fprintf(fp, ">>>>>>>> cudaLaunchHostFunc called with stream, fn, userData\n");
	ret = orig_cudaLaunchHostFunc(stream, fn, userData);
	// fprintf(stderr, ">>>>>>>> cudaLaunchHostFunc returned\n");
	fprintf(fp, ">>>>>>>> cudaLaunchHostFunc returned with stream, fn, userData\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaOccupancyMaxActiveBlocksPerMultiprocessor)(int *numBlocks, const void *func, int blockSize, size_t dynamicSMemSize) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *numBlocks, const void *func, int blockSize, size_t dynamicSMemSize) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaOccupancyMaxActiveBlocksPerMultiprocessor.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessor called with \n");
	fprintf(fp, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessor called with numBlocks, func, blockSize, dynamicSMemSize\n");
	ret = orig_cudaOccupancyMaxActiveBlocksPerMultiprocessor(numBlocks, func, blockSize, dynamicSMemSize);
	// fprintf(stderr, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessor returned\n");
	fprintf(fp, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessor returned with numBlocks, func, blockSize, dynamicSMemSize\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaOccupancyAvailableDynamicSMemPerBlock)(size_t *dynamicSmemSize, const void *func, int numBlocks, int blockSize) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaOccupancyAvailableDynamicSMemPerBlock(size_t *dynamicSmemSize, const void *func, int numBlocks, int blockSize) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaOccupancyAvailableDynamicSMemPerBlock.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaOccupancyAvailableDynamicSMemPerBlock called with \n");
	fprintf(fp, ">>>>>>>> cudaOccupancyAvailableDynamicSMemPerBlock called with dynamicSmemSize, func, numBlocks, blockSize\n");
	ret = orig_cudaOccupancyAvailableDynamicSMemPerBlock(dynamicSmemSize, func, numBlocks, blockSize);
	// fprintf(stderr, ">>>>>>>> cudaOccupancyAvailableDynamicSMemPerBlock returned\n");
	fprintf(fp, ">>>>>>>> cudaOccupancyAvailableDynamicSMemPerBlock returned with dynamicSmemSize, func, numBlocks, blockSize\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags)(int *numBlocks, const void *func, int blockSize, size_t dynamicSMemSize, unsigned int flags) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *numBlocks, const void *func, int blockSize, size_t dynamicSMemSize, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags called with \n");
	fprintf(fp, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags called with numBlocks, func, blockSize, dynamicSMemSize, flags\n");
	ret = orig_cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, func, blockSize, dynamicSMemSize, flags);
	// fprintf(stderr, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags returned\n");
	fprintf(fp, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags returned with numBlocks, func, blockSize, dynamicSMemSize, flags\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaOccupancyMaxPotentialClusterSize)(int *clusterSize, const void *func, const cudaLaunchConfig_t *launchConfig) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaOccupancyMaxPotentialClusterSize(int *clusterSize, const void *func, const cudaLaunchConfig_t *launchConfig) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaOccupancyMaxPotentialClusterSize.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaOccupancyMaxPotentialClusterSize called with \n");
	fprintf(fp, ">>>>>>>> cudaOccupancyMaxPotentialClusterSize called with clusterSize, func, launchConfig\n");
	ret = orig_cudaOccupancyMaxPotentialClusterSize(clusterSize, func, launchConfig);
	// fprintf(stderr, ">>>>>>>> cudaOccupancyMaxPotentialClusterSize returned\n");
	fprintf(fp, ">>>>>>>> cudaOccupancyMaxPotentialClusterSize returned with clusterSize, func, launchConfig\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaOccupancyMaxActiveClusters)(int *numClusters, const void *func, const cudaLaunchConfig_t *launchConfig) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaOccupancyMaxActiveClusters(int *numClusters, const void *func, const cudaLaunchConfig_t *launchConfig) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaOccupancyMaxActiveClusters.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaOccupancyMaxActiveClusters called with \n");
	fprintf(fp, ">>>>>>>> cudaOccupancyMaxActiveClusters called with numClusters, func, launchConfig\n");
	ret = orig_cudaOccupancyMaxActiveClusters(numClusters, func, launchConfig);
	// fprintf(stderr, ">>>>>>>> cudaOccupancyMaxActiveClusters returned\n");
	fprintf(fp, ">>>>>>>> cudaOccupancyMaxActiveClusters returned with numClusters, func, launchConfig\n");
	return ret;

}

// static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMallocManaged)(void **devPtr, size_t size, unsigned int flags = cudaMemAttachGlobal) = NULL;

// __host__ __cudart_builtin__ cudaError_t  cudaMallocManaged(void **devPtr, size_t size, unsigned int flags = cudaMemAttachGlobal) {
//     	cudaError_t ret;
// 	// Write your own custom c code in the cudaMallocManaged.c file
// 	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
// 	// fprintf(stderr, ">>>>>>>> cudaMallocManaged called with \n");
// 	fprintf(fp, ">>>>>>>> cudaMallocManaged called with devPtr, size, flags\n");
// 	ret = orig_cudaMallocManaged(devPtr, size, flags);
// 	// fprintf(stderr, ">>>>>>>> cudaMallocManaged returned\n");
// 	fprintf(fp, ">>>>>>>> cudaMallocManaged returned with devPtr, size, flags\n");
// 	return ret;

// }

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMallocManaged)(void **devPtr, size_t size, unsigned int flags) = NULL;

// __host__ __cudart_builtin__ cudaError_t  cudaMallocManaged(void **devPtr, size_t size, unsigned int flags) {
//     	cudaError_t ret;
// 	// Write your own custom c code in the cudaMallocManaged.c file
// 	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
// 	// fprintf(stderr, ">>>>>>>> cudaMallocManaged called with \n");
// 	fprintf(fp, ">>>>>>>> cudaMallocManaged called with devPtr, size, flags\n");
// 	ret = orig_cudaMallocManaged(devPtr, size, flags);
// 	// fprintf(stderr, ">>>>>>>> cudaMallocManaged returned\n");
// 	fprintf(fp, ">>>>>>>> cudaMallocManaged returned with devPtr, size, flags\n");
// 	return ret;

// }

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMalloc)(void **devPtr, size_t size) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaMalloc(void **devPtr, size_t size) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMalloc.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMalloc called with \n");
	fprintf(fp, ">>>>>>>> cudaMalloc called with devPtr, size\n");
	ret = orig_cudaMalloc(devPtr, size);
	// fprintf(stderr, ">>>>>>>> cudaMalloc returned\n");
	fprintf(fp, ">>>>>>>> cudaMalloc returned with devPtr, size\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMallocHost)(void **ptr, size_t size) = NULL;

__host__ cudaError_t  cudaMallocHost(void **ptr, size_t size) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMallocHost.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMallocHost called with \n");
	fprintf(fp, ">>>>>>>> cudaMallocHost called with ptr, size\n");
	ret = orig_cudaMallocHost(ptr, size);
	// fprintf(stderr, ">>>>>>>> cudaMallocHost returned\n");
	fprintf(fp, ">>>>>>>> cudaMallocHost returned with ptr, size\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMallocPitch)(void **devPtr, size_t *pitch, size_t width, size_t height) = NULL;

__host__ cudaError_t  cudaMallocPitch(void **devPtr, size_t *pitch, size_t width, size_t height) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMallocPitch.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMallocPitch called with \n");
	fprintf(fp, ">>>>>>>> cudaMallocPitch called with devPtr, pitch, width, height\n");
	ret = orig_cudaMallocPitch(devPtr, pitch, width, height);
	// fprintf(stderr, ">>>>>>>> cudaMallocPitch returned\n");
	fprintf(fp, ">>>>>>>> cudaMallocPitch returned with devPtr, pitch, width, height\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMallocArray)(cudaArray_t *array, const struct cudaChannelFormatDesc *desc, size_t width, size_t height , unsigned int flags ) = NULL;

__host__ cudaError_t  cudaMallocArray(cudaArray_t *array, const struct cudaChannelFormatDesc *desc, size_t width, size_t height , unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMallocArray.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMallocArray called with \n");
	fprintf(fp, ">>>>>>>> cudaMallocArray called with array, desc, width, height, flags\n");
	ret = orig_cudaMallocArray(array, desc, width, height, flags);
	// fprintf(stderr, ">>>>>>>> cudaMallocArray returned\n");
	fprintf(fp, ">>>>>>>> cudaMallocArray returned with array, desc, width, height, flags\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaFree)(void *devPtr) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaFree(void *devPtr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFree.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaFree called with \n");
	fprintf(fp, ">>>>>>>> cudaFree called with devPtr\n");
	ret = orig_cudaFree(devPtr);
	// fprintf(stderr, ">>>>>>>> cudaFree returned\n");
	fprintf(fp, ">>>>>>>> cudaFree returned with devPtr\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaFreeHost)(void *ptr) = NULL;

__host__ cudaError_t  cudaFreeHost(void *ptr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFreeHost.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaFreeHost called with \n");
	fprintf(fp, ">>>>>>>> cudaFreeHost called with ptr\n");
	ret = orig_cudaFreeHost(ptr);
	// fprintf(stderr, ">>>>>>>> cudaFreeHost returned\n");
	fprintf(fp, ">>>>>>>> cudaFreeHost returned with ptr\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaFreeArray)(cudaArray_t array) = NULL;

__host__ cudaError_t  cudaFreeArray(cudaArray_t array) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFreeArray.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaFreeArray called with \n");
	fprintf(fp, ">>>>>>>> cudaFreeArray called with array\n");
	ret = orig_cudaFreeArray(array);
	// fprintf(stderr, ">>>>>>>> cudaFreeArray returned\n");
	fprintf(fp, ">>>>>>>> cudaFreeArray returned with array\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaFreeMipmappedArray)(cudaMipmappedArray_t mipmappedArray) = NULL;

__host__ cudaError_t  cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFreeMipmappedArray.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaFreeMipmappedArray called with \n");
	fprintf(fp, ">>>>>>>> cudaFreeMipmappedArray called with mipmappedArray\n");
	ret = orig_cudaFreeMipmappedArray(mipmappedArray);
	// fprintf(stderr, ">>>>>>>> cudaFreeMipmappedArray returned\n");
	fprintf(fp, ">>>>>>>> cudaFreeMipmappedArray returned with mipmappedArray\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaHostAlloc)(void **pHost, size_t size, unsigned int flags) = NULL;

__host__ cudaError_t  cudaHostAlloc(void **pHost, size_t size, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaHostAlloc.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaHostAlloc called with \n");
	fprintf(fp, ">>>>>>>> cudaHostAlloc called with pHost, size, flags\n");
	ret = orig_cudaHostAlloc(pHost, size, flags);
	// fprintf(stderr, ">>>>>>>> cudaHostAlloc returned\n");
	fprintf(fp, ">>>>>>>> cudaHostAlloc returned with pHost, size, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaHostRegister)(void *ptr, size_t size, unsigned int flags) = NULL;

__host__ cudaError_t  cudaHostRegister(void *ptr, size_t size, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaHostRegister.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaHostRegister called with \n");
	fprintf(fp, ">>>>>>>> cudaHostRegister called with ptr, size, flags\n");
	ret = orig_cudaHostRegister(ptr, size, flags);
	// fprintf(stderr, ">>>>>>>> cudaHostRegister returned\n");
	fprintf(fp, ">>>>>>>> cudaHostRegister returned with ptr, size, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaHostUnregister)(void *ptr) = NULL;

__host__ cudaError_t  cudaHostUnregister(void *ptr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaHostUnregister.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaHostUnregister called with \n");
	fprintf(fp, ">>>>>>>> cudaHostUnregister called with ptr\n");
	ret = orig_cudaHostUnregister(ptr);
	// fprintf(stderr, ">>>>>>>> cudaHostUnregister returned\n");
	fprintf(fp, ">>>>>>>> cudaHostUnregister returned with ptr\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaHostGetDevicePointer)(void **pDevice, void *pHost, unsigned int flags) = NULL;

__host__ cudaError_t  cudaHostGetDevicePointer(void **pDevice, void *pHost, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaHostGetDevicePointer.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaHostGetDevicePointer called with \n");
	fprintf(fp, ">>>>>>>> cudaHostGetDevicePointer called with pDevice, pHost, flags\n");
	ret = orig_cudaHostGetDevicePointer(pDevice, pHost, flags);
	// fprintf(stderr, ">>>>>>>> cudaHostGetDevicePointer returned\n");
	fprintf(fp, ">>>>>>>> cudaHostGetDevicePointer returned with pDevice, pHost, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaHostGetFlags)(unsigned int *pFlags, void *pHost) = NULL;

__host__ cudaError_t  cudaHostGetFlags(unsigned int *pFlags, void *pHost) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaHostGetFlags.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaHostGetFlags called with \n");
	fprintf(fp, ">>>>>>>> cudaHostGetFlags called with pFlags, pHost\n");
	ret = orig_cudaHostGetFlags(pFlags, pHost);
	// fprintf(stderr, ">>>>>>>> cudaHostGetFlags returned\n");
	fprintf(fp, ">>>>>>>> cudaHostGetFlags returned with pFlags, pHost\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMalloc3D)(struct cudaPitchedPtr* pitchedDevPtr, struct cudaExtent extent) = NULL;

__host__ cudaError_t  cudaMalloc3D(struct cudaPitchedPtr* pitchedDevPtr, struct cudaExtent extent) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMalloc3D.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMalloc3D called with \n");
	fprintf(fp, ">>>>>>>> cudaMalloc3D called with pitchedDevPtr, extent\n");
	ret = orig_cudaMalloc3D(pitchedDevPtr, extent);
	// fprintf(stderr, ">>>>>>>> cudaMalloc3D returned\n");
	fprintf(fp, ">>>>>>>> cudaMalloc3D returned with pitchedDevPtr, extent\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMalloc3DArray)(cudaArray_t *array, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent, unsigned int flags ) = NULL;

__host__ cudaError_t  cudaMalloc3DArray(cudaArray_t *array, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent, unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMalloc3DArray.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMalloc3DArray called with \n");
	fprintf(fp, ">>>>>>>> cudaMalloc3DArray called with array, desc, extent, flags\n");
	ret = orig_cudaMalloc3DArray(array, desc, extent, flags);
	// fprintf(stderr, ">>>>>>>> cudaMalloc3DArray returned\n");
	fprintf(fp, ">>>>>>>> cudaMalloc3DArray returned with array, desc, extent, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMallocMipmappedArray)(cudaMipmappedArray_t *mipmappedArray, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent, unsigned int numLevels, unsigned int flags ) = NULL;

__host__ cudaError_t  cudaMallocMipmappedArray(cudaMipmappedArray_t *mipmappedArray, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent, unsigned int numLevels, unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMallocMipmappedArray.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMallocMipmappedArray called with \n");
	fprintf(fp, ">>>>>>>> cudaMallocMipmappedArray called with mipmappedArray, desc, extent, numLevels, flags\n");
	ret = orig_cudaMallocMipmappedArray(mipmappedArray, desc, extent, numLevels, flags);
	// fprintf(stderr, ">>>>>>>> cudaMallocMipmappedArray returned\n");
	fprintf(fp, ">>>>>>>> cudaMallocMipmappedArray returned with mipmappedArray, desc, extent, numLevels, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetMipmappedArrayLevel)(cudaArray_t *levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned int level) = NULL;

__host__ cudaError_t  cudaGetMipmappedArrayLevel(cudaArray_t *levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned int level) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetMipmappedArrayLevel.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetMipmappedArrayLevel called with \n");
	fprintf(fp, ">>>>>>>> cudaGetMipmappedArrayLevel called with levelArray, mipmappedArray, level\n");
	ret = orig_cudaGetMipmappedArrayLevel(levelArray, mipmappedArray, level);
	// fprintf(stderr, ">>>>>>>> cudaGetMipmappedArrayLevel returned\n");
	fprintf(fp, ">>>>>>>> cudaGetMipmappedArrayLevel returned with levelArray, mipmappedArray, level\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy3D)(const struct cudaMemcpy3DParms *p) = NULL;

__host__ cudaError_t  cudaMemcpy3D(const struct cudaMemcpy3DParms *p) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy3D.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpy3D called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpy3D called with p\n");
	ret = orig_cudaMemcpy3D(p);
	// fprintf(stderr, ">>>>>>>> cudaMemcpy3D returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpy3D returned with p\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy3DPeer)(const struct cudaMemcpy3DPeerParms *p) = NULL;

__host__ cudaError_t  cudaMemcpy3DPeer(const struct cudaMemcpy3DPeerParms *p) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy3DPeer.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpy3DPeer called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpy3DPeer called with p\n");
	ret = orig_cudaMemcpy3DPeer(p);
	// fprintf(stderr, ">>>>>>>> cudaMemcpy3DPeer returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpy3DPeer returned with p\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMemcpy3DAsync)(const struct cudaMemcpy3DParms *p, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaMemcpy3DAsync(const struct cudaMemcpy3DParms *p, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy3DAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpy3DAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpy3DAsync called with p, stream\n");
	ret = orig_cudaMemcpy3DAsync(p, stream);
	// fprintf(stderr, ">>>>>>>> cudaMemcpy3DAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpy3DAsync returned with p, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy3DPeerAsync)(const struct cudaMemcpy3DPeerParms *p, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemcpy3DPeerAsync(const struct cudaMemcpy3DPeerParms *p, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy3DPeerAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpy3DPeerAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpy3DPeerAsync called with p, stream\n");
	ret = orig_cudaMemcpy3DPeerAsync(p, stream);
	// fprintf(stderr, ">>>>>>>> cudaMemcpy3DPeerAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpy3DPeerAsync returned with p, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemGetInfo)(size_t *free, size_t *total) = NULL;

__host__ cudaError_t  cudaMemGetInfo(size_t *free, size_t *total) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemGetInfo.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemGetInfo called with \n");
	fprintf(fp, ">>>>>>>> cudaMemGetInfo called with free, total\n");
	ret = orig_cudaMemGetInfo(free, total);
	// fprintf(stderr, ">>>>>>>> cudaMemGetInfo returned\n");
	fprintf(fp, ">>>>>>>> cudaMemGetInfo returned with free, total\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaArrayGetInfo)(struct cudaChannelFormatDesc *desc, struct cudaExtent *extent, unsigned int *flags, cudaArray_t array) = NULL;

__host__ cudaError_t  cudaArrayGetInfo(struct cudaChannelFormatDesc *desc, struct cudaExtent *extent, unsigned int *flags, cudaArray_t array) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaArrayGetInfo.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaArrayGetInfo called with \n");
	fprintf(fp, ">>>>>>>> cudaArrayGetInfo called with desc, extent, flags, array\n");
	ret = orig_cudaArrayGetInfo(desc, extent, flags, array);
	// fprintf(stderr, ">>>>>>>> cudaArrayGetInfo returned\n");
	fprintf(fp, ">>>>>>>> cudaArrayGetInfo returned with desc, extent, flags, array\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaArrayGetPlane)(cudaArray_t *pPlaneArray, cudaArray_t hArray, unsigned int planeIdx) = NULL;

__host__ cudaError_t  cudaArrayGetPlane(cudaArray_t *pPlaneArray, cudaArray_t hArray, unsigned int planeIdx) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaArrayGetPlane.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaArrayGetPlane called with \n");
	fprintf(fp, ">>>>>>>> cudaArrayGetPlane called with pPlaneArray, hArray, planeIdx\n");
	ret = orig_cudaArrayGetPlane(pPlaneArray, hArray, planeIdx);
	// fprintf(stderr, ">>>>>>>> cudaArrayGetPlane returned\n");
	fprintf(fp, ">>>>>>>> cudaArrayGetPlane returned with pPlaneArray, hArray, planeIdx\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaArrayGetMemoryRequirements)(struct cudaArrayMemoryRequirements  *memoryRequirements, cudaArray_t array, int device) = NULL;

__host__ cudaError_t  cudaArrayGetMemoryRequirements(struct cudaArrayMemoryRequirements  *memoryRequirements, cudaArray_t array, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaArrayGetMemoryRequirements.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaArrayGetMemoryRequirements called with \n");
	fprintf(fp, ">>>>>>>> cudaArrayGetMemoryRequirements called with memoryRequirements, array, device\n");
	ret = orig_cudaArrayGetMemoryRequirements(memoryRequirements, array, device);
	// fprintf(stderr, ">>>>>>>> cudaArrayGetMemoryRequirements returned\n");
	fprintf(fp, ">>>>>>>> cudaArrayGetMemoryRequirements returned with memoryRequirements, array, device\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMipmappedArrayGetMemoryRequirements)(struct cudaArrayMemoryRequirements *memoryRequirements, cudaMipmappedArray_t mipmap, int device) = NULL;

__host__ cudaError_t  cudaMipmappedArrayGetMemoryRequirements(struct cudaArrayMemoryRequirements *memoryRequirements, cudaMipmappedArray_t mipmap, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMipmappedArrayGetMemoryRequirements.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMipmappedArrayGetMemoryRequirements called with \n");
	fprintf(fp, ">>>>>>>> cudaMipmappedArrayGetMemoryRequirements called with memoryRequirements, mipmap, device\n");
	ret = orig_cudaMipmappedArrayGetMemoryRequirements(memoryRequirements, mipmap, device);
	// fprintf(stderr, ">>>>>>>> cudaMipmappedArrayGetMemoryRequirements returned\n");
	fprintf(fp, ">>>>>>>> cudaMipmappedArrayGetMemoryRequirements returned with memoryRequirements, mipmap, device\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy)(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind) = NULL;

__host__ cudaError_t  cudaMemcpy(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpy called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpy called with dst, src, count, kind\n");
	ret = orig_cudaMemcpy(dst, src, count, kind);
	// fprintf(stderr, ">>>>>>>> cudaMemcpy returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpy returned with dst, src, count, kind\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpyPeer)(void *dst, int dstDevice, const void *src, int srcDevice, size_t count) = NULL;

__host__ cudaError_t  cudaMemcpyPeer(void *dst, int dstDevice, const void *src, int srcDevice, size_t count) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpyPeer.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpyPeer called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpyPeer called with dst, dstDevice, src, srcDevice, count\n");
	ret = orig_cudaMemcpyPeer(dst, dstDevice, src, srcDevice, count);
	// fprintf(stderr, ">>>>>>>> cudaMemcpyPeer returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpyPeer returned with dst, dstDevice, src, srcDevice, count\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy2D)(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind) = NULL;

__host__ cudaError_t  cudaMemcpy2D(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy2D.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpy2D called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpy2D called with dst, dpitch, src, spitch, width, height, kind\n");
	ret = orig_cudaMemcpy2D(dst, dpitch, src, spitch, width, height, kind);
	// fprintf(stderr, ">>>>>>>> cudaMemcpy2D returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpy2D returned with dst, dpitch, src, spitch, width, height, kind\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy2DToArray)(cudaArray_t dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind) = NULL;

__host__ cudaError_t  cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy2DToArray.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpy2DToArray called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpy2DToArray called with dst, wOffset, hOffset, src, spitch, width, height, kind\n");
	ret = orig_cudaMemcpy2DToArray(dst, wOffset, hOffset, src, spitch, width, height, kind);
	// fprintf(stderr, ">>>>>>>> cudaMemcpy2DToArray returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpy2DToArray returned with dst, wOffset, hOffset, src, spitch, width, height, kind\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy2DFromArray)(void *dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind) = NULL;

__host__ cudaError_t  cudaMemcpy2DFromArray(void *dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy2DFromArray.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpy2DFromArray called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpy2DFromArray called with dst, dpitch, src, wOffset, hOffset, width, height, kind\n");
	ret = orig_cudaMemcpy2DFromArray(dst, dpitch, src, wOffset, hOffset, width, height, kind);
	// fprintf(stderr, ">>>>>>>> cudaMemcpy2DFromArray returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpy2DFromArray returned with dst, dpitch, src, wOffset, hOffset, width, height, kind\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy2DArrayToArray)(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, enum cudaMemcpyKind kind ) = NULL;

__host__ cudaError_t  cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, enum cudaMemcpyKind kind ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy2DArrayToArray.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpy2DArrayToArray called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpy2DArrayToArray called with dst, wOffsetDst, hOffsetDst, src, wOffsetSrc, hOffsetSrc, width, height, kind\n");
	ret = orig_cudaMemcpy2DArrayToArray(dst, wOffsetDst, hOffsetDst, src, wOffsetSrc, hOffsetSrc, width, height, kind);
	// fprintf(stderr, ">>>>>>>> cudaMemcpy2DArrayToArray returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpy2DArrayToArray returned with dst, wOffsetDst, hOffsetDst, src, wOffsetSrc, hOffsetSrc, width, height, kind\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpyToSymbol)(const void *symbol, const void *src, size_t count, size_t offset , enum cudaMemcpyKind kind ) = NULL;

__host__ cudaError_t  cudaMemcpyToSymbol(const void *symbol, const void *src, size_t count, size_t offset , enum cudaMemcpyKind kind ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpyToSymbol.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpyToSymbol called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpyToSymbol called with symbol, src, count, offset, kind\n");
	ret = orig_cudaMemcpyToSymbol(symbol, src, count, offset, kind);
	// fprintf(stderr, ">>>>>>>> cudaMemcpyToSymbol returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpyToSymbol returned with symbol, src, count, offset, kind\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpyFromSymbol)(void *dst, const void *symbol, size_t count, size_t offset , enum cudaMemcpyKind kind ) = NULL;

__host__ cudaError_t  cudaMemcpyFromSymbol(void *dst, const void *symbol, size_t count, size_t offset , enum cudaMemcpyKind kind ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpyFromSymbol.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpyFromSymbol called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpyFromSymbol called with dst, symbol, count, offset, kind\n");
	ret = orig_cudaMemcpyFromSymbol(dst, symbol, count, offset, kind);
	// fprintf(stderr, ">>>>>>>> cudaMemcpyFromSymbol returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpyFromSymbol returned with dst, symbol, count, offset, kind\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMemcpyAsync)(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaMemcpyAsync(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpyAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpyAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpyAsync called with dst, src, count, kind, stream\n");
	ret = orig_cudaMemcpyAsync(dst, src, count, kind, stream);
	// fprintf(stderr, ">>>>>>>> cudaMemcpyAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpyAsync returned with dst, src, count, kind, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpyPeerAsync)(void *dst, int dstDevice, const void *src, int srcDevice, size_t count, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemcpyPeerAsync(void *dst, int dstDevice, const void *src, int srcDevice, size_t count, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpyPeerAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpyPeerAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpyPeerAsync called with dst, dstDevice, src, srcDevice, count, stream\n");
	ret = orig_cudaMemcpyPeerAsync(dst, dstDevice, src, srcDevice, count, stream);
	// fprintf(stderr, ">>>>>>>> cudaMemcpyPeerAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpyPeerAsync returned with dst, dstDevice, src, srcDevice, count, stream\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMemcpy2DAsync)(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaMemcpy2DAsync(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy2DAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpy2DAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpy2DAsync called with dst, dpitch, src, spitch, width, height, kind, stream\n");
	ret = orig_cudaMemcpy2DAsync(dst, dpitch, src, spitch, width, height, kind, stream);
	// fprintf(stderr, ">>>>>>>> cudaMemcpy2DAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpy2DAsync returned with dst, dpitch, src, spitch, width, height, kind, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy2DToArrayAsync)(cudaArray_t dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy2DToArrayAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpy2DToArrayAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpy2DToArrayAsync called with dst, wOffset, hOffset, src, spitch, width, height, kind, stream\n");
	ret = orig_cudaMemcpy2DToArrayAsync(dst, wOffset, hOffset, src, spitch, width, height, kind, stream);
	// fprintf(stderr, ">>>>>>>> cudaMemcpy2DToArrayAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpy2DToArrayAsync returned with dst, wOffset, hOffset, src, spitch, width, height, kind, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy2DFromArrayAsync)(void *dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemcpy2DFromArrayAsync(void *dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy2DFromArrayAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpy2DFromArrayAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpy2DFromArrayAsync called with dst, dpitch, src, wOffset, hOffset, width, height, kind, stream\n");
	ret = orig_cudaMemcpy2DFromArrayAsync(dst, dpitch, src, wOffset, hOffset, width, height, kind, stream);
	// fprintf(stderr, ">>>>>>>> cudaMemcpy2DFromArrayAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpy2DFromArrayAsync returned with dst, dpitch, src, wOffset, hOffset, width, height, kind, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpyToSymbolAsync)(const void *symbol, const void *src, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemcpyToSymbolAsync(const void *symbol, const void *src, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpyToSymbolAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpyToSymbolAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpyToSymbolAsync called with symbol, src, count, offset, kind, stream\n");
	ret = orig_cudaMemcpyToSymbolAsync(symbol, src, count, offset, kind, stream);
	// fprintf(stderr, ">>>>>>>> cudaMemcpyToSymbolAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpyToSymbolAsync returned with symbol, src, count, offset, kind, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpyFromSymbolAsync)(void *dst, const void *symbol, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemcpyFromSymbolAsync(void *dst, const void *symbol, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpyFromSymbolAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemcpyFromSymbolAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMemcpyFromSymbolAsync called with dst, symbol, count, offset, kind, stream\n");
	ret = orig_cudaMemcpyFromSymbolAsync(dst, symbol, count, offset, kind, stream);
	// fprintf(stderr, ">>>>>>>> cudaMemcpyFromSymbolAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMemcpyFromSymbolAsync returned with dst, symbol, count, offset, kind, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemset)(void *devPtr, int value, size_t count) = NULL;

__host__ cudaError_t  cudaMemset(void *devPtr, int value, size_t count) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemset.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemset called with \n");
	fprintf(fp, ">>>>>>>> cudaMemset called with devPtr, value, count\n");
	ret = orig_cudaMemset(devPtr, value, count);
	// fprintf(stderr, ">>>>>>>> cudaMemset returned\n");
	fprintf(fp, ">>>>>>>> cudaMemset returned with devPtr, value, count\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemset2D)(void *devPtr, size_t pitch, int value, size_t width, size_t height) = NULL;

__host__ cudaError_t  cudaMemset2D(void *devPtr, size_t pitch, int value, size_t width, size_t height) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemset2D.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemset2D called with \n");
	fprintf(fp, ">>>>>>>> cudaMemset2D called with devPtr, pitch, value, width, height\n");
	ret = orig_cudaMemset2D(devPtr, pitch, value, width, height);
	// fprintf(stderr, ">>>>>>>> cudaMemset2D returned\n");
	fprintf(fp, ">>>>>>>> cudaMemset2D returned with devPtr, pitch, value, width, height\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemset3D)(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent) = NULL;

__host__ cudaError_t  cudaMemset3D(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemset3D.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemset3D called with \n");
	fprintf(fp, ">>>>>>>> cudaMemset3D called with pitchedDevPtr, value, extent\n");
	ret = orig_cudaMemset3D(pitchedDevPtr, value, extent);
	// fprintf(stderr, ">>>>>>>> cudaMemset3D returned\n");
	fprintf(fp, ">>>>>>>> cudaMemset3D returned with pitchedDevPtr, value, extent\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMemsetAsync)(void *devPtr, int value, size_t count, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaMemsetAsync(void *devPtr, int value, size_t count, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemsetAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemsetAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMemsetAsync called with devPtr, value, count, stream\n");
	ret = orig_cudaMemsetAsync(devPtr, value, count, stream);
	// fprintf(stderr, ">>>>>>>> cudaMemsetAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMemsetAsync returned with devPtr, value, count, stream\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMemset2DAsync)(void *devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaMemset2DAsync(void *devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemset2DAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemset2DAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMemset2DAsync called with devPtr, pitch, value, width, height, stream\n");
	ret = orig_cudaMemset2DAsync(devPtr, pitch, value, width, height, stream);
	// fprintf(stderr, ">>>>>>>> cudaMemset2DAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMemset2DAsync returned with devPtr, pitch, value, width, height, stream\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMemset3DAsync)(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaMemset3DAsync(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemset3DAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemset3DAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMemset3DAsync called with pitchedDevPtr, value, extent, stream\n");
	ret = orig_cudaMemset3DAsync(pitchedDevPtr, value, extent, stream);
	// fprintf(stderr, ">>>>>>>> cudaMemset3DAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMemset3DAsync returned with pitchedDevPtr, value, extent, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetSymbolAddress)(void **devPtr, const void *symbol) = NULL;

__host__ cudaError_t  cudaGetSymbolAddress(void **devPtr, const void *symbol) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetSymbolAddress.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetSymbolAddress called with \n");
	fprintf(fp, ">>>>>>>> cudaGetSymbolAddress called with devPtr, symbol\n");
	ret = orig_cudaGetSymbolAddress(devPtr, symbol);
	// fprintf(stderr, ">>>>>>>> cudaGetSymbolAddress returned\n");
	fprintf(fp, ">>>>>>>> cudaGetSymbolAddress returned with devPtr, symbol\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetSymbolSize)(size_t *size, const void *symbol) = NULL;

__host__ cudaError_t  cudaGetSymbolSize(size_t *size, const void *symbol) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetSymbolSize.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetSymbolSize called with \n");
	fprintf(fp, ">>>>>>>> cudaGetSymbolSize called with size, symbol\n");
	ret = orig_cudaGetSymbolSize(size, symbol);
	// fprintf(stderr, ">>>>>>>> cudaGetSymbolSize returned\n");
	fprintf(fp, ">>>>>>>> cudaGetSymbolSize returned with size, symbol\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPrefetchAsync)(const void *devPtr, size_t count, int dstDevice, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemPrefetchAsync(const void *devPtr, size_t count, int dstDevice, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPrefetchAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemPrefetchAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMemPrefetchAsync called with devPtr, count, dstDevice, stream\n");
	ret = orig_cudaMemPrefetchAsync(devPtr, count, dstDevice, stream);
	// fprintf(stderr, ">>>>>>>> cudaMemPrefetchAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMemPrefetchAsync returned with devPtr, count, dstDevice, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPrefetchAsync_v2)(const void *devPtr, size_t count, struct cudaMemLocation location, unsigned int flags, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemPrefetchAsync_v2(const void *devPtr, size_t count, struct cudaMemLocation location, unsigned int flags, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPrefetchAsync_v2.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemPrefetchAsync_v2 called with \n");
	fprintf(fp, ">>>>>>>> cudaMemPrefetchAsync_v2 called with devPtr, count, location, flags, stream\n");
	ret = orig_cudaMemPrefetchAsync_v2(devPtr, count, location, flags, stream);
	// fprintf(stderr, ">>>>>>>> cudaMemPrefetchAsync_v2 returned\n");
	fprintf(fp, ">>>>>>>> cudaMemPrefetchAsync_v2 returned with devPtr, count, location, flags, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemAdvise)(const void *devPtr, size_t count, enum cudaMemoryAdvise advice, int device) = NULL;

__host__ cudaError_t  cudaMemAdvise(const void *devPtr, size_t count, enum cudaMemoryAdvise advice, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemAdvise.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemAdvise called with \n");
	fprintf(fp, ">>>>>>>> cudaMemAdvise called with devPtr, count, advice, device\n");
	ret = orig_cudaMemAdvise(devPtr, count, advice, device);
	// fprintf(stderr, ">>>>>>>> cudaMemAdvise returned\n");
	fprintf(fp, ">>>>>>>> cudaMemAdvise returned with devPtr, count, advice, device\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemAdvise_v2)(const void *devPtr, size_t count, enum cudaMemoryAdvise advice, struct cudaMemLocation location) = NULL;

__host__ cudaError_t  cudaMemAdvise_v2(const void *devPtr, size_t count, enum cudaMemoryAdvise advice, struct cudaMemLocation location) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemAdvise_v2.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemAdvise_v2 called with \n");
	fprintf(fp, ">>>>>>>> cudaMemAdvise_v2 called with devPtr, count, advice, location\n");
	ret = orig_cudaMemAdvise_v2(devPtr, count, advice, location);
	// fprintf(stderr, ">>>>>>>> cudaMemAdvise_v2 returned\n");
	fprintf(fp, ">>>>>>>> cudaMemAdvise_v2 returned with devPtr, count, advice, location\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemRangeGetAttribute)(void *data, size_t dataSize, enum cudaMemRangeAttribute attribute, const void *devPtr, size_t count) = NULL;

__host__ cudaError_t  cudaMemRangeGetAttribute(void *data, size_t dataSize, enum cudaMemRangeAttribute attribute, const void *devPtr, size_t count) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemRangeGetAttribute.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemRangeGetAttribute called with \n");
	fprintf(fp, ">>>>>>>> cudaMemRangeGetAttribute called with data, dataSize, attribute, devPtr, count\n");
	ret = orig_cudaMemRangeGetAttribute(data, dataSize, attribute, devPtr, count);
	// fprintf(stderr, ">>>>>>>> cudaMemRangeGetAttribute returned\n");
	fprintf(fp, ">>>>>>>> cudaMemRangeGetAttribute returned with data, dataSize, attribute, devPtr, count\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemRangeGetAttributes)(void **data, size_t *dataSizes, enum cudaMemRangeAttribute *attributes, size_t numAttributes, const void *devPtr, size_t count) = NULL;

__host__ cudaError_t  cudaMemRangeGetAttributes(void **data, size_t *dataSizes, enum cudaMemRangeAttribute *attributes, size_t numAttributes, const void *devPtr, size_t count) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemRangeGetAttributes.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemRangeGetAttributes called with \n");
	fprintf(fp, ">>>>>>>> cudaMemRangeGetAttributes called with data, dataSizes, attributes, numAttributes, devPtr, count\n");
	ret = orig_cudaMemRangeGetAttributes(data, dataSizes, attributes, numAttributes, devPtr, count);
	// fprintf(stderr, ">>>>>>>> cudaMemRangeGetAttributes returned\n");
	fprintf(fp, ">>>>>>>> cudaMemRangeGetAttributes returned with data, dataSizes, attributes, numAttributes, devPtr, count\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMallocAsync)(void **devPtr, size_t size, cudaStream_t hStream) = NULL;

__host__ cudaError_t  cudaMallocAsync(void **devPtr, size_t size, cudaStream_t hStream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMallocAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMallocAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMallocAsync called with devPtr, size, hStream\n");
	ret = orig_cudaMallocAsync(devPtr, size, hStream);
	// fprintf(stderr, ">>>>>>>> cudaMallocAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMallocAsync returned with devPtr, size, hStream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaFreeAsync)(void *devPtr, cudaStream_t hStream) = NULL;

__host__ cudaError_t  cudaFreeAsync(void *devPtr, cudaStream_t hStream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFreeAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaFreeAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaFreeAsync called with devPtr, hStream\n");
	ret = orig_cudaFreeAsync(devPtr, hStream);
	// fprintf(stderr, ">>>>>>>> cudaFreeAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaFreeAsync returned with devPtr, hStream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolTrimTo)(cudaMemPool_t memPool, size_t minBytesToKeep) = NULL;

__host__ cudaError_t  cudaMemPoolTrimTo(cudaMemPool_t memPool, size_t minBytesToKeep) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolTrimTo.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemPoolTrimTo called with \n");
	fprintf(fp, ">>>>>>>> cudaMemPoolTrimTo called with memPool, minBytesToKeep\n");
	ret = orig_cudaMemPoolTrimTo(memPool, minBytesToKeep);
	// fprintf(stderr, ">>>>>>>> cudaMemPoolTrimTo returned\n");
	fprintf(fp, ">>>>>>>> cudaMemPoolTrimTo returned with memPool, minBytesToKeep\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolSetAttribute)(cudaMemPool_t memPool, enum cudaMemPoolAttr attr, void *value ) = NULL;

__host__ cudaError_t  cudaMemPoolSetAttribute(cudaMemPool_t memPool, enum cudaMemPoolAttr attr, void *value ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolSetAttribute.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemPoolSetAttribute called with \n");
	fprintf(fp, ">>>>>>>> cudaMemPoolSetAttribute called with memPool, attr, value\n");
	ret = orig_cudaMemPoolSetAttribute(memPool, attr, value);
	// fprintf(stderr, ">>>>>>>> cudaMemPoolSetAttribute returned\n");
	fprintf(fp, ">>>>>>>> cudaMemPoolSetAttribute returned with memPool, attr, value\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolGetAttribute)(cudaMemPool_t memPool, enum cudaMemPoolAttr attr, void *value ) = NULL;

__host__ cudaError_t  cudaMemPoolGetAttribute(cudaMemPool_t memPool, enum cudaMemPoolAttr attr, void *value ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolGetAttribute.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemPoolGetAttribute called with \n");
	fprintf(fp, ">>>>>>>> cudaMemPoolGetAttribute called with memPool, attr, value\n");
	ret = orig_cudaMemPoolGetAttribute(memPool, attr, value);
	// fprintf(stderr, ">>>>>>>> cudaMemPoolGetAttribute returned\n");
	fprintf(fp, ">>>>>>>> cudaMemPoolGetAttribute returned with memPool, attr, value\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolSetAccess)(cudaMemPool_t memPool, const struct cudaMemAccessDesc *descList, size_t count) = NULL;

__host__ cudaError_t  cudaMemPoolSetAccess(cudaMemPool_t memPool, const struct cudaMemAccessDesc *descList, size_t count) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolSetAccess.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemPoolSetAccess called with \n");
	fprintf(fp, ">>>>>>>> cudaMemPoolSetAccess called with memPool, descList, count\n");
	ret = orig_cudaMemPoolSetAccess(memPool, descList, count);
	// fprintf(stderr, ">>>>>>>> cudaMemPoolSetAccess returned\n");
	fprintf(fp, ">>>>>>>> cudaMemPoolSetAccess returned with memPool, descList, count\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolGetAccess)(enum cudaMemAccessFlags *flags, cudaMemPool_t memPool, struct cudaMemLocation *location) = NULL;

__host__ cudaError_t  cudaMemPoolGetAccess(enum cudaMemAccessFlags *flags, cudaMemPool_t memPool, struct cudaMemLocation *location) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolGetAccess.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemPoolGetAccess called with \n");
	fprintf(fp, ">>>>>>>> cudaMemPoolGetAccess called with flags, memPool, location\n");
	ret = orig_cudaMemPoolGetAccess(flags, memPool, location);
	// fprintf(stderr, ">>>>>>>> cudaMemPoolGetAccess returned\n");
	fprintf(fp, ">>>>>>>> cudaMemPoolGetAccess returned with flags, memPool, location\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolCreate)(cudaMemPool_t *memPool, const struct cudaMemPoolProps *poolProps) = NULL;

__host__ cudaError_t  cudaMemPoolCreate(cudaMemPool_t *memPool, const struct cudaMemPoolProps *poolProps) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolCreate.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemPoolCreate called with \n");
	fprintf(fp, ">>>>>>>> cudaMemPoolCreate called with memPool, poolProps\n");
	ret = orig_cudaMemPoolCreate(memPool, poolProps);
	// fprintf(stderr, ">>>>>>>> cudaMemPoolCreate returned\n");
	fprintf(fp, ">>>>>>>> cudaMemPoolCreate returned with memPool, poolProps\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolDestroy)(cudaMemPool_t memPool) = NULL;

__host__ cudaError_t  cudaMemPoolDestroy(cudaMemPool_t memPool) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolDestroy.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemPoolDestroy called with \n");
	fprintf(fp, ">>>>>>>> cudaMemPoolDestroy called with memPool\n");
	ret = orig_cudaMemPoolDestroy(memPool);
	// fprintf(stderr, ">>>>>>>> cudaMemPoolDestroy returned\n");
	fprintf(fp, ">>>>>>>> cudaMemPoolDestroy returned with memPool\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMallocFromPoolAsync)(void **ptr, size_t size, cudaMemPool_t memPool, cudaStream_t stream) = NULL;

__host__ cudaError_t  cudaMallocFromPoolAsync(void **ptr, size_t size, cudaMemPool_t memPool, cudaStream_t stream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMallocFromPoolAsync.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMallocFromPoolAsync called with \n");
	fprintf(fp, ">>>>>>>> cudaMallocFromPoolAsync called with ptr, size, memPool, stream\n");
	ret = orig_cudaMallocFromPoolAsync(ptr, size, memPool, stream);
	// fprintf(stderr, ">>>>>>>> cudaMallocFromPoolAsync returned\n");
	fprintf(fp, ">>>>>>>> cudaMallocFromPoolAsync returned with ptr, size, memPool, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolExportToShareableHandle)(    void                            *shareableHandle,    cudaMemPool_t                    memPool,    enum cudaMemAllocationHandleType handleType,    unsigned int                     flags) = NULL;

__host__ cudaError_t  cudaMemPoolExportToShareableHandle(    void                            *shareableHandle,    cudaMemPool_t                    memPool,    enum cudaMemAllocationHandleType handleType,    unsigned int                     flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolExportToShareableHandle.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemPoolExportToShareableHandle called with \n");
	fprintf(fp, ">>>>>>>> cudaMemPoolExportToShareableHandle called with shareableHandle, memPool, handleType, flags\n");
	ret = orig_cudaMemPoolExportToShareableHandle(shareableHandle, memPool, handleType, flags);
	// fprintf(stderr, ">>>>>>>> cudaMemPoolExportToShareableHandle returned\n");
	fprintf(fp, ">>>>>>>> cudaMemPoolExportToShareableHandle returned with shareableHandle, memPool, handleType, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolImportFromShareableHandle)(    cudaMemPool_t                   *memPool,    void                            *shareableHandle,    enum cudaMemAllocationHandleType handleType,    unsigned int                     flags) = NULL;

__host__ cudaError_t  cudaMemPoolImportFromShareableHandle(    cudaMemPool_t                   *memPool,    void                            *shareableHandle,    enum cudaMemAllocationHandleType handleType,    unsigned int                     flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolImportFromShareableHandle.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemPoolImportFromShareableHandle called with \n");
	fprintf(fp, ">>>>>>>> cudaMemPoolImportFromShareableHandle called with memPool, shareableHandle, handleType, flags\n");
	ret = orig_cudaMemPoolImportFromShareableHandle(memPool, shareableHandle, handleType, flags);
	// fprintf(stderr, ">>>>>>>> cudaMemPoolImportFromShareableHandle returned\n");
	fprintf(fp, ">>>>>>>> cudaMemPoolImportFromShareableHandle returned with memPool, shareableHandle, handleType, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolExportPointer)(struct cudaMemPoolPtrExportData *exportData, void *ptr) = NULL;

__host__ cudaError_t  cudaMemPoolExportPointer(struct cudaMemPoolPtrExportData *exportData, void *ptr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolExportPointer.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemPoolExportPointer called with \n");
	fprintf(fp, ">>>>>>>> cudaMemPoolExportPointer called with exportData, ptr\n");
	ret = orig_cudaMemPoolExportPointer(exportData, ptr);
	// fprintf(stderr, ">>>>>>>> cudaMemPoolExportPointer returned\n");
	fprintf(fp, ">>>>>>>> cudaMemPoolExportPointer returned with exportData, ptr\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolImportPointer)(void **ptr, cudaMemPool_t memPool, struct cudaMemPoolPtrExportData *exportData) = NULL;

__host__ cudaError_t  cudaMemPoolImportPointer(void **ptr, cudaMemPool_t memPool, struct cudaMemPoolPtrExportData *exportData) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolImportPointer.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaMemPoolImportPointer called with \n");
	fprintf(fp, ">>>>>>>> cudaMemPoolImportPointer called with ptr, memPool, exportData\n");
	ret = orig_cudaMemPoolImportPointer(ptr, memPool, exportData);
	// fprintf(stderr, ">>>>>>>> cudaMemPoolImportPointer returned\n");
	fprintf(fp, ">>>>>>>> cudaMemPoolImportPointer returned with ptr, memPool, exportData\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaPointerGetAttributes)(struct cudaPointerAttributes *attributes, const void *ptr) = NULL;

__host__ cudaError_t  cudaPointerGetAttributes(struct cudaPointerAttributes *attributes, const void *ptr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaPointerGetAttributes.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaPointerGetAttributes called with \n");
	fprintf(fp, ">>>>>>>> cudaPointerGetAttributes called with attributes, ptr\n");
	ret = orig_cudaPointerGetAttributes(attributes, ptr);
	// fprintf(stderr, ">>>>>>>> cudaPointerGetAttributes returned\n");
	fprintf(fp, ">>>>>>>> cudaPointerGetAttributes returned with attributes, ptr\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceCanAccessPeer)(int *canAccessPeer, int device, int peerDevice) = NULL;

__host__ cudaError_t  cudaDeviceCanAccessPeer(int *canAccessPeer, int device, int peerDevice) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceCanAccessPeer.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceCanAccessPeer called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceCanAccessPeer called with canAccessPeer, device, peerDevice\n");
	ret = orig_cudaDeviceCanAccessPeer(canAccessPeer, device, peerDevice);
	// fprintf(stderr, ">>>>>>>> cudaDeviceCanAccessPeer returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceCanAccessPeer returned with canAccessPeer, device, peerDevice\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceEnablePeerAccess)(int peerDevice, unsigned int flags) = NULL;

__host__ cudaError_t  cudaDeviceEnablePeerAccess(int peerDevice, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceEnablePeerAccess.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceEnablePeerAccess called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceEnablePeerAccess called with peerDevice, flags\n");
	ret = orig_cudaDeviceEnablePeerAccess(peerDevice, flags);
	// fprintf(stderr, ">>>>>>>> cudaDeviceEnablePeerAccess returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceEnablePeerAccess returned with peerDevice, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceDisablePeerAccess)(int peerDevice) = NULL;

__host__ cudaError_t  cudaDeviceDisablePeerAccess(int peerDevice) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceDisablePeerAccess.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceDisablePeerAccess called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceDisablePeerAccess called with peerDevice\n");
	ret = orig_cudaDeviceDisablePeerAccess(peerDevice);
	// fprintf(stderr, ">>>>>>>> cudaDeviceDisablePeerAccess returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceDisablePeerAccess returned with peerDevice\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphicsUnregisterResource)(cudaGraphicsResource_t resource) = NULL;

__host__ cudaError_t  cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphicsUnregisterResource.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphicsUnregisterResource called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphicsUnregisterResource called with resource\n");
	ret = orig_cudaGraphicsUnregisterResource(resource);
	// fprintf(stderr, ">>>>>>>> cudaGraphicsUnregisterResource returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphicsUnregisterResource returned with resource\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphicsResourceSetMapFlags)(cudaGraphicsResource_t resource, unsigned int flags) = NULL;

__host__ cudaError_t  cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphicsResourceSetMapFlags.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphicsResourceSetMapFlags called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphicsResourceSetMapFlags called with resource, flags\n");
	ret = orig_cudaGraphicsResourceSetMapFlags(resource, flags);
	// fprintf(stderr, ">>>>>>>> cudaGraphicsResourceSetMapFlags returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphicsResourceSetMapFlags returned with resource, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphicsMapResources)(int count, cudaGraphicsResource_t *resources, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaGraphicsMapResources(int count, cudaGraphicsResource_t *resources, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphicsMapResources.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphicsMapResources called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphicsMapResources called with count, resources, stream\n");
	ret = orig_cudaGraphicsMapResources(count, resources, stream);
	// fprintf(stderr, ">>>>>>>> cudaGraphicsMapResources returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphicsMapResources returned with count, resources, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphicsUnmapResources)(int count, cudaGraphicsResource_t *resources, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t *resources, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphicsUnmapResources.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphicsUnmapResources called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphicsUnmapResources called with count, resources, stream\n");
	ret = orig_cudaGraphicsUnmapResources(count, resources, stream);
	// fprintf(stderr, ">>>>>>>> cudaGraphicsUnmapResources returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphicsUnmapResources returned with count, resources, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphicsResourceGetMappedPointer)(void **devPtr, size_t *size, cudaGraphicsResource_t resource) = NULL;

__host__ cudaError_t  cudaGraphicsResourceGetMappedPointer(void **devPtr, size_t *size, cudaGraphicsResource_t resource) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphicsResourceGetMappedPointer.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphicsResourceGetMappedPointer called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphicsResourceGetMappedPointer called with devPtr, size, resource\n");
	ret = orig_cudaGraphicsResourceGetMappedPointer(devPtr, size, resource);
	// fprintf(stderr, ">>>>>>>> cudaGraphicsResourceGetMappedPointer returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphicsResourceGetMappedPointer returned with devPtr, size, resource\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphicsSubResourceGetMappedArray)(cudaArray_t *array, cudaGraphicsResource_t resource, unsigned int arrayIndex, unsigned int mipLevel) = NULL;

__host__ cudaError_t  cudaGraphicsSubResourceGetMappedArray(cudaArray_t *array, cudaGraphicsResource_t resource, unsigned int arrayIndex, unsigned int mipLevel) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphicsSubResourceGetMappedArray.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphicsSubResourceGetMappedArray called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphicsSubResourceGetMappedArray called with array, resource, arrayIndex, mipLevel\n");
	ret = orig_cudaGraphicsSubResourceGetMappedArray(array, resource, arrayIndex, mipLevel);
	// fprintf(stderr, ">>>>>>>> cudaGraphicsSubResourceGetMappedArray returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphicsSubResourceGetMappedArray returned with array, resource, arrayIndex, mipLevel\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphicsResourceGetMappedMipmappedArray)(cudaMipmappedArray_t *mipmappedArray, cudaGraphicsResource_t resource) = NULL;

__host__ cudaError_t  cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t *mipmappedArray, cudaGraphicsResource_t resource) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphicsResourceGetMappedMipmappedArray.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphicsResourceGetMappedMipmappedArray called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphicsResourceGetMappedMipmappedArray called with mipmappedArray, resource\n");
	ret = orig_cudaGraphicsResourceGetMappedMipmappedArray(mipmappedArray, resource);
	// fprintf(stderr, ">>>>>>>> cudaGraphicsResourceGetMappedMipmappedArray returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphicsResourceGetMappedMipmappedArray returned with mipmappedArray, resource\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetChannelDesc)(struct cudaChannelFormatDesc *desc, cudaArray_const_t array) = NULL;

__host__ cudaError_t  cudaGetChannelDesc(struct cudaChannelFormatDesc *desc, cudaArray_const_t array) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetChannelDesc.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetChannelDesc called with \n");
	fprintf(fp, ">>>>>>>> cudaGetChannelDesc called with desc, array\n");
	ret = orig_cudaGetChannelDesc(desc, array);
	// fprintf(stderr, ">>>>>>>> cudaGetChannelDesc returned\n");
	fprintf(fp, ">>>>>>>> cudaGetChannelDesc returned with desc, array\n");
	return ret;

}

static __host__ struct cudaChannelFormatDesc  (*orig_cudaCreateChannelDesc)(int x, int y, int z, int w, enum cudaChannelFormatKind f) = NULL;

__host__ struct cudaChannelFormatDesc  cudaCreateChannelDesc(int x, int y, int z, int w, enum cudaChannelFormatKind f) {
    	struct cudaChannelFormatDesc ret;
	// Write your own custom c code in the cudaCreateChannelDesc.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaCreateChannelDesc called with \n");
	fprintf(fp, ">>>>>>>> cudaCreateChannelDesc called with x, y, z, w, f\n");
	ret = orig_cudaCreateChannelDesc(x, y, z, w, f);
	// fprintf(stderr, ">>>>>>>> cudaCreateChannelDesc returned\n");
	fprintf(fp, ">>>>>>>> cudaCreateChannelDesc returned with x, y, z, w, f\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaCreateTextureObject)(cudaTextureObject_t *pTexObject, const struct cudaResourceDesc *pResDesc, const struct cudaTextureDesc *pTexDesc, const struct cudaResourceViewDesc *pResViewDesc) = NULL;

__host__ cudaError_t  cudaCreateTextureObject(cudaTextureObject_t *pTexObject, const struct cudaResourceDesc *pResDesc, const struct cudaTextureDesc *pTexDesc, const struct cudaResourceViewDesc *pResViewDesc) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaCreateTextureObject.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaCreateTextureObject called with \n");
	fprintf(fp, ">>>>>>>> cudaCreateTextureObject called with pTexObject, pResDesc, pTexDesc, pResViewDesc\n");
	ret = orig_cudaCreateTextureObject(pTexObject, pResDesc, pTexDesc, pResViewDesc);
	// fprintf(stderr, ">>>>>>>> cudaCreateTextureObject returned\n");
	fprintf(fp, ">>>>>>>> cudaCreateTextureObject returned with pTexObject, pResDesc, pTexDesc, pResViewDesc\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDestroyTextureObject)(cudaTextureObject_t texObject) = NULL;

__host__ cudaError_t  cudaDestroyTextureObject(cudaTextureObject_t texObject) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDestroyTextureObject.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDestroyTextureObject called with \n");
	fprintf(fp, ">>>>>>>> cudaDestroyTextureObject called with texObject\n");
	ret = orig_cudaDestroyTextureObject(texObject);
	// fprintf(stderr, ">>>>>>>> cudaDestroyTextureObject returned\n");
	fprintf(fp, ">>>>>>>> cudaDestroyTextureObject returned with texObject\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetTextureObjectResourceDesc)(struct cudaResourceDesc *pResDesc, cudaTextureObject_t texObject) = NULL;

__host__ cudaError_t  cudaGetTextureObjectResourceDesc(struct cudaResourceDesc *pResDesc, cudaTextureObject_t texObject) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetTextureObjectResourceDesc.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetTextureObjectResourceDesc called with \n");
	fprintf(fp, ">>>>>>>> cudaGetTextureObjectResourceDesc called with pResDesc, texObject\n");
	ret = orig_cudaGetTextureObjectResourceDesc(pResDesc, texObject);
	// fprintf(stderr, ">>>>>>>> cudaGetTextureObjectResourceDesc returned\n");
	fprintf(fp, ">>>>>>>> cudaGetTextureObjectResourceDesc returned with pResDesc, texObject\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetTextureObjectTextureDesc)(struct cudaTextureDesc *pTexDesc, cudaTextureObject_t texObject) = NULL;

__host__ cudaError_t  cudaGetTextureObjectTextureDesc(struct cudaTextureDesc *pTexDesc, cudaTextureObject_t texObject) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetTextureObjectTextureDesc.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetTextureObjectTextureDesc called with \n");
	fprintf(fp, ">>>>>>>> cudaGetTextureObjectTextureDesc called with pTexDesc, texObject\n");
	ret = orig_cudaGetTextureObjectTextureDesc(pTexDesc, texObject);
	// fprintf(stderr, ">>>>>>>> cudaGetTextureObjectTextureDesc returned\n");
	fprintf(fp, ">>>>>>>> cudaGetTextureObjectTextureDesc returned with pTexDesc, texObject\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetTextureObjectResourceViewDesc)(struct cudaResourceViewDesc *pResViewDesc, cudaTextureObject_t texObject) = NULL;

__host__ cudaError_t  cudaGetTextureObjectResourceViewDesc(struct cudaResourceViewDesc *pResViewDesc, cudaTextureObject_t texObject) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetTextureObjectResourceViewDesc.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetTextureObjectResourceViewDesc called with \n");
	fprintf(fp, ">>>>>>>> cudaGetTextureObjectResourceViewDesc called with pResViewDesc, texObject\n");
	ret = orig_cudaGetTextureObjectResourceViewDesc(pResViewDesc, texObject);
	// fprintf(stderr, ">>>>>>>> cudaGetTextureObjectResourceViewDesc returned\n");
	fprintf(fp, ">>>>>>>> cudaGetTextureObjectResourceViewDesc returned with pResViewDesc, texObject\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaCreateSurfaceObject)(cudaSurfaceObject_t *pSurfObject, const struct cudaResourceDesc *pResDesc) = NULL;

__host__ cudaError_t  cudaCreateSurfaceObject(cudaSurfaceObject_t *pSurfObject, const struct cudaResourceDesc *pResDesc) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaCreateSurfaceObject.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaCreateSurfaceObject called with \n");
	fprintf(fp, ">>>>>>>> cudaCreateSurfaceObject called with pSurfObject, pResDesc\n");
	ret = orig_cudaCreateSurfaceObject(pSurfObject, pResDesc);
	// fprintf(stderr, ">>>>>>>> cudaCreateSurfaceObject returned\n");
	fprintf(fp, ">>>>>>>> cudaCreateSurfaceObject returned with pSurfObject, pResDesc\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDestroySurfaceObject)(cudaSurfaceObject_t surfObject) = NULL;

__host__ cudaError_t  cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDestroySurfaceObject.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDestroySurfaceObject called with \n");
	fprintf(fp, ">>>>>>>> cudaDestroySurfaceObject called with surfObject\n");
	ret = orig_cudaDestroySurfaceObject(surfObject);
	// fprintf(stderr, ">>>>>>>> cudaDestroySurfaceObject returned\n");
	fprintf(fp, ">>>>>>>> cudaDestroySurfaceObject returned with surfObject\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetSurfaceObjectResourceDesc)(struct cudaResourceDesc *pResDesc, cudaSurfaceObject_t surfObject) = NULL;

__host__ cudaError_t  cudaGetSurfaceObjectResourceDesc(struct cudaResourceDesc *pResDesc, cudaSurfaceObject_t surfObject) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetSurfaceObjectResourceDesc.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetSurfaceObjectResourceDesc called with \n");
	fprintf(fp, ">>>>>>>> cudaGetSurfaceObjectResourceDesc called with pResDesc, surfObject\n");
	ret = orig_cudaGetSurfaceObjectResourceDesc(pResDesc, surfObject);
	// fprintf(stderr, ">>>>>>>> cudaGetSurfaceObjectResourceDesc returned\n");
	fprintf(fp, ">>>>>>>> cudaGetSurfaceObjectResourceDesc returned with pResDesc, surfObject\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDriverGetVersion)(int *driverVersion) = NULL;

__host__ cudaError_t  cudaDriverGetVersion(int *driverVersion) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDriverGetVersion.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDriverGetVersion called with \n");
	fprintf(fp, ">>>>>>>> cudaDriverGetVersion called with driverVersion\n");
	ret = orig_cudaDriverGetVersion(driverVersion);
	// fprintf(stderr, ">>>>>>>> cudaDriverGetVersion returned\n");
	fprintf(fp, ">>>>>>>> cudaDriverGetVersion returned with driverVersion\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaRuntimeGetVersion)(int *runtimeVersion) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaRuntimeGetVersion(int *runtimeVersion) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaRuntimeGetVersion.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaRuntimeGetVersion called with \n");
	fprintf(fp, ">>>>>>>> cudaRuntimeGetVersion called with runtimeVersion\n");
	ret = orig_cudaRuntimeGetVersion(runtimeVersion);
	// fprintf(stderr, ">>>>>>>> cudaRuntimeGetVersion returned\n");
	fprintf(fp, ">>>>>>>> cudaRuntimeGetVersion returned with runtimeVersion\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphCreate)(cudaGraph_t *pGraph, unsigned int flags) = NULL;

__host__ cudaError_t  cudaGraphCreate(cudaGraph_t *pGraph, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphCreate.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphCreate called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphCreate called with pGraph, flags\n");
	ret = orig_cudaGraphCreate(pGraph, flags);
	// fprintf(stderr, ">>>>>>>> cudaGraphCreate returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphCreate returned with pGraph, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddKernelNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaKernelNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphAddKernelNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaKernelNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddKernelNode.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphAddKernelNode called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphAddKernelNode called with pGraphNode, graph, pDependencies, numDependencies, pNodeParams\n");
	ret = orig_cudaGraphAddKernelNode(pGraphNode, graph, pDependencies, numDependencies, pNodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphAddKernelNode returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphAddKernelNode returned with pGraphNode, graph, pDependencies, numDependencies, pNodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphKernelNodeGetParams)(cudaGraphNode_t node, struct cudaKernelNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphKernelNodeGetParams(cudaGraphNode_t node, struct cudaKernelNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphKernelNodeGetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeGetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeGetParams called with node, pNodeParams\n");
	ret = orig_cudaGraphKernelNodeGetParams(node, pNodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeGetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeGetParams returned with node, pNodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphKernelNodeSetParams)(cudaGraphNode_t node, const struct cudaKernelNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphKernelNodeSetParams(cudaGraphNode_t node, const struct cudaKernelNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphKernelNodeSetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeSetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeSetParams called with node, pNodeParams\n");
	ret = orig_cudaGraphKernelNodeSetParams(node, pNodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeSetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeSetParams returned with node, pNodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphKernelNodeCopyAttributes)(        cudaGraphNode_t hSrc,        cudaGraphNode_t hDst) = NULL;

__host__ cudaError_t  cudaGraphKernelNodeCopyAttributes(        cudaGraphNode_t hSrc,        cudaGraphNode_t hDst) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphKernelNodeCopyAttributes.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeCopyAttributes called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeCopyAttributes called with hSrc, hDst\n");
	ret = orig_cudaGraphKernelNodeCopyAttributes(hSrc, hDst);
	// fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeCopyAttributes returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeCopyAttributes returned with hSrc, hDst\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphKernelNodeGetAttribute)(    cudaGraphNode_t hNode,    cudaKernelNodeAttrID attr,    cudaKernelNodeAttrValue *value_out) = NULL;

__host__ cudaError_t  cudaGraphKernelNodeGetAttribute(    cudaGraphNode_t hNode,    cudaKernelNodeAttrID attr,    cudaKernelNodeAttrValue *value_out) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphKernelNodeGetAttribute.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeGetAttribute called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeGetAttribute called with hNode, attr, value_out\n");
	ret = orig_cudaGraphKernelNodeGetAttribute(hNode, attr, value_out);
	// fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeGetAttribute returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeGetAttribute returned with hNode, attr, value_out\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphKernelNodeSetAttribute)(    cudaGraphNode_t hNode,    cudaKernelNodeAttrID attr,    const cudaKernelNodeAttrValue *value) = NULL;

__host__ cudaError_t  cudaGraphKernelNodeSetAttribute(    cudaGraphNode_t hNode,    cudaKernelNodeAttrID attr,    const cudaKernelNodeAttrValue *value) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphKernelNodeSetAttribute.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeSetAttribute called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeSetAttribute called with hNode, attr, value\n");
	ret = orig_cudaGraphKernelNodeSetAttribute(hNode, attr, value);
	// fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeSetAttribute returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeSetAttribute returned with hNode, attr, value\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddMemcpyNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaMemcpy3DParms *pCopyParams) = NULL;

__host__ cudaError_t  cudaGraphAddMemcpyNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaMemcpy3DParms *pCopyParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddMemcpyNode.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphAddMemcpyNode called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphAddMemcpyNode called with pGraphNode, graph, pDependencies, numDependencies, pCopyParams\n");
	ret = orig_cudaGraphAddMemcpyNode(pGraphNode, graph, pDependencies, numDependencies, pCopyParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphAddMemcpyNode returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphAddMemcpyNode returned with pGraphNode, graph, pDependencies, numDependencies, pCopyParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphMemcpyNodeGetParams)(cudaGraphNode_t node, struct cudaMemcpy3DParms *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node, struct cudaMemcpy3DParms *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphMemcpyNodeGetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphMemcpyNodeGetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphMemcpyNodeGetParams called with node, pNodeParams\n");
	ret = orig_cudaGraphMemcpyNodeGetParams(node, pNodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphMemcpyNodeGetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphMemcpyNodeGetParams returned with node, pNodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphMemcpyNodeSetParams)(cudaGraphNode_t node, const struct cudaMemcpy3DParms *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node, const struct cudaMemcpy3DParms *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphMemcpyNodeSetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphMemcpyNodeSetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphMemcpyNodeSetParams called with node, pNodeParams\n");
	ret = orig_cudaGraphMemcpyNodeSetParams(node, pNodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphMemcpyNodeSetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphMemcpyNodeSetParams returned with node, pNodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddMemsetNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaMemsetParams *pMemsetParams) = NULL;

__host__ cudaError_t  cudaGraphAddMemsetNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaMemsetParams *pMemsetParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddMemsetNode.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphAddMemsetNode called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphAddMemsetNode called with pGraphNode, graph, pDependencies, numDependencies, pMemsetParams\n");
	ret = orig_cudaGraphAddMemsetNode(pGraphNode, graph, pDependencies, numDependencies, pMemsetParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphAddMemsetNode returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphAddMemsetNode returned with pGraphNode, graph, pDependencies, numDependencies, pMemsetParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphMemsetNodeGetParams)(cudaGraphNode_t node, struct cudaMemsetParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphMemsetNodeGetParams(cudaGraphNode_t node, struct cudaMemsetParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphMemsetNodeGetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphMemsetNodeGetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphMemsetNodeGetParams called with node, pNodeParams\n");
	ret = orig_cudaGraphMemsetNodeGetParams(node, pNodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphMemsetNodeGetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphMemsetNodeGetParams returned with node, pNodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphMemsetNodeSetParams)(cudaGraphNode_t node, const struct cudaMemsetParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphMemsetNodeSetParams(cudaGraphNode_t node, const struct cudaMemsetParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphMemsetNodeSetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphMemsetNodeSetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphMemsetNodeSetParams called with node, pNodeParams\n");
	ret = orig_cudaGraphMemsetNodeSetParams(node, pNodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphMemsetNodeSetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphMemsetNodeSetParams returned with node, pNodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddHostNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaHostNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphAddHostNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaHostNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddHostNode.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphAddHostNode called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphAddHostNode called with pGraphNode, graph, pDependencies, numDependencies, pNodeParams\n");
	ret = orig_cudaGraphAddHostNode(pGraphNode, graph, pDependencies, numDependencies, pNodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphAddHostNode returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphAddHostNode returned with pGraphNode, graph, pDependencies, numDependencies, pNodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphHostNodeGetParams)(cudaGraphNode_t node, struct cudaHostNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphHostNodeGetParams(cudaGraphNode_t node, struct cudaHostNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphHostNodeGetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphHostNodeGetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphHostNodeGetParams called with node, pNodeParams\n");
	ret = orig_cudaGraphHostNodeGetParams(node, pNodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphHostNodeGetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphHostNodeGetParams returned with node, pNodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphHostNodeSetParams)(cudaGraphNode_t node, const struct cudaHostNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphHostNodeSetParams(cudaGraphNode_t node, const struct cudaHostNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphHostNodeSetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphHostNodeSetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphHostNodeSetParams called with node, pNodeParams\n");
	ret = orig_cudaGraphHostNodeSetParams(node, pNodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphHostNodeSetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphHostNodeSetParams returned with node, pNodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddChildGraphNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, cudaGraph_t childGraph) = NULL;

__host__ cudaError_t  cudaGraphAddChildGraphNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, cudaGraph_t childGraph) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddChildGraphNode.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphAddChildGraphNode called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphAddChildGraphNode called with pGraphNode, graph, pDependencies, numDependencies, childGraph\n");
	ret = orig_cudaGraphAddChildGraphNode(pGraphNode, graph, pDependencies, numDependencies, childGraph);
	// fprintf(stderr, ">>>>>>>> cudaGraphAddChildGraphNode returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphAddChildGraphNode returned with pGraphNode, graph, pDependencies, numDependencies, childGraph\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphChildGraphNodeGetGraph)(cudaGraphNode_t node, cudaGraph_t *pGraph) = NULL;

__host__ cudaError_t  cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t *pGraph) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphChildGraphNodeGetGraph.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphChildGraphNodeGetGraph called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphChildGraphNodeGetGraph called with node, pGraph\n");
	ret = orig_cudaGraphChildGraphNodeGetGraph(node, pGraph);
	// fprintf(stderr, ">>>>>>>> cudaGraphChildGraphNodeGetGraph returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphChildGraphNodeGetGraph returned with node, pGraph\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddEmptyNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies) = NULL;

__host__ cudaError_t  cudaGraphAddEmptyNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddEmptyNode.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphAddEmptyNode called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphAddEmptyNode called with pGraphNode, graph, pDependencies, numDependencies\n");
	ret = orig_cudaGraphAddEmptyNode(pGraphNode, graph, pDependencies, numDependencies);
	// fprintf(stderr, ">>>>>>>> cudaGraphAddEmptyNode returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphAddEmptyNode returned with pGraphNode, graph, pDependencies, numDependencies\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddExternalSemaphoresSignalNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphAddExternalSemaphoresSignalNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddExternalSemaphoresSignalNode.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphAddExternalSemaphoresSignalNode called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphAddExternalSemaphoresSignalNode called with pGraphNode, graph, pDependencies, numDependencies, nodeParams\n");
	ret = orig_cudaGraphAddExternalSemaphoresSignalNode(pGraphNode, graph, pDependencies, numDependencies, nodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphAddExternalSemaphoresSignalNode returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphAddExternalSemaphoresSignalNode returned with pGraphNode, graph, pDependencies, numDependencies, nodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExternalSemaphoresSignalNodeGetParams)(cudaGraphNode_t hNode, struct cudaExternalSemaphoreSignalNodeParams *params_out) = NULL;

__host__ cudaError_t  cudaGraphExternalSemaphoresSignalNodeGetParams(cudaGraphNode_t hNode, struct cudaExternalSemaphoreSignalNodeParams *params_out) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExternalSemaphoresSignalNodeGetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeGetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeGetParams called with hNode, params_out\n");
	ret = orig_cudaGraphExternalSemaphoresSignalNodeGetParams(hNode, params_out);
	// fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeGetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeGetParams returned with hNode, params_out\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExternalSemaphoresSignalNodeSetParams)(cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphExternalSemaphoresSignalNodeSetParams(cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExternalSemaphoresSignalNodeSetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeSetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeSetParams called with hNode, nodeParams\n");
	ret = orig_cudaGraphExternalSemaphoresSignalNodeSetParams(hNode, nodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeSetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeSetParams returned with hNode, nodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddExternalSemaphoresWaitNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphAddExternalSemaphoresWaitNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddExternalSemaphoresWaitNode.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphAddExternalSemaphoresWaitNode called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphAddExternalSemaphoresWaitNode called with pGraphNode, graph, pDependencies, numDependencies, nodeParams\n");
	ret = orig_cudaGraphAddExternalSemaphoresWaitNode(pGraphNode, graph, pDependencies, numDependencies, nodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphAddExternalSemaphoresWaitNode returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphAddExternalSemaphoresWaitNode returned with pGraphNode, graph, pDependencies, numDependencies, nodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExternalSemaphoresWaitNodeGetParams)(cudaGraphNode_t hNode, struct cudaExternalSemaphoreWaitNodeParams *params_out) = NULL;

__host__ cudaError_t  cudaGraphExternalSemaphoresWaitNodeGetParams(cudaGraphNode_t hNode, struct cudaExternalSemaphoreWaitNodeParams *params_out) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExternalSemaphoresWaitNodeGetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeGetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeGetParams called with hNode, params_out\n");
	ret = orig_cudaGraphExternalSemaphoresWaitNodeGetParams(hNode, params_out);
	// fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeGetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeGetParams returned with hNode, params_out\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExternalSemaphoresWaitNodeSetParams)(cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphExternalSemaphoresWaitNodeSetParams(cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExternalSemaphoresWaitNodeSetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeSetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeSetParams called with hNode, nodeParams\n");
	ret = orig_cudaGraphExternalSemaphoresWaitNodeSetParams(hNode, nodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeSetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeSetParams returned with hNode, nodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddMemAllocNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, struct cudaMemAllocNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphAddMemAllocNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, struct cudaMemAllocNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddMemAllocNode.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphAddMemAllocNode called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphAddMemAllocNode called with pGraphNode, graph, pDependencies, numDependencies, nodeParams\n");
	ret = orig_cudaGraphAddMemAllocNode(pGraphNode, graph, pDependencies, numDependencies, nodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphAddMemAllocNode returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphAddMemAllocNode returned with pGraphNode, graph, pDependencies, numDependencies, nodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphMemAllocNodeGetParams)(cudaGraphNode_t node, struct cudaMemAllocNodeParams *params_out) = NULL;

__host__ cudaError_t  cudaGraphMemAllocNodeGetParams(cudaGraphNode_t node, struct cudaMemAllocNodeParams *params_out) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphMemAllocNodeGetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphMemAllocNodeGetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphMemAllocNodeGetParams called with node, params_out\n");
	ret = orig_cudaGraphMemAllocNodeGetParams(node, params_out);
	// fprintf(stderr, ">>>>>>>> cudaGraphMemAllocNodeGetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphMemAllocNodeGetParams returned with node, params_out\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddMemFreeNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, void *dptr) = NULL;

__host__ cudaError_t  cudaGraphAddMemFreeNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, void *dptr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddMemFreeNode.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphAddMemFreeNode called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphAddMemFreeNode called with pGraphNode, graph, pDependencies, numDependencies, dptr\n");
	ret = orig_cudaGraphAddMemFreeNode(pGraphNode, graph, pDependencies, numDependencies, dptr);
	// fprintf(stderr, ">>>>>>>> cudaGraphAddMemFreeNode returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphAddMemFreeNode returned with pGraphNode, graph, pDependencies, numDependencies, dptr\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphMemFreeNodeGetParams)(cudaGraphNode_t node, void *dptr_out) = NULL;

__host__ cudaError_t  cudaGraphMemFreeNodeGetParams(cudaGraphNode_t node, void *dptr_out) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphMemFreeNodeGetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphMemFreeNodeGetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphMemFreeNodeGetParams called with node, dptr_out\n");
	ret = orig_cudaGraphMemFreeNodeGetParams(node, dptr_out);
	// fprintf(stderr, ">>>>>>>> cudaGraphMemFreeNodeGetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphMemFreeNodeGetParams returned with node, dptr_out\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceGraphMemTrim)(int device) = NULL;

__host__ cudaError_t  cudaDeviceGraphMemTrim(int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGraphMemTrim.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceGraphMemTrim called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceGraphMemTrim called with device\n");
	ret = orig_cudaDeviceGraphMemTrim(device);
	// fprintf(stderr, ">>>>>>>> cudaDeviceGraphMemTrim returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceGraphMemTrim returned with device\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceGetGraphMemAttribute)(int device, enum cudaGraphMemAttributeType attr, void* value) = NULL;

__host__ cudaError_t  cudaDeviceGetGraphMemAttribute(int device, enum cudaGraphMemAttributeType attr, void* value) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetGraphMemAttribute.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetGraphMemAttribute called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetGraphMemAttribute called with device, attr, value\n");
	ret = orig_cudaDeviceGetGraphMemAttribute(device, attr, value);
	// fprintf(stderr, ">>>>>>>> cudaDeviceGetGraphMemAttribute returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceGetGraphMemAttribute returned with device, attr, value\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceSetGraphMemAttribute)(int device, enum cudaGraphMemAttributeType attr, void* value) = NULL;

__host__ cudaError_t  cudaDeviceSetGraphMemAttribute(int device, enum cudaGraphMemAttributeType attr, void* value) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceSetGraphMemAttribute.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaDeviceSetGraphMemAttribute called with \n");
	fprintf(fp, ">>>>>>>> cudaDeviceSetGraphMemAttribute called with device, attr, value\n");
	ret = orig_cudaDeviceSetGraphMemAttribute(device, attr, value);
	// fprintf(stderr, ">>>>>>>> cudaDeviceSetGraphMemAttribute returned\n");
	fprintf(fp, ">>>>>>>> cudaDeviceSetGraphMemAttribute returned with device, attr, value\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphClone)(cudaGraph_t *pGraphClone, cudaGraph_t originalGraph) = NULL;

__host__ cudaError_t  cudaGraphClone(cudaGraph_t *pGraphClone, cudaGraph_t originalGraph) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphClone.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphClone called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphClone called with pGraphClone, originalGraph\n");
	ret = orig_cudaGraphClone(pGraphClone, originalGraph);
	// fprintf(stderr, ">>>>>>>> cudaGraphClone returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphClone returned with pGraphClone, originalGraph\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeFindInClone)(cudaGraphNode_t *pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph) = NULL;

__host__ cudaError_t  cudaGraphNodeFindInClone(cudaGraphNode_t *pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeFindInClone.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeFindInClone called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeFindInClone called with pNode, originalNode, clonedGraph\n");
	ret = orig_cudaGraphNodeFindInClone(pNode, originalNode, clonedGraph);
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeFindInClone returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeFindInClone returned with pNode, originalNode, clonedGraph\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeGetType)(cudaGraphNode_t node, enum cudaGraphNodeType *pType) = NULL;

__host__ cudaError_t  cudaGraphNodeGetType(cudaGraphNode_t node, enum cudaGraphNodeType *pType) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeGetType.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeGetType called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeGetType called with node, pType\n");
	ret = orig_cudaGraphNodeGetType(node, pType);
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeGetType returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeGetType returned with node, pType\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphGetNodes)(cudaGraph_t graph, cudaGraphNode_t *nodes, size_t *numNodes) = NULL;

__host__ cudaError_t  cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t *nodes, size_t *numNodes) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphGetNodes.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphGetNodes called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphGetNodes called with graph, nodes, numNodes\n");
	ret = orig_cudaGraphGetNodes(graph, nodes, numNodes);
	// fprintf(stderr, ">>>>>>>> cudaGraphGetNodes returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphGetNodes returned with graph, nodes, numNodes\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphGetRootNodes)(cudaGraph_t graph, cudaGraphNode_t *pRootNodes, size_t *pNumRootNodes) = NULL;

__host__ cudaError_t  cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t *pRootNodes, size_t *pNumRootNodes) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphGetRootNodes.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphGetRootNodes called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphGetRootNodes called with graph, pRootNodes, pNumRootNodes\n");
	ret = orig_cudaGraphGetRootNodes(graph, pRootNodes, pNumRootNodes);
	// fprintf(stderr, ">>>>>>>> cudaGraphGetRootNodes returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphGetRootNodes returned with graph, pRootNodes, pNumRootNodes\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphGetEdges)(cudaGraph_t graph, cudaGraphNode_t *from, cudaGraphNode_t *to, size_t *numEdges) = NULL;

__host__ cudaError_t  cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t *from, cudaGraphNode_t *to, size_t *numEdges) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphGetEdges.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphGetEdges called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphGetEdges called with graph, from, to, numEdges\n");
	ret = orig_cudaGraphGetEdges(graph, from, to, numEdges);
	// fprintf(stderr, ">>>>>>>> cudaGraphGetEdges returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphGetEdges returned with graph, from, to, numEdges\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphGetEdges_v2)(cudaGraph_t graph, cudaGraphNode_t *from, cudaGraphNode_t *to, cudaGraphEdgeData *edgeData, size_t *numEdges) = NULL;

__host__ cudaError_t  cudaGraphGetEdges_v2(cudaGraph_t graph, cudaGraphNode_t *from, cudaGraphNode_t *to, cudaGraphEdgeData *edgeData, size_t *numEdges) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphGetEdges_v2.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphGetEdges_v2 called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphGetEdges_v2 called with graph, from, to, edgeData, numEdges\n");
	ret = orig_cudaGraphGetEdges_v2(graph, from, to, edgeData, numEdges);
	// fprintf(stderr, ">>>>>>>> cudaGraphGetEdges_v2 returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphGetEdges_v2 returned with graph, from, to, edgeData, numEdges\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeGetDependencies)(cudaGraphNode_t node, cudaGraphNode_t *pDependencies, size_t *pNumDependencies) = NULL;

__host__ cudaError_t  cudaGraphNodeGetDependencies(cudaGraphNode_t node, cudaGraphNode_t *pDependencies, size_t *pNumDependencies) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeGetDependencies.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependencies called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependencies called with node, pDependencies, pNumDependencies\n");
	ret = orig_cudaGraphNodeGetDependencies(node, pDependencies, pNumDependencies);
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependencies returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependencies returned with node, pDependencies, pNumDependencies\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeGetDependencies_v2)(cudaGraphNode_t node, cudaGraphNode_t *pDependencies, cudaGraphEdgeData *edgeData, size_t *pNumDependencies) = NULL;

__host__ cudaError_t  cudaGraphNodeGetDependencies_v2(cudaGraphNode_t node, cudaGraphNode_t *pDependencies, cudaGraphEdgeData *edgeData, size_t *pNumDependencies) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeGetDependencies_v2.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependencies_v2 called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependencies_v2 called with node, pDependencies, edgeData, pNumDependencies\n");
	ret = orig_cudaGraphNodeGetDependencies_v2(node, pDependencies, edgeData, pNumDependencies);
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependencies_v2 returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependencies_v2 returned with node, pDependencies, edgeData, pNumDependencies\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeGetDependentNodes)(cudaGraphNode_t node, cudaGraphNode_t *pDependentNodes, size_t *pNumDependentNodes) = NULL;

__host__ cudaError_t  cudaGraphNodeGetDependentNodes(cudaGraphNode_t node, cudaGraphNode_t *pDependentNodes, size_t *pNumDependentNodes) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeGetDependentNodes.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependentNodes called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependentNodes called with node, pDependentNodes, pNumDependentNodes\n");
	ret = orig_cudaGraphNodeGetDependentNodes(node, pDependentNodes, pNumDependentNodes);
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependentNodes returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependentNodes returned with node, pDependentNodes, pNumDependentNodes\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeGetDependentNodes_v2)(cudaGraphNode_t node, cudaGraphNode_t *pDependentNodes, cudaGraphEdgeData *edgeData, size_t *pNumDependentNodes) = NULL;

__host__ cudaError_t  cudaGraphNodeGetDependentNodes_v2(cudaGraphNode_t node, cudaGraphNode_t *pDependentNodes, cudaGraphEdgeData *edgeData, size_t *pNumDependentNodes) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeGetDependentNodes_v2.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependentNodes_v2 called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependentNodes_v2 called with node, pDependentNodes, edgeData, pNumDependentNodes\n");
	ret = orig_cudaGraphNodeGetDependentNodes_v2(node, pDependentNodes, edgeData, pNumDependentNodes);
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependentNodes_v2 returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependentNodes_v2 returned with node, pDependentNodes, edgeData, pNumDependentNodes\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddDependencies)(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, size_t numDependencies) = NULL;

__host__ cudaError_t  cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, size_t numDependencies) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddDependencies.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphAddDependencies called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphAddDependencies called with graph, from, to, numDependencies\n");
	ret = orig_cudaGraphAddDependencies(graph, from, to, numDependencies);
	// fprintf(stderr, ">>>>>>>> cudaGraphAddDependencies returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphAddDependencies returned with graph, from, to, numDependencies\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddDependencies_v2)(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, const cudaGraphEdgeData *edgeData, size_t numDependencies) = NULL;

__host__ cudaError_t  cudaGraphAddDependencies_v2(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, const cudaGraphEdgeData *edgeData, size_t numDependencies) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddDependencies_v2.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphAddDependencies_v2 called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphAddDependencies_v2 called with graph, from, to, edgeData, numDependencies\n");
	ret = orig_cudaGraphAddDependencies_v2(graph, from, to, edgeData, numDependencies);
	// fprintf(stderr, ">>>>>>>> cudaGraphAddDependencies_v2 returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphAddDependencies_v2 returned with graph, from, to, edgeData, numDependencies\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphRemoveDependencies)(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, size_t numDependencies) = NULL;

__host__ cudaError_t  cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, size_t numDependencies) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphRemoveDependencies.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphRemoveDependencies called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphRemoveDependencies called with graph, from, to, numDependencies\n");
	ret = orig_cudaGraphRemoveDependencies(graph, from, to, numDependencies);
	// fprintf(stderr, ">>>>>>>> cudaGraphRemoveDependencies returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphRemoveDependencies returned with graph, from, to, numDependencies\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphRemoveDependencies_v2)(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, const cudaGraphEdgeData *edgeData, size_t numDependencies) = NULL;

__host__ cudaError_t  cudaGraphRemoveDependencies_v2(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, const cudaGraphEdgeData *edgeData, size_t numDependencies) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphRemoveDependencies_v2.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphRemoveDependencies_v2 called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphRemoveDependencies_v2 called with graph, from, to, edgeData, numDependencies\n");
	ret = orig_cudaGraphRemoveDependencies_v2(graph, from, to, edgeData, numDependencies);
	// fprintf(stderr, ">>>>>>>> cudaGraphRemoveDependencies_v2 returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphRemoveDependencies_v2 returned with graph, from, to, edgeData, numDependencies\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphDestroyNode)(cudaGraphNode_t node) = NULL;

__host__ cudaError_t  cudaGraphDestroyNode(cudaGraphNode_t node) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphDestroyNode.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphDestroyNode called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphDestroyNode called with node\n");
	ret = orig_cudaGraphDestroyNode(node);
	// fprintf(stderr, ">>>>>>>> cudaGraphDestroyNode returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphDestroyNode returned with node\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphInstantiate)(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, unsigned long long flags ) = NULL;

__host__ cudaError_t  cudaGraphInstantiate(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, unsigned long long flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphInstantiate.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphInstantiate called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphInstantiate called with pGraphExec, graph, flags\n");
	ret = orig_cudaGraphInstantiate(pGraphExec, graph, flags);
	// fprintf(stderr, ">>>>>>>> cudaGraphInstantiate returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphInstantiate returned with pGraphExec, graph, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphInstantiateWithFlags)(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, unsigned long long flags ) = NULL;

__host__ cudaError_t  cudaGraphInstantiateWithFlags(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, unsigned long long flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphInstantiateWithFlags.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphInstantiateWithFlags called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphInstantiateWithFlags called with pGraphExec, graph, flags\n");
	ret = orig_cudaGraphInstantiateWithFlags(pGraphExec, graph, flags);
	// fprintf(stderr, ">>>>>>>> cudaGraphInstantiateWithFlags returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphInstantiateWithFlags returned with pGraphExec, graph, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphInstantiateWithParams)(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, cudaGraphInstantiateParams *instantiateParams) = NULL;

__host__ cudaError_t  cudaGraphInstantiateWithParams(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, cudaGraphInstantiateParams *instantiateParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphInstantiateWithParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphInstantiateWithParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphInstantiateWithParams called with pGraphExec, graph, instantiateParams\n");
	ret = orig_cudaGraphInstantiateWithParams(pGraphExec, graph, instantiateParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphInstantiateWithParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphInstantiateWithParams returned with pGraphExec, graph, instantiateParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecGetFlags)(cudaGraphExec_t graphExec, unsigned long long *flags) = NULL;

__host__ cudaError_t  cudaGraphExecGetFlags(cudaGraphExec_t graphExec, unsigned long long *flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecGetFlags.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphExecGetFlags called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphExecGetFlags called with graphExec, flags\n");
	ret = orig_cudaGraphExecGetFlags(graphExec, flags);
	// fprintf(stderr, ">>>>>>>> cudaGraphExecGetFlags returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphExecGetFlags returned with graphExec, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecKernelNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaKernelNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphExecKernelNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaKernelNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecKernelNodeSetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphExecKernelNodeSetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphExecKernelNodeSetParams called with hGraphExec, node, pNodeParams\n");
	ret = orig_cudaGraphExecKernelNodeSetParams(hGraphExec, node, pNodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphExecKernelNodeSetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphExecKernelNodeSetParams returned with hGraphExec, node, pNodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecMemcpyNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaMemcpy3DParms *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphExecMemcpyNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaMemcpy3DParms *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecMemcpyNodeSetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphExecMemcpyNodeSetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphExecMemcpyNodeSetParams called with hGraphExec, node, pNodeParams\n");
	ret = orig_cudaGraphExecMemcpyNodeSetParams(hGraphExec, node, pNodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphExecMemcpyNodeSetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphExecMemcpyNodeSetParams returned with hGraphExec, node, pNodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecMemsetNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaMemsetParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphExecMemsetNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaMemsetParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecMemsetNodeSetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphExecMemsetNodeSetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphExecMemsetNodeSetParams called with hGraphExec, node, pNodeParams\n");
	ret = orig_cudaGraphExecMemsetNodeSetParams(hGraphExec, node, pNodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphExecMemsetNodeSetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphExecMemsetNodeSetParams returned with hGraphExec, node, pNodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecHostNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaHostNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphExecHostNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaHostNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecHostNodeSetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphExecHostNodeSetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphExecHostNodeSetParams called with hGraphExec, node, pNodeParams\n");
	ret = orig_cudaGraphExecHostNodeSetParams(hGraphExec, node, pNodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphExecHostNodeSetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphExecHostNodeSetParams returned with hGraphExec, node, pNodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecExternalSemaphoresSignalNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphExecExternalSemaphoresSignalNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecExternalSemaphoresSignalNodeSetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphExecExternalSemaphoresSignalNodeSetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphExecExternalSemaphoresSignalNodeSetParams called with hGraphExec, hNode, nodeParams\n");
	ret = orig_cudaGraphExecExternalSemaphoresSignalNodeSetParams(hGraphExec, hNode, nodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphExecExternalSemaphoresSignalNodeSetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphExecExternalSemaphoresSignalNodeSetParams returned with hGraphExec, hNode, nodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecExternalSemaphoresWaitNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphExecExternalSemaphoresWaitNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecExternalSemaphoresWaitNodeSetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphExecExternalSemaphoresWaitNodeSetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphExecExternalSemaphoresWaitNodeSetParams called with hGraphExec, hNode, nodeParams\n");
	ret = orig_cudaGraphExecExternalSemaphoresWaitNodeSetParams(hGraphExec, hNode, nodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphExecExternalSemaphoresWaitNodeSetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphExecExternalSemaphoresWaitNodeSetParams returned with hGraphExec, hNode, nodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeSetEnabled)(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned int isEnabled) = NULL;

__host__ cudaError_t  cudaGraphNodeSetEnabled(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned int isEnabled) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeSetEnabled.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeSetEnabled called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeSetEnabled called with hGraphExec, hNode, isEnabled\n");
	ret = orig_cudaGraphNodeSetEnabled(hGraphExec, hNode, isEnabled);
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeSetEnabled returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeSetEnabled returned with hGraphExec, hNode, isEnabled\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeGetEnabled)(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned int *isEnabled) = NULL;

__host__ cudaError_t  cudaGraphNodeGetEnabled(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned int *isEnabled) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeGetEnabled.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeGetEnabled called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeGetEnabled called with hGraphExec, hNode, isEnabled\n");
	ret = orig_cudaGraphNodeGetEnabled(hGraphExec, hNode, isEnabled);
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeGetEnabled returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeGetEnabled returned with hGraphExec, hNode, isEnabled\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecUpdate)(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphExecUpdateResultInfo *resultInfo) = NULL;

__host__ cudaError_t  cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphExecUpdateResultInfo *resultInfo) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecUpdate.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphExecUpdate called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphExecUpdate called with hGraphExec, hGraph, resultInfo\n");
	ret = orig_cudaGraphExecUpdate(hGraphExec, hGraph, resultInfo);
	// fprintf(stderr, ">>>>>>>> cudaGraphExecUpdate returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphExecUpdate returned with hGraphExec, hGraph, resultInfo\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphLaunch)(cudaGraphExec_t graphExec, cudaStream_t stream) = NULL;

__host__ cudaError_t  cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphLaunch.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphLaunch called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphLaunch called with graphExec, stream\n");
	ret = orig_cudaGraphLaunch(graphExec, stream);
	// fprintf(stderr, ">>>>>>>> cudaGraphLaunch returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphLaunch returned with graphExec, stream\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecDestroy)(cudaGraphExec_t graphExec) = NULL;

__host__ cudaError_t  cudaGraphExecDestroy(cudaGraphExec_t graphExec) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecDestroy.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphExecDestroy called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphExecDestroy called with graphExec\n");
	ret = orig_cudaGraphExecDestroy(graphExec);
	// fprintf(stderr, ">>>>>>>> cudaGraphExecDestroy returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphExecDestroy returned with graphExec\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphDestroy)(cudaGraph_t graph) = NULL;

__host__ cudaError_t  cudaGraphDestroy(cudaGraph_t graph) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphDestroy.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphDestroy called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphDestroy called with graph\n");
	ret = orig_cudaGraphDestroy(graph);
	// fprintf(stderr, ">>>>>>>> cudaGraphDestroy returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphDestroy returned with graph\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphDebugDotPrint)(cudaGraph_t graph, const char *path, unsigned int flags) = NULL;

__host__ cudaError_t  cudaGraphDebugDotPrint(cudaGraph_t graph, const char *path, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphDebugDotPrint.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphDebugDotPrint called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphDebugDotPrint called with graph, path, flags\n");
	ret = orig_cudaGraphDebugDotPrint(graph, path, flags);
	// fprintf(stderr, ">>>>>>>> cudaGraphDebugDotPrint returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphDebugDotPrint returned with graph, path, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaUserObjectCreate)(cudaUserObject_t *object_out, void *ptr, cudaHostFn_t destroy, unsigned int initialRefcount, unsigned int flags) = NULL;

__host__ cudaError_t  cudaUserObjectCreate(cudaUserObject_t *object_out, void *ptr, cudaHostFn_t destroy, unsigned int initialRefcount, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaUserObjectCreate.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaUserObjectCreate called with \n");
	fprintf(fp, ">>>>>>>> cudaUserObjectCreate called with object_out, ptr, destroy, initialRefcount, flags\n");
	ret = orig_cudaUserObjectCreate(object_out, ptr, destroy, initialRefcount, flags);
	// fprintf(stderr, ">>>>>>>> cudaUserObjectCreate returned\n");
	fprintf(fp, ">>>>>>>> cudaUserObjectCreate returned with object_out, ptr, destroy, initialRefcount, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaUserObjectRetain)(cudaUserObject_t object, unsigned int count ) = NULL;

__host__ cudaError_t  cudaUserObjectRetain(cudaUserObject_t object, unsigned int count ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaUserObjectRetain.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaUserObjectRetain called with \n");
	fprintf(fp, ">>>>>>>> cudaUserObjectRetain called with object, count\n");
	ret = orig_cudaUserObjectRetain(object, count);
	// fprintf(stderr, ">>>>>>>> cudaUserObjectRetain returned\n");
	fprintf(fp, ">>>>>>>> cudaUserObjectRetain returned with object, count\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaUserObjectRelease)(cudaUserObject_t object, unsigned int count ) = NULL;

__host__ cudaError_t  cudaUserObjectRelease(cudaUserObject_t object, unsigned int count ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaUserObjectRelease.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaUserObjectRelease called with \n");
	fprintf(fp, ">>>>>>>> cudaUserObjectRelease called with object, count\n");
	ret = orig_cudaUserObjectRelease(object, count);
	// fprintf(stderr, ">>>>>>>> cudaUserObjectRelease returned\n");
	fprintf(fp, ">>>>>>>> cudaUserObjectRelease returned with object, count\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphRetainUserObject)(cudaGraph_t graph, cudaUserObject_t object, unsigned int count , unsigned int flags ) = NULL;

__host__ cudaError_t  cudaGraphRetainUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned int count , unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphRetainUserObject.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphRetainUserObject called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphRetainUserObject called with graph, object, count, flags\n");
	ret = orig_cudaGraphRetainUserObject(graph, object, count, flags);
	// fprintf(stderr, ">>>>>>>> cudaGraphRetainUserObject returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphRetainUserObject returned with graph, object, count, flags\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphReleaseUserObject)(cudaGraph_t graph, cudaUserObject_t object, unsigned int count ) = NULL;

__host__ cudaError_t  cudaGraphReleaseUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned int count ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphReleaseUserObject.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphReleaseUserObject called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphReleaseUserObject called with graph, object, count\n");
	ret = orig_cudaGraphReleaseUserObject(graph, object, count);
	// fprintf(stderr, ">>>>>>>> cudaGraphReleaseUserObject returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphReleaseUserObject returned with graph, object, count\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, struct cudaGraphNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphAddNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, struct cudaGraphNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddNode.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphAddNode called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphAddNode called with pGraphNode, graph, pDependencies, numDependencies, nodeParams\n");
	ret = orig_cudaGraphAddNode(pGraphNode, graph, pDependencies, numDependencies, nodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphAddNode returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphAddNode returned with pGraphNode, graph, pDependencies, numDependencies, nodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddNode_v2)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, struct cudaGraphNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphAddNode_v2(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, struct cudaGraphNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddNode_v2.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphAddNode_v2 called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphAddNode_v2 called with pGraphNode, graph, pDependencies, dependencyData, numDependencies, nodeParams\n");
	ret = orig_cudaGraphAddNode_v2(pGraphNode, graph, pDependencies, dependencyData, numDependencies, nodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphAddNode_v2 returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphAddNode_v2 returned with pGraphNode, graph, pDependencies, dependencyData, numDependencies, nodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeSetParams)(cudaGraphNode_t node, struct cudaGraphNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphNodeSetParams(cudaGraphNode_t node, struct cudaGraphNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeSetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeSetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeSetParams called with node, nodeParams\n");
	ret = orig_cudaGraphNodeSetParams(node, nodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphNodeSetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphNodeSetParams returned with node, nodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecNodeSetParams)(cudaGraphExec_t graphExec, cudaGraphNode_t node, struct cudaGraphNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphExecNodeSetParams(cudaGraphExec_t graphExec, cudaGraphNode_t node, struct cudaGraphNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecNodeSetParams.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphExecNodeSetParams called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphExecNodeSetParams called with graphExec, node, nodeParams\n");
	ret = orig_cudaGraphExecNodeSetParams(graphExec, node, nodeParams);
	// fprintf(stderr, ">>>>>>>> cudaGraphExecNodeSetParams returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphExecNodeSetParams returned with graphExec, node, nodeParams\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphConditionalHandleCreate)(cudaGraphConditionalHandle *pHandle_out, cudaGraph_t graph, unsigned int defaultLaunchValue , unsigned int flags ) = NULL;

__host__ cudaError_t  cudaGraphConditionalHandleCreate(cudaGraphConditionalHandle *pHandle_out, cudaGraph_t graph, unsigned int defaultLaunchValue , unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphConditionalHandleCreate.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGraphConditionalHandleCreate called with \n");
	fprintf(fp, ">>>>>>>> cudaGraphConditionalHandleCreate called with pHandle_out, graph, defaultLaunchValue, flags\n");
	ret = orig_cudaGraphConditionalHandleCreate(pHandle_out, graph, defaultLaunchValue, flags);
	// fprintf(stderr, ">>>>>>>> cudaGraphConditionalHandleCreate returned\n");
	fprintf(fp, ">>>>>>>> cudaGraphConditionalHandleCreate returned with pHandle_out, graph, defaultLaunchValue, flags\n");
	return ret;

}

// static __host__ cudaError_t  (*orig_cudaGetDriverEntryPoint)(const char *symbol, void **funcPtr, unsigned long long flags, enum cudaDriverEntryPointQueryResult *driverStatus = NULL) = NULL;

// __host__ cudaError_t  cudaGetDriverEntryPoint(const char *symbol, void **funcPtr, unsigned long long flags, enum cudaDriverEntryPointQueryResult *driverStatus = NULL) {
//     	cudaError_t ret;
// 	// Write your own custom c code in the cudaGetDriverEntryPoint.c file
// 	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
// 	// fprintf(stderr, ">>>>>>>> cudaGetDriverEntryPoint called with \n");
// 	fprintf(fp, ">>>>>>>> cudaGetDriverEntryPoint called with symbol, funcPtr, flags, driverStatus\n");
// 	ret = orig_cudaGetDriverEntryPoint(symbol, funcPtr, flags, driverStatus);
// 	// fprintf(stderr, ">>>>>>>> cudaGetDriverEntryPoint returned\n");
// 	fprintf(fp, ">>>>>>>> cudaGetDriverEntryPoint returned with symbol, funcPtr, flags, driverStatus\n");
// 	return ret;

// }

static __host__ cudaError_t  (*orig_cudaGetDriverEntryPoint)(const char *symbol, void **funcPtr, unsigned long long flags, enum cudaDriverEntryPointQueryResult *driverStatus) = NULL;

// __host__ cudaError_t  cudaGetDriverEntryPoint(const char *symbol, void **funcPtr, unsigned long long flags, enum cudaDriverEntryPointQueryResult *driverStatus) {
//     	cudaError_t ret;
// 	// Write your own custom c code in the cudaGetDriverEntryPoint.c file
// 	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
// 	// fprintf(stderr, ">>>>>>>> cudaGetDriverEntryPoint called with \n");
// 	fprintf(fp, ">>>>>>>> cudaGetDriverEntryPoint called with symbol, funcPtr, flags, driverStatus\n");
// 	ret = orig_cudaGetDriverEntryPoint(symbol, funcPtr, flags, driverStatus);
// 	// fprintf(stderr, ">>>>>>>> cudaGetDriverEntryPoint returned\n");
// 	fprintf(fp, ">>>>>>>> cudaGetDriverEntryPoint returned with symbol, funcPtr, flags, driverStatus\n");
// 	return ret;

// }

static __host__ cudaError_t  (*orig_cudaGetExportTable)(const void **ppExportTable, const cudaUUID_t *pExportTableId) = NULL;

__host__ cudaError_t  cudaGetExportTable(const void **ppExportTable, const cudaUUID_t *pExportTableId) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetExportTable.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetExportTable called with \n");
	fprintf(fp, ">>>>>>>> cudaGetExportTable called with ppExportTable, pExportTableId\n");
	ret = orig_cudaGetExportTable(ppExportTable, pExportTableId);
	// fprintf(stderr, ">>>>>>>> cudaGetExportTable returned\n");
	fprintf(fp, ">>>>>>>> cudaGetExportTable returned with ppExportTable, pExportTableId\n");
	return ret;

}

static __host__ cudaError_t (*orig_cudaGetFuncBySymbol)(cudaFunction_t* functionPtr, const void* symbolPtr) = NULL;

__host__ cudaError_t cudaGetFuncBySymbol(cudaFunction_t* functionPtr, const void* symbolPtr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetFuncBySymbol.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetFuncBySymbol called with \n");
	fprintf(fp, ">>>>>>>> cudaGetFuncBySymbol called with functionPtr, symbolPtr\n");
	ret = orig_cudaGetFuncBySymbol(functionPtr, symbolPtr);
	// fprintf(stderr, ">>>>>>>> cudaGetFuncBySymbol returned\n");
	fprintf(fp, ">>>>>>>> cudaGetFuncBySymbol returned with functionPtr, symbolPtr\n");
	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetKernel)(cudaKernel_t *kernelPtr, const void *entryFuncAddr) = NULL;

__host__ cudaError_t  cudaGetKernel(cudaKernel_t *kernelPtr, const void *entryFuncAddr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetKernel.c file
	FILE *fp = fopen("Kernel_LogTwo.txt", "a");
	// fprintf(stderr, ">>>>>>>> cudaGetKernel called with \n");
	fprintf(fp, ">>>>>>>> cudaGetKernel called with kernelPtr, entryFuncAddr\n");
	ret = orig_cudaGetKernel(kernelPtr, entryFuncAddr);
	// fprintf(stderr, ">>>>>>>> cudaGetKernel returned\n");
	fprintf(fp, ">>>>>>>> cudaGetKernel returned with kernelPtr, entryFuncAddr\n");
	return ret;

}
__attribute__((constructor)) static void init() {
	char *dl_error;
    // clear dl error
    dlerror();
    if (orig_cudaDeviceReset == NULL) {
        orig_cudaDeviceReset = dlsym(RTLD_NEXT, "cudaDeviceReset");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceSynchronize == NULL) {
        orig_cudaDeviceSynchronize = dlsym(RTLD_NEXT, "cudaDeviceSynchronize");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceSetLimit == NULL) {
        orig_cudaDeviceSetLimit = dlsym(RTLD_NEXT, "cudaDeviceSetLimit");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceGetLimit == NULL) {
        orig_cudaDeviceGetLimit = dlsym(RTLD_NEXT, "cudaDeviceGetLimit");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceGetCacheConfig == NULL) {
        orig_cudaDeviceGetCacheConfig = dlsym(RTLD_NEXT, "cudaDeviceGetCacheConfig");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceGetStreamPriorityRange == NULL) {
        orig_cudaDeviceGetStreamPriorityRange = dlsym(RTLD_NEXT, "cudaDeviceGetStreamPriorityRange");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceSetCacheConfig == NULL) {
        orig_cudaDeviceSetCacheConfig = dlsym(RTLD_NEXT, "cudaDeviceSetCacheConfig");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceGetByPCIBusId == NULL) {
        orig_cudaDeviceGetByPCIBusId = dlsym(RTLD_NEXT, "cudaDeviceGetByPCIBusId");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceGetPCIBusId == NULL) {
        orig_cudaDeviceGetPCIBusId = dlsym(RTLD_NEXT, "cudaDeviceGetPCIBusId");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaIpcGetEventHandle == NULL) {
        orig_cudaIpcGetEventHandle = dlsym(RTLD_NEXT, "cudaIpcGetEventHandle");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaIpcOpenEventHandle == NULL) {
        orig_cudaIpcOpenEventHandle = dlsym(RTLD_NEXT, "cudaIpcOpenEventHandle");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaIpcGetMemHandle == NULL) {
        orig_cudaIpcGetMemHandle = dlsym(RTLD_NEXT, "cudaIpcGetMemHandle");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaIpcOpenMemHandle == NULL) {
        orig_cudaIpcOpenMemHandle = dlsym(RTLD_NEXT, "cudaIpcOpenMemHandle");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaIpcCloseMemHandle == NULL) {
        orig_cudaIpcCloseMemHandle = dlsym(RTLD_NEXT, "cudaIpcCloseMemHandle");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceFlushGPUDirectRDMAWrites == NULL) {
        orig_cudaDeviceFlushGPUDirectRDMAWrites = dlsym(RTLD_NEXT, "cudaDeviceFlushGPUDirectRDMAWrites");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceRegisterAsyncNotification == NULL) {
        orig_cudaDeviceRegisterAsyncNotification = dlsym(RTLD_NEXT, "cudaDeviceRegisterAsyncNotification");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceUnregisterAsyncNotification == NULL) {
        orig_cudaDeviceUnregisterAsyncNotification = dlsym(RTLD_NEXT, "cudaDeviceUnregisterAsyncNotification");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetLastError == NULL) {
        orig_cudaGetLastError = dlsym(RTLD_NEXT, "cudaGetLastError");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaPeekAtLastError == NULL) {
        orig_cudaPeekAtLastError = dlsym(RTLD_NEXT, "cudaPeekAtLastError");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetErrorName == NULL) {
        orig_cudaGetErrorName = dlsym(RTLD_NEXT, "cudaGetErrorName");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetErrorString == NULL) {
        orig_cudaGetErrorString = dlsym(RTLD_NEXT, "cudaGetErrorString");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetDeviceCount == NULL) {
        orig_cudaGetDeviceCount = dlsym(RTLD_NEXT, "cudaGetDeviceCount");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetDeviceProperties == NULL) {
        orig_cudaGetDeviceProperties = dlsym(RTLD_NEXT, "cudaGetDeviceProperties");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceGetAttribute == NULL) {
        orig_cudaDeviceGetAttribute = dlsym(RTLD_NEXT, "cudaDeviceGetAttribute");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceGetDefaultMemPool == NULL) {
        orig_cudaDeviceGetDefaultMemPool = dlsym(RTLD_NEXT, "cudaDeviceGetDefaultMemPool");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceSetMemPool == NULL) {
        orig_cudaDeviceSetMemPool = dlsym(RTLD_NEXT, "cudaDeviceSetMemPool");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceGetMemPool == NULL) {
        orig_cudaDeviceGetMemPool = dlsym(RTLD_NEXT, "cudaDeviceGetMemPool");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceGetNvSciSyncAttributes == NULL) {
        orig_cudaDeviceGetNvSciSyncAttributes = dlsym(RTLD_NEXT, "cudaDeviceGetNvSciSyncAttributes");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceGetP2PAttribute == NULL) {
        orig_cudaDeviceGetP2PAttribute = dlsym(RTLD_NEXT, "cudaDeviceGetP2PAttribute");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaChooseDevice == NULL) {
        orig_cudaChooseDevice = dlsym(RTLD_NEXT, "cudaChooseDevice");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaInitDevice == NULL) {
        orig_cudaInitDevice = dlsym(RTLD_NEXT, "cudaInitDevice");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaSetDevice == NULL) {
        orig_cudaSetDevice = dlsym(RTLD_NEXT, "cudaSetDevice");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetDevice == NULL) {
        orig_cudaGetDevice = dlsym(RTLD_NEXT, "cudaGetDevice");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaSetValidDevices == NULL) {
        orig_cudaSetValidDevices = dlsym(RTLD_NEXT, "cudaSetValidDevices");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaSetDeviceFlags == NULL) {
        orig_cudaSetDeviceFlags = dlsym(RTLD_NEXT, "cudaSetDeviceFlags");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetDeviceFlags == NULL) {
        orig_cudaGetDeviceFlags = dlsym(RTLD_NEXT, "cudaGetDeviceFlags");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamCreate == NULL) {
        orig_cudaStreamCreate = dlsym(RTLD_NEXT, "cudaStreamCreate");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamCreateWithFlags == NULL) {
        orig_cudaStreamCreateWithFlags = dlsym(RTLD_NEXT, "cudaStreamCreateWithFlags");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamCreateWithPriority == NULL) {
        orig_cudaStreamCreateWithPriority = dlsym(RTLD_NEXT, "cudaStreamCreateWithPriority");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamGetPriority == NULL) {
        orig_cudaStreamGetPriority = dlsym(RTLD_NEXT, "cudaStreamGetPriority");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamGetFlags == NULL) {
        orig_cudaStreamGetFlags = dlsym(RTLD_NEXT, "cudaStreamGetFlags");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamGetId == NULL) {
        orig_cudaStreamGetId = dlsym(RTLD_NEXT, "cudaStreamGetId");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaCtxResetPersistingL2Cache == NULL) {
        orig_cudaCtxResetPersistingL2Cache = dlsym(RTLD_NEXT, "cudaCtxResetPersistingL2Cache");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamCopyAttributes == NULL) {
        orig_cudaStreamCopyAttributes = dlsym(RTLD_NEXT, "cudaStreamCopyAttributes");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamGetAttribute == NULL) {
        orig_cudaStreamGetAttribute = dlsym(RTLD_NEXT, "cudaStreamGetAttribute");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamSetAttribute == NULL) {
        orig_cudaStreamSetAttribute = dlsym(RTLD_NEXT, "cudaStreamSetAttribute");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamDestroy == NULL) {
        orig_cudaStreamDestroy = dlsym(RTLD_NEXT, "cudaStreamDestroy");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamWaitEvent == NULL) {
        orig_cudaStreamWaitEvent = dlsym(RTLD_NEXT, "cudaStreamWaitEvent");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamAddCallback == NULL) {
        orig_cudaStreamAddCallback = dlsym(RTLD_NEXT, "cudaStreamAddCallback");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamSynchronize == NULL) {
        orig_cudaStreamSynchronize = dlsym(RTLD_NEXT, "cudaStreamSynchronize");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamQuery == NULL) {
        orig_cudaStreamQuery = dlsym(RTLD_NEXT, "cudaStreamQuery");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamAttachMemAsync == NULL) {
        orig_cudaStreamAttachMemAsync = dlsym(RTLD_NEXT, "cudaStreamAttachMemAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamAttachMemAsync == NULL) {
        orig_cudaStreamAttachMemAsync = dlsym(RTLD_NEXT, "cudaStreamAttachMemAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamBeginCapture == NULL) {
        orig_cudaStreamBeginCapture = dlsym(RTLD_NEXT, "cudaStreamBeginCapture");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamBeginCaptureToGraph == NULL) {
        orig_cudaStreamBeginCaptureToGraph = dlsym(RTLD_NEXT, "cudaStreamBeginCaptureToGraph");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaThreadExchangeStreamCaptureMode == NULL) {
        orig_cudaThreadExchangeStreamCaptureMode = dlsym(RTLD_NEXT, "cudaThreadExchangeStreamCaptureMode");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamEndCapture == NULL) {
        orig_cudaStreamEndCapture = dlsym(RTLD_NEXT, "cudaStreamEndCapture");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamIsCapturing == NULL) {
        orig_cudaStreamIsCapturing = dlsym(RTLD_NEXT, "cudaStreamIsCapturing");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamGetCaptureInfo == NULL) {
        orig_cudaStreamGetCaptureInfo = dlsym(RTLD_NEXT, "cudaStreamGetCaptureInfo");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamGetCaptureInfo_v3 == NULL) {
        orig_cudaStreamGetCaptureInfo_v3 = dlsym(RTLD_NEXT, "cudaStreamGetCaptureInfo_v3");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamUpdateCaptureDependencies == NULL) {
        orig_cudaStreamUpdateCaptureDependencies = dlsym(RTLD_NEXT, "cudaStreamUpdateCaptureDependencies");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaStreamUpdateCaptureDependencies_v2 == NULL) {
        orig_cudaStreamUpdateCaptureDependencies_v2 = dlsym(RTLD_NEXT, "cudaStreamUpdateCaptureDependencies_v2");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaEventCreate == NULL) {
        orig_cudaEventCreate = dlsym(RTLD_NEXT, "cudaEventCreate");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaEventCreateWithFlags == NULL) {
        orig_cudaEventCreateWithFlags = dlsym(RTLD_NEXT, "cudaEventCreateWithFlags");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaEventRecord == NULL) {
        orig_cudaEventRecord = dlsym(RTLD_NEXT, "cudaEventRecord");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaEventQuery == NULL) {
        orig_cudaEventQuery = dlsym(RTLD_NEXT, "cudaEventQuery");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaEventSynchronize == NULL) {
        orig_cudaEventSynchronize = dlsym(RTLD_NEXT, "cudaEventSynchronize");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaEventDestroy == NULL) {
        orig_cudaEventDestroy = dlsym(RTLD_NEXT, "cudaEventDestroy");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaEventElapsedTime == NULL) {
        orig_cudaEventElapsedTime = dlsym(RTLD_NEXT, "cudaEventElapsedTime");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaImportExternalMemory == NULL) {
        orig_cudaImportExternalMemory = dlsym(RTLD_NEXT, "cudaImportExternalMemory");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaExternalMemoryGetMappedBuffer == NULL) {
        orig_cudaExternalMemoryGetMappedBuffer = dlsym(RTLD_NEXT, "cudaExternalMemoryGetMappedBuffer");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaExternalMemoryGetMappedMipmappedArray == NULL) {
        orig_cudaExternalMemoryGetMappedMipmappedArray = dlsym(RTLD_NEXT, "cudaExternalMemoryGetMappedMipmappedArray");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDestroyExternalMemory == NULL) {
        orig_cudaDestroyExternalMemory = dlsym(RTLD_NEXT, "cudaDestroyExternalMemory");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaImportExternalSemaphore == NULL) {
        orig_cudaImportExternalSemaphore = dlsym(RTLD_NEXT, "cudaImportExternalSemaphore");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaSignalExternalSemaphoresAsync == NULL) {
        orig_cudaSignalExternalSemaphoresAsync = dlsym(RTLD_NEXT, "cudaSignalExternalSemaphoresAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaWaitExternalSemaphoresAsync == NULL) {
        orig_cudaWaitExternalSemaphoresAsync = dlsym(RTLD_NEXT, "cudaWaitExternalSemaphoresAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDestroyExternalSemaphore == NULL) {
        orig_cudaDestroyExternalSemaphore = dlsym(RTLD_NEXT, "cudaDestroyExternalSemaphore");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaLaunchKernel == NULL) {
        orig_cudaLaunchKernel = dlsym(RTLD_NEXT, "cudaLaunchKernel");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaLaunchKernelExC == NULL) {
        orig_cudaLaunchKernelExC = dlsym(RTLD_NEXT, "cudaLaunchKernelExC");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaLaunchCooperativeKernel == NULL) {
        orig_cudaLaunchCooperativeKernel = dlsym(RTLD_NEXT, "cudaLaunchCooperativeKernel");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaFuncSetCacheConfig == NULL) {
        orig_cudaFuncSetCacheConfig = dlsym(RTLD_NEXT, "cudaFuncSetCacheConfig");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaFuncGetAttributes == NULL) {
        orig_cudaFuncGetAttributes = dlsym(RTLD_NEXT, "cudaFuncGetAttributes");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaFuncSetAttribute == NULL) {
        orig_cudaFuncSetAttribute = dlsym(RTLD_NEXT, "cudaFuncSetAttribute");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaFuncGetName == NULL) {
        orig_cudaFuncGetName = dlsym(RTLD_NEXT, "cudaFuncGetName");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaFuncGetParamInfo == NULL) {
        orig_cudaFuncGetParamInfo = dlsym(RTLD_NEXT, "cudaFuncGetParamInfo");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaLaunchHostFunc == NULL) {
        orig_cudaLaunchHostFunc = dlsym(RTLD_NEXT, "cudaLaunchHostFunc");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaOccupancyMaxActiveBlocksPerMultiprocessor == NULL) {
        orig_cudaOccupancyMaxActiveBlocksPerMultiprocessor = dlsym(RTLD_NEXT, "cudaOccupancyMaxActiveBlocksPerMultiprocessor");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaOccupancyAvailableDynamicSMemPerBlock == NULL) {
        orig_cudaOccupancyAvailableDynamicSMemPerBlock = dlsym(RTLD_NEXT, "cudaOccupancyAvailableDynamicSMemPerBlock");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags == NULL) {
        orig_cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags = dlsym(RTLD_NEXT, "cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaOccupancyMaxPotentialClusterSize == NULL) {
        orig_cudaOccupancyMaxPotentialClusterSize = dlsym(RTLD_NEXT, "cudaOccupancyMaxPotentialClusterSize");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaOccupancyMaxActiveClusters == NULL) {
        orig_cudaOccupancyMaxActiveClusters = dlsym(RTLD_NEXT, "cudaOccupancyMaxActiveClusters");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMallocManaged == NULL) {
        orig_cudaMallocManaged = dlsym(RTLD_NEXT, "cudaMallocManaged");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMallocManaged == NULL) {
        orig_cudaMallocManaged = dlsym(RTLD_NEXT, "cudaMallocManaged");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMalloc == NULL) {
        orig_cudaMalloc = dlsym(RTLD_NEXT, "cudaMalloc");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMallocHost == NULL) {
        orig_cudaMallocHost = dlsym(RTLD_NEXT, "cudaMallocHost");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMallocPitch == NULL) {
        orig_cudaMallocPitch = dlsym(RTLD_NEXT, "cudaMallocPitch");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMallocArray == NULL) {
        orig_cudaMallocArray = dlsym(RTLD_NEXT, "cudaMallocArray");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaFree == NULL) {
        orig_cudaFree = dlsym(RTLD_NEXT, "cudaFree");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaFreeHost == NULL) {
        orig_cudaFreeHost = dlsym(RTLD_NEXT, "cudaFreeHost");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaFreeArray == NULL) {
        orig_cudaFreeArray = dlsym(RTLD_NEXT, "cudaFreeArray");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaFreeMipmappedArray == NULL) {
        orig_cudaFreeMipmappedArray = dlsym(RTLD_NEXT, "cudaFreeMipmappedArray");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaHostAlloc == NULL) {
        orig_cudaHostAlloc = dlsym(RTLD_NEXT, "cudaHostAlloc");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaHostRegister == NULL) {
        orig_cudaHostRegister = dlsym(RTLD_NEXT, "cudaHostRegister");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaHostUnregister == NULL) {
        orig_cudaHostUnregister = dlsym(RTLD_NEXT, "cudaHostUnregister");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaHostGetDevicePointer == NULL) {
        orig_cudaHostGetDevicePointer = dlsym(RTLD_NEXT, "cudaHostGetDevicePointer");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaHostGetFlags == NULL) {
        orig_cudaHostGetFlags = dlsym(RTLD_NEXT, "cudaHostGetFlags");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMalloc3D == NULL) {
        orig_cudaMalloc3D = dlsym(RTLD_NEXT, "cudaMalloc3D");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMalloc3DArray == NULL) {
        orig_cudaMalloc3DArray = dlsym(RTLD_NEXT, "cudaMalloc3DArray");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMallocMipmappedArray == NULL) {
        orig_cudaMallocMipmappedArray = dlsym(RTLD_NEXT, "cudaMallocMipmappedArray");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetMipmappedArrayLevel == NULL) {
        orig_cudaGetMipmappedArrayLevel = dlsym(RTLD_NEXT, "cudaGetMipmappedArrayLevel");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpy3D == NULL) {
        orig_cudaMemcpy3D = dlsym(RTLD_NEXT, "cudaMemcpy3D");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpy3DPeer == NULL) {
        orig_cudaMemcpy3DPeer = dlsym(RTLD_NEXT, "cudaMemcpy3DPeer");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpy3DAsync == NULL) {
        orig_cudaMemcpy3DAsync = dlsym(RTLD_NEXT, "cudaMemcpy3DAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpy3DPeerAsync == NULL) {
        orig_cudaMemcpy3DPeerAsync = dlsym(RTLD_NEXT, "cudaMemcpy3DPeerAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemGetInfo == NULL) {
        orig_cudaMemGetInfo = dlsym(RTLD_NEXT, "cudaMemGetInfo");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaArrayGetInfo == NULL) {
        orig_cudaArrayGetInfo = dlsym(RTLD_NEXT, "cudaArrayGetInfo");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaArrayGetPlane == NULL) {
        orig_cudaArrayGetPlane = dlsym(RTLD_NEXT, "cudaArrayGetPlane");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaArrayGetMemoryRequirements == NULL) {
        orig_cudaArrayGetMemoryRequirements = dlsym(RTLD_NEXT, "cudaArrayGetMemoryRequirements");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMipmappedArrayGetMemoryRequirements == NULL) {
        orig_cudaMipmappedArrayGetMemoryRequirements = dlsym(RTLD_NEXT, "cudaMipmappedArrayGetMemoryRequirements");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpy == NULL) {
        orig_cudaMemcpy = dlsym(RTLD_NEXT, "cudaMemcpy");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpyPeer == NULL) {
        orig_cudaMemcpyPeer = dlsym(RTLD_NEXT, "cudaMemcpyPeer");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpy2D == NULL) {
        orig_cudaMemcpy2D = dlsym(RTLD_NEXT, "cudaMemcpy2D");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpy2DToArray == NULL) {
        orig_cudaMemcpy2DToArray = dlsym(RTLD_NEXT, "cudaMemcpy2DToArray");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpy2DFromArray == NULL) {
        orig_cudaMemcpy2DFromArray = dlsym(RTLD_NEXT, "cudaMemcpy2DFromArray");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpy2DArrayToArray == NULL) {
        orig_cudaMemcpy2DArrayToArray = dlsym(RTLD_NEXT, "cudaMemcpy2DArrayToArray");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpyToSymbol == NULL) {
        orig_cudaMemcpyToSymbol = dlsym(RTLD_NEXT, "cudaMemcpyToSymbol");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpyFromSymbol == NULL) {
        orig_cudaMemcpyFromSymbol = dlsym(RTLD_NEXT, "cudaMemcpyFromSymbol");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpyAsync == NULL) {
        orig_cudaMemcpyAsync = dlsym(RTLD_NEXT, "cudaMemcpyAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpyPeerAsync == NULL) {
        orig_cudaMemcpyPeerAsync = dlsym(RTLD_NEXT, "cudaMemcpyPeerAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpy2DAsync == NULL) {
        orig_cudaMemcpy2DAsync = dlsym(RTLD_NEXT, "cudaMemcpy2DAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpy2DToArrayAsync == NULL) {
        orig_cudaMemcpy2DToArrayAsync = dlsym(RTLD_NEXT, "cudaMemcpy2DToArrayAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpy2DFromArrayAsync == NULL) {
        orig_cudaMemcpy2DFromArrayAsync = dlsym(RTLD_NEXT, "cudaMemcpy2DFromArrayAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpyToSymbolAsync == NULL) {
        orig_cudaMemcpyToSymbolAsync = dlsym(RTLD_NEXT, "cudaMemcpyToSymbolAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemcpyFromSymbolAsync == NULL) {
        orig_cudaMemcpyFromSymbolAsync = dlsym(RTLD_NEXT, "cudaMemcpyFromSymbolAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemset == NULL) {
        orig_cudaMemset = dlsym(RTLD_NEXT, "cudaMemset");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemset2D == NULL) {
        orig_cudaMemset2D = dlsym(RTLD_NEXT, "cudaMemset2D");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemset3D == NULL) {
        orig_cudaMemset3D = dlsym(RTLD_NEXT, "cudaMemset3D");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemsetAsync == NULL) {
        orig_cudaMemsetAsync = dlsym(RTLD_NEXT, "cudaMemsetAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemset2DAsync == NULL) {
        orig_cudaMemset2DAsync = dlsym(RTLD_NEXT, "cudaMemset2DAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemset3DAsync == NULL) {
        orig_cudaMemset3DAsync = dlsym(RTLD_NEXT, "cudaMemset3DAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetSymbolAddress == NULL) {
        orig_cudaGetSymbolAddress = dlsym(RTLD_NEXT, "cudaGetSymbolAddress");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetSymbolSize == NULL) {
        orig_cudaGetSymbolSize = dlsym(RTLD_NEXT, "cudaGetSymbolSize");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemPrefetchAsync == NULL) {
        orig_cudaMemPrefetchAsync = dlsym(RTLD_NEXT, "cudaMemPrefetchAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemPrefetchAsync_v2 == NULL) {
        orig_cudaMemPrefetchAsync_v2 = dlsym(RTLD_NEXT, "cudaMemPrefetchAsync_v2");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemAdvise == NULL) {
        orig_cudaMemAdvise = dlsym(RTLD_NEXT, "cudaMemAdvise");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemAdvise_v2 == NULL) {
        orig_cudaMemAdvise_v2 = dlsym(RTLD_NEXT, "cudaMemAdvise_v2");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemRangeGetAttribute == NULL) {
        orig_cudaMemRangeGetAttribute = dlsym(RTLD_NEXT, "cudaMemRangeGetAttribute");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemRangeGetAttributes == NULL) {
        orig_cudaMemRangeGetAttributes = dlsym(RTLD_NEXT, "cudaMemRangeGetAttributes");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMallocAsync == NULL) {
        orig_cudaMallocAsync = dlsym(RTLD_NEXT, "cudaMallocAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaFreeAsync == NULL) {
        orig_cudaFreeAsync = dlsym(RTLD_NEXT, "cudaFreeAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemPoolTrimTo == NULL) {
        orig_cudaMemPoolTrimTo = dlsym(RTLD_NEXT, "cudaMemPoolTrimTo");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemPoolSetAttribute == NULL) {
        orig_cudaMemPoolSetAttribute = dlsym(RTLD_NEXT, "cudaMemPoolSetAttribute");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemPoolGetAttribute == NULL) {
        orig_cudaMemPoolGetAttribute = dlsym(RTLD_NEXT, "cudaMemPoolGetAttribute");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemPoolSetAccess == NULL) {
        orig_cudaMemPoolSetAccess = dlsym(RTLD_NEXT, "cudaMemPoolSetAccess");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemPoolGetAccess == NULL) {
        orig_cudaMemPoolGetAccess = dlsym(RTLD_NEXT, "cudaMemPoolGetAccess");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemPoolCreate == NULL) {
        orig_cudaMemPoolCreate = dlsym(RTLD_NEXT, "cudaMemPoolCreate");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemPoolDestroy == NULL) {
        orig_cudaMemPoolDestroy = dlsym(RTLD_NEXT, "cudaMemPoolDestroy");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMallocFromPoolAsync == NULL) {
        orig_cudaMallocFromPoolAsync = dlsym(RTLD_NEXT, "cudaMallocFromPoolAsync");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemPoolExportToShareableHandle == NULL) {
        orig_cudaMemPoolExportToShareableHandle = dlsym(RTLD_NEXT, "cudaMemPoolExportToShareableHandle");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemPoolImportFromShareableHandle == NULL) {
        orig_cudaMemPoolImportFromShareableHandle = dlsym(RTLD_NEXT, "cudaMemPoolImportFromShareableHandle");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemPoolExportPointer == NULL) {
        orig_cudaMemPoolExportPointer = dlsym(RTLD_NEXT, "cudaMemPoolExportPointer");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaMemPoolImportPointer == NULL) {
        orig_cudaMemPoolImportPointer = dlsym(RTLD_NEXT, "cudaMemPoolImportPointer");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaPointerGetAttributes == NULL) {
        orig_cudaPointerGetAttributes = dlsym(RTLD_NEXT, "cudaPointerGetAttributes");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceCanAccessPeer == NULL) {
        orig_cudaDeviceCanAccessPeer = dlsym(RTLD_NEXT, "cudaDeviceCanAccessPeer");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceEnablePeerAccess == NULL) {
        orig_cudaDeviceEnablePeerAccess = dlsym(RTLD_NEXT, "cudaDeviceEnablePeerAccess");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceDisablePeerAccess == NULL) {
        orig_cudaDeviceDisablePeerAccess = dlsym(RTLD_NEXT, "cudaDeviceDisablePeerAccess");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphicsUnregisterResource == NULL) {
        orig_cudaGraphicsUnregisterResource = dlsym(RTLD_NEXT, "cudaGraphicsUnregisterResource");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphicsResourceSetMapFlags == NULL) {
        orig_cudaGraphicsResourceSetMapFlags = dlsym(RTLD_NEXT, "cudaGraphicsResourceSetMapFlags");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphicsMapResources == NULL) {
        orig_cudaGraphicsMapResources = dlsym(RTLD_NEXT, "cudaGraphicsMapResources");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphicsUnmapResources == NULL) {
        orig_cudaGraphicsUnmapResources = dlsym(RTLD_NEXT, "cudaGraphicsUnmapResources");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphicsResourceGetMappedPointer == NULL) {
        orig_cudaGraphicsResourceGetMappedPointer = dlsym(RTLD_NEXT, "cudaGraphicsResourceGetMappedPointer");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphicsSubResourceGetMappedArray == NULL) {
        orig_cudaGraphicsSubResourceGetMappedArray = dlsym(RTLD_NEXT, "cudaGraphicsSubResourceGetMappedArray");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphicsResourceGetMappedMipmappedArray == NULL) {
        orig_cudaGraphicsResourceGetMappedMipmappedArray = dlsym(RTLD_NEXT, "cudaGraphicsResourceGetMappedMipmappedArray");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetChannelDesc == NULL) {
        orig_cudaGetChannelDesc = dlsym(RTLD_NEXT, "cudaGetChannelDesc");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaCreateChannelDesc == NULL) {
        orig_cudaCreateChannelDesc = dlsym(RTLD_NEXT, "cudaCreateChannelDesc");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaCreateTextureObject == NULL) {
        orig_cudaCreateTextureObject = dlsym(RTLD_NEXT, "cudaCreateTextureObject");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDestroyTextureObject == NULL) {
        orig_cudaDestroyTextureObject = dlsym(RTLD_NEXT, "cudaDestroyTextureObject");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetTextureObjectResourceDesc == NULL) {
        orig_cudaGetTextureObjectResourceDesc = dlsym(RTLD_NEXT, "cudaGetTextureObjectResourceDesc");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetTextureObjectTextureDesc == NULL) {
        orig_cudaGetTextureObjectTextureDesc = dlsym(RTLD_NEXT, "cudaGetTextureObjectTextureDesc");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetTextureObjectResourceViewDesc == NULL) {
        orig_cudaGetTextureObjectResourceViewDesc = dlsym(RTLD_NEXT, "cudaGetTextureObjectResourceViewDesc");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaCreateSurfaceObject == NULL) {
        orig_cudaCreateSurfaceObject = dlsym(RTLD_NEXT, "cudaCreateSurfaceObject");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDestroySurfaceObject == NULL) {
        orig_cudaDestroySurfaceObject = dlsym(RTLD_NEXT, "cudaDestroySurfaceObject");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetSurfaceObjectResourceDesc == NULL) {
        orig_cudaGetSurfaceObjectResourceDesc = dlsym(RTLD_NEXT, "cudaGetSurfaceObjectResourceDesc");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDriverGetVersion == NULL) {
        orig_cudaDriverGetVersion = dlsym(RTLD_NEXT, "cudaDriverGetVersion");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaRuntimeGetVersion == NULL) {
        orig_cudaRuntimeGetVersion = dlsym(RTLD_NEXT, "cudaRuntimeGetVersion");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphCreate == NULL) {
        orig_cudaGraphCreate = dlsym(RTLD_NEXT, "cudaGraphCreate");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphAddKernelNode == NULL) {
        orig_cudaGraphAddKernelNode = dlsym(RTLD_NEXT, "cudaGraphAddKernelNode");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphKernelNodeGetParams == NULL) {
        orig_cudaGraphKernelNodeGetParams = dlsym(RTLD_NEXT, "cudaGraphKernelNodeGetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphKernelNodeSetParams == NULL) {
        orig_cudaGraphKernelNodeSetParams = dlsym(RTLD_NEXT, "cudaGraphKernelNodeSetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphKernelNodeCopyAttributes == NULL) {
        orig_cudaGraphKernelNodeCopyAttributes = dlsym(RTLD_NEXT, "cudaGraphKernelNodeCopyAttributes");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphKernelNodeGetAttribute == NULL) {
        orig_cudaGraphKernelNodeGetAttribute = dlsym(RTLD_NEXT, "cudaGraphKernelNodeGetAttribute");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphKernelNodeSetAttribute == NULL) {
        orig_cudaGraphKernelNodeSetAttribute = dlsym(RTLD_NEXT, "cudaGraphKernelNodeSetAttribute");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphAddMemcpyNode == NULL) {
        orig_cudaGraphAddMemcpyNode = dlsym(RTLD_NEXT, "cudaGraphAddMemcpyNode");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphMemcpyNodeGetParams == NULL) {
        orig_cudaGraphMemcpyNodeGetParams = dlsym(RTLD_NEXT, "cudaGraphMemcpyNodeGetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphMemcpyNodeSetParams == NULL) {
        orig_cudaGraphMemcpyNodeSetParams = dlsym(RTLD_NEXT, "cudaGraphMemcpyNodeSetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphAddMemsetNode == NULL) {
        orig_cudaGraphAddMemsetNode = dlsym(RTLD_NEXT, "cudaGraphAddMemsetNode");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphMemsetNodeGetParams == NULL) {
        orig_cudaGraphMemsetNodeGetParams = dlsym(RTLD_NEXT, "cudaGraphMemsetNodeGetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphMemsetNodeSetParams == NULL) {
        orig_cudaGraphMemsetNodeSetParams = dlsym(RTLD_NEXT, "cudaGraphMemsetNodeSetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphAddHostNode == NULL) {
        orig_cudaGraphAddHostNode = dlsym(RTLD_NEXT, "cudaGraphAddHostNode");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphHostNodeGetParams == NULL) {
        orig_cudaGraphHostNodeGetParams = dlsym(RTLD_NEXT, "cudaGraphHostNodeGetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphHostNodeSetParams == NULL) {
        orig_cudaGraphHostNodeSetParams = dlsym(RTLD_NEXT, "cudaGraphHostNodeSetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphAddChildGraphNode == NULL) {
        orig_cudaGraphAddChildGraphNode = dlsym(RTLD_NEXT, "cudaGraphAddChildGraphNode");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphChildGraphNodeGetGraph == NULL) {
        orig_cudaGraphChildGraphNodeGetGraph = dlsym(RTLD_NEXT, "cudaGraphChildGraphNodeGetGraph");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphAddEmptyNode == NULL) {
        orig_cudaGraphAddEmptyNode = dlsym(RTLD_NEXT, "cudaGraphAddEmptyNode");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphAddExternalSemaphoresSignalNode == NULL) {
        orig_cudaGraphAddExternalSemaphoresSignalNode = dlsym(RTLD_NEXT, "cudaGraphAddExternalSemaphoresSignalNode");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphExternalSemaphoresSignalNodeGetParams == NULL) {
        orig_cudaGraphExternalSemaphoresSignalNodeGetParams = dlsym(RTLD_NEXT, "cudaGraphExternalSemaphoresSignalNodeGetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphExternalSemaphoresSignalNodeSetParams == NULL) {
        orig_cudaGraphExternalSemaphoresSignalNodeSetParams = dlsym(RTLD_NEXT, "cudaGraphExternalSemaphoresSignalNodeSetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphAddExternalSemaphoresWaitNode == NULL) {
        orig_cudaGraphAddExternalSemaphoresWaitNode = dlsym(RTLD_NEXT, "cudaGraphAddExternalSemaphoresWaitNode");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphExternalSemaphoresWaitNodeGetParams == NULL) {
        orig_cudaGraphExternalSemaphoresWaitNodeGetParams = dlsym(RTLD_NEXT, "cudaGraphExternalSemaphoresWaitNodeGetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphExternalSemaphoresWaitNodeSetParams == NULL) {
        orig_cudaGraphExternalSemaphoresWaitNodeSetParams = dlsym(RTLD_NEXT, "cudaGraphExternalSemaphoresWaitNodeSetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphAddMemAllocNode == NULL) {
        orig_cudaGraphAddMemAllocNode = dlsym(RTLD_NEXT, "cudaGraphAddMemAllocNode");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphMemAllocNodeGetParams == NULL) {
        orig_cudaGraphMemAllocNodeGetParams = dlsym(RTLD_NEXT, "cudaGraphMemAllocNodeGetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphAddMemFreeNode == NULL) {
        orig_cudaGraphAddMemFreeNode = dlsym(RTLD_NEXT, "cudaGraphAddMemFreeNode");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphMemFreeNodeGetParams == NULL) {
        orig_cudaGraphMemFreeNodeGetParams = dlsym(RTLD_NEXT, "cudaGraphMemFreeNodeGetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceGraphMemTrim == NULL) {
        orig_cudaDeviceGraphMemTrim = dlsym(RTLD_NEXT, "cudaDeviceGraphMemTrim");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceGetGraphMemAttribute == NULL) {
        orig_cudaDeviceGetGraphMemAttribute = dlsym(RTLD_NEXT, "cudaDeviceGetGraphMemAttribute");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaDeviceSetGraphMemAttribute == NULL) {
        orig_cudaDeviceSetGraphMemAttribute = dlsym(RTLD_NEXT, "cudaDeviceSetGraphMemAttribute");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphClone == NULL) {
        orig_cudaGraphClone = dlsym(RTLD_NEXT, "cudaGraphClone");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphNodeFindInClone == NULL) {
        orig_cudaGraphNodeFindInClone = dlsym(RTLD_NEXT, "cudaGraphNodeFindInClone");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphNodeGetType == NULL) {
        orig_cudaGraphNodeGetType = dlsym(RTLD_NEXT, "cudaGraphNodeGetType");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphGetNodes == NULL) {
        orig_cudaGraphGetNodes = dlsym(RTLD_NEXT, "cudaGraphGetNodes");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphGetRootNodes == NULL) {
        orig_cudaGraphGetRootNodes = dlsym(RTLD_NEXT, "cudaGraphGetRootNodes");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphGetEdges == NULL) {
        orig_cudaGraphGetEdges = dlsym(RTLD_NEXT, "cudaGraphGetEdges");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphGetEdges_v2 == NULL) {
        orig_cudaGraphGetEdges_v2 = dlsym(RTLD_NEXT, "cudaGraphGetEdges_v2");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphNodeGetDependencies == NULL) {
        orig_cudaGraphNodeGetDependencies = dlsym(RTLD_NEXT, "cudaGraphNodeGetDependencies");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphNodeGetDependencies_v2 == NULL) {
        orig_cudaGraphNodeGetDependencies_v2 = dlsym(RTLD_NEXT, "cudaGraphNodeGetDependencies_v2");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphNodeGetDependentNodes == NULL) {
        orig_cudaGraphNodeGetDependentNodes = dlsym(RTLD_NEXT, "cudaGraphNodeGetDependentNodes");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphNodeGetDependentNodes_v2 == NULL) {
        orig_cudaGraphNodeGetDependentNodes_v2 = dlsym(RTLD_NEXT, "cudaGraphNodeGetDependentNodes_v2");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphAddDependencies == NULL) {
        orig_cudaGraphAddDependencies = dlsym(RTLD_NEXT, "cudaGraphAddDependencies");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphAddDependencies_v2 == NULL) {
        orig_cudaGraphAddDependencies_v2 = dlsym(RTLD_NEXT, "cudaGraphAddDependencies_v2");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphRemoveDependencies == NULL) {
        orig_cudaGraphRemoveDependencies = dlsym(RTLD_NEXT, "cudaGraphRemoveDependencies");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphRemoveDependencies_v2 == NULL) {
        orig_cudaGraphRemoveDependencies_v2 = dlsym(RTLD_NEXT, "cudaGraphRemoveDependencies_v2");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphDestroyNode == NULL) {
        orig_cudaGraphDestroyNode = dlsym(RTLD_NEXT, "cudaGraphDestroyNode");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphInstantiate == NULL) {
        orig_cudaGraphInstantiate = dlsym(RTLD_NEXT, "cudaGraphInstantiate");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphInstantiateWithFlags == NULL) {
        orig_cudaGraphInstantiateWithFlags = dlsym(RTLD_NEXT, "cudaGraphInstantiateWithFlags");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphInstantiateWithParams == NULL) {
        orig_cudaGraphInstantiateWithParams = dlsym(RTLD_NEXT, "cudaGraphInstantiateWithParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphExecGetFlags == NULL) {
        orig_cudaGraphExecGetFlags = dlsym(RTLD_NEXT, "cudaGraphExecGetFlags");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphExecKernelNodeSetParams == NULL) {
        orig_cudaGraphExecKernelNodeSetParams = dlsym(RTLD_NEXT, "cudaGraphExecKernelNodeSetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphExecMemcpyNodeSetParams == NULL) {
        orig_cudaGraphExecMemcpyNodeSetParams = dlsym(RTLD_NEXT, "cudaGraphExecMemcpyNodeSetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphExecMemsetNodeSetParams == NULL) {
        orig_cudaGraphExecMemsetNodeSetParams = dlsym(RTLD_NEXT, "cudaGraphExecMemsetNodeSetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphExecHostNodeSetParams == NULL) {
        orig_cudaGraphExecHostNodeSetParams = dlsym(RTLD_NEXT, "cudaGraphExecHostNodeSetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphExecExternalSemaphoresSignalNodeSetParams == NULL) {
        orig_cudaGraphExecExternalSemaphoresSignalNodeSetParams = dlsym(RTLD_NEXT, "cudaGraphExecExternalSemaphoresSignalNodeSetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphExecExternalSemaphoresWaitNodeSetParams == NULL) {
        orig_cudaGraphExecExternalSemaphoresWaitNodeSetParams = dlsym(RTLD_NEXT, "cudaGraphExecExternalSemaphoresWaitNodeSetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphNodeSetEnabled == NULL) {
        orig_cudaGraphNodeSetEnabled = dlsym(RTLD_NEXT, "cudaGraphNodeSetEnabled");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphNodeGetEnabled == NULL) {
        orig_cudaGraphNodeGetEnabled = dlsym(RTLD_NEXT, "cudaGraphNodeGetEnabled");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphExecUpdate == NULL) {
        orig_cudaGraphExecUpdate = dlsym(RTLD_NEXT, "cudaGraphExecUpdate");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphLaunch == NULL) {
        orig_cudaGraphLaunch = dlsym(RTLD_NEXT, "cudaGraphLaunch");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphExecDestroy == NULL) {
        orig_cudaGraphExecDestroy = dlsym(RTLD_NEXT, "cudaGraphExecDestroy");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphDestroy == NULL) {
        orig_cudaGraphDestroy = dlsym(RTLD_NEXT, "cudaGraphDestroy");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphDebugDotPrint == NULL) {
        orig_cudaGraphDebugDotPrint = dlsym(RTLD_NEXT, "cudaGraphDebugDotPrint");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaUserObjectCreate == NULL) {
        orig_cudaUserObjectCreate = dlsym(RTLD_NEXT, "cudaUserObjectCreate");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaUserObjectRetain == NULL) {
        orig_cudaUserObjectRetain = dlsym(RTLD_NEXT, "cudaUserObjectRetain");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaUserObjectRelease == NULL) {
        orig_cudaUserObjectRelease = dlsym(RTLD_NEXT, "cudaUserObjectRelease");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphRetainUserObject == NULL) {
        orig_cudaGraphRetainUserObject = dlsym(RTLD_NEXT, "cudaGraphRetainUserObject");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphReleaseUserObject == NULL) {
        orig_cudaGraphReleaseUserObject = dlsym(RTLD_NEXT, "cudaGraphReleaseUserObject");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphAddNode == NULL) {
        orig_cudaGraphAddNode = dlsym(RTLD_NEXT, "cudaGraphAddNode");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphAddNode_v2 == NULL) {
        orig_cudaGraphAddNode_v2 = dlsym(RTLD_NEXT, "cudaGraphAddNode_v2");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphNodeSetParams == NULL) {
        orig_cudaGraphNodeSetParams = dlsym(RTLD_NEXT, "cudaGraphNodeSetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphExecNodeSetParams == NULL) {
        orig_cudaGraphExecNodeSetParams = dlsym(RTLD_NEXT, "cudaGraphExecNodeSetParams");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGraphConditionalHandleCreate == NULL) {
        orig_cudaGraphConditionalHandleCreate = dlsym(RTLD_NEXT, "cudaGraphConditionalHandleCreate");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetDriverEntryPoint == NULL) {
        orig_cudaGetDriverEntryPoint = dlsym(RTLD_NEXT, "cudaGetDriverEntryPoint");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetDriverEntryPoint == NULL) {
        orig_cudaGetDriverEntryPoint = dlsym(RTLD_NEXT, "cudaGetDriverEntryPoint");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetExportTable == NULL) {
        orig_cudaGetExportTable = dlsym(RTLD_NEXT, "cudaGetExportTable");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetFuncBySymbol == NULL) {
        orig_cudaGetFuncBySymbol = dlsym(RTLD_NEXT, "cudaGetFuncBySymbol");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }


    // clear dl error
    dlerror();
    if (orig_cudaGetKernel == NULL) {
        orig_cudaGetKernel = dlsym(RTLD_NEXT, "cudaGetKernel");
    }
    if ((dl_error = dlerror()) != NULL)
    {
        fprintf(stderr, ">>>>>>> %s\n", dl_error);
    }

}