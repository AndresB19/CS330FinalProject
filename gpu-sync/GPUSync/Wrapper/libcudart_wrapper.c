
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
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceReset called \n");
 	ret = orig_cudaDeviceReset();
 	fprintf(fp, ">>>>>>>> cudaDeviceReset returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaDeviceSynchronize)(void) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaDeviceSynchronize(void) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceSynchronize.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceSynchronize called \n");
 	ret = orig_cudaDeviceSynchronize();
 	fprintf(fp, ">>>>>>>> cudaDeviceSynchronize returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceSetLimit)(enum cudaLimit limit, size_t value) = NULL;

__host__ cudaError_t  cudaDeviceSetLimit(enum cudaLimit limit, size_t value) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceSetLimit.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceSetLimit called \n");
 	ret = orig_cudaDeviceSetLimit(limit, value);
 	fprintf(fp, ">>>>>>>> cudaDeviceSetLimit returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaDeviceGetLimit)(size_t *pValue, enum cudaLimit limit) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaDeviceGetLimit(size_t *pValue, enum cudaLimit limit) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceGetLimit.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceGetLimit called \n");
 	ret = orig_cudaDeviceGetLimit(pValue, limit);
 	fprintf(fp, ">>>>>>>> cudaDeviceGetLimit returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaDeviceGetCacheConfig)(enum cudaFuncCache *pCacheConfig) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaDeviceGetCacheConfig(enum cudaFuncCache *pCacheConfig) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceGetCacheConfig.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceGetCacheConfig called \n");
 	ret = orig_cudaDeviceGetCacheConfig(pCacheConfig);
 	fprintf(fp, ">>>>>>>> cudaDeviceGetCacheConfig returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaDeviceGetStreamPriorityRange)(int *leastPriority, int *greatestPriority) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaDeviceGetStreamPriorityRange(int *leastPriority, int *greatestPriority) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceGetStreamPriorityRange.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceGetStreamPriorityRange called \n");
 	ret = orig_cudaDeviceGetStreamPriorityRange(leastPriority, greatestPriority);
 	fprintf(fp, ">>>>>>>> cudaDeviceGetStreamPriorityRange returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceSetCacheConfig)(enum cudaFuncCache cacheConfig) = NULL;

__host__ cudaError_t  cudaDeviceSetCacheConfig(enum cudaFuncCache cacheConfig) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceSetCacheConfig.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceSetCacheConfig called \n");
 	ret = orig_cudaDeviceSetCacheConfig(cacheConfig);
 	fprintf(fp, ">>>>>>>> cudaDeviceSetCacheConfig returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceGetByPCIBusId)(int *device, const char *pciBusId) = NULL;

__host__ cudaError_t  cudaDeviceGetByPCIBusId(int *device, const char *pciBusId) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceGetByPCIBusId.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceGetByPCIBusId called \n");
 	ret = orig_cudaDeviceGetByPCIBusId(device, pciBusId);
 	fprintf(fp, ">>>>>>>> cudaDeviceGetByPCIBusId returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceGetPCIBusId)(char *pciBusId, int len, int device) = NULL;

__host__ cudaError_t  cudaDeviceGetPCIBusId(char *pciBusId, int len, int device) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceGetPCIBusId.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceGetPCIBusId called \n");
 	ret = orig_cudaDeviceGetPCIBusId(pciBusId, len, device);
 	fprintf(fp, ">>>>>>>> cudaDeviceGetPCIBusId returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaIpcGetEventHandle)(cudaIpcEventHandle_t *handle, cudaEvent_t event) = NULL;

__host__ cudaError_t  cudaIpcGetEventHandle(cudaIpcEventHandle_t *handle, cudaEvent_t event) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaIpcGetEventHandle.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaIpcGetEventHandle called \n");
 	ret = orig_cudaIpcGetEventHandle(handle, event);
 	fprintf(fp, ">>>>>>>> cudaIpcGetEventHandle returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaIpcOpenEventHandle)(cudaEvent_t *event, cudaIpcEventHandle_t handle) = NULL;

__host__ cudaError_t  cudaIpcOpenEventHandle(cudaEvent_t *event, cudaIpcEventHandle_t handle) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaIpcOpenEventHandle.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaIpcOpenEventHandle called \n");
 	ret = orig_cudaIpcOpenEventHandle(event, handle);
 	fprintf(fp, ">>>>>>>> cudaIpcOpenEventHandle returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaIpcGetMemHandle)(cudaIpcMemHandle_t *handle, void *devPtr) = NULL;

__host__ cudaError_t  cudaIpcGetMemHandle(cudaIpcMemHandle_t *handle, void *devPtr) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaIpcGetMemHandle.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaIpcGetMemHandle called \n");
 	ret = orig_cudaIpcGetMemHandle(handle, devPtr);
 	fprintf(fp, ">>>>>>>> cudaIpcGetMemHandle returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaIpcOpenMemHandle)(void **devPtr, cudaIpcMemHandle_t handle, unsigned int flags) = NULL;

__host__ cudaError_t  cudaIpcOpenMemHandle(void **devPtr, cudaIpcMemHandle_t handle, unsigned int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaIpcOpenMemHandle.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaIpcOpenMemHandle called \n");
 	ret = orig_cudaIpcOpenMemHandle(devPtr, handle, flags);
 	fprintf(fp, ">>>>>>>> cudaIpcOpenMemHandle returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaIpcCloseMemHandle)(void *devPtr) = NULL;

__host__ cudaError_t  cudaIpcCloseMemHandle(void *devPtr) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaIpcCloseMemHandle.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaIpcCloseMemHandle called \n");
 	ret = orig_cudaIpcCloseMemHandle(devPtr);
 	fprintf(fp, ">>>>>>>> cudaIpcCloseMemHandle returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceFlushGPUDirectRDMAWrites)(enum cudaFlushGPUDirectRDMAWritesTarget target, enum cudaFlushGPUDirectRDMAWritesScope scope) = NULL;

__host__ cudaError_t  cudaDeviceFlushGPUDirectRDMAWrites(enum cudaFlushGPUDirectRDMAWritesTarget target, enum cudaFlushGPUDirectRDMAWritesScope scope) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceFlushGPUDirectRDMAWrites.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceFlushGPUDirectRDMAWrites called \n");
 	ret = orig_cudaDeviceFlushGPUDirectRDMAWrites(target, scope);
 	fprintf(fp, ">>>>>>>> cudaDeviceFlushGPUDirectRDMAWrites returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceRegisterAsyncNotification)(int device, cudaAsyncCallback callbackFunc, void* userData, cudaAsyncCallbackHandle_t* callback) = NULL;

__host__ cudaError_t  cudaDeviceRegisterAsyncNotification(int device, cudaAsyncCallback callbackFunc, void* userData, cudaAsyncCallbackHandle_t* callback) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceRegisterAsyncNotification.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceRegisterAsyncNotification called \n");
 	ret = orig_cudaDeviceRegisterAsyncNotification(device, callbackFunc, userData, callback);
 	fprintf(fp, ">>>>>>>> cudaDeviceRegisterAsyncNotification returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceUnregisterAsyncNotification)(int device, cudaAsyncCallbackHandle_t callback) = NULL;

__host__ cudaError_t  cudaDeviceUnregisterAsyncNotification(int device, cudaAsyncCallbackHandle_t callback) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceUnregisterAsyncNotification.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceUnregisterAsyncNotification called \n");
 	ret = orig_cudaDeviceUnregisterAsyncNotification(device, callback);
 	fprintf(fp, ">>>>>>>> cudaDeviceUnregisterAsyncNotification returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaGetLastError)(void) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaGetLastError(void) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetLastError.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetLastError called \n");
 	ret = orig_cudaGetLastError();
 	fprintf(fp, ">>>>>>>> cudaGetLastError returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaPeekAtLastError)(void) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaPeekAtLastError(void) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaPeekAtLastError.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaPeekAtLastError called \n");
 	ret = orig_cudaPeekAtLastError();
 	fprintf(fp, ">>>>>>>> cudaPeekAtLastError returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ const char*  (*orig_cudaGetErrorName)(cudaError_t error) = NULL;

__host__ __cudart_builtin__ const char*  cudaGetErrorName(cudaError_t error) {
    	const char* ret;
 	// Write your own custom c code in the cudaGetErrorName.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetErrorName called \n");
 	ret = orig_cudaGetErrorName(error);
 	fprintf(fp, ">>>>>>>> cudaGetErrorName returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ const char*  (*orig_cudaGetErrorString)(cudaError_t error) = NULL;

__host__ __cudart_builtin__ const char*  cudaGetErrorString(cudaError_t error) {
    	const char* ret;
 	// Write your own custom c code in the cudaGetErrorString.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetErrorString called \n");
 	ret = orig_cudaGetErrorString(error);
 	fprintf(fp, ">>>>>>>> cudaGetErrorString returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaGetDeviceCount)(int *count) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaGetDeviceCount(int *count) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetDeviceCount.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetDeviceCount called \n");
 	ret = orig_cudaGetDeviceCount(count);
 	fprintf(fp, ">>>>>>>> cudaGetDeviceCount returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaGetDeviceProperties)(struct cudaDeviceProp *prop, int device) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaGetDeviceProperties(struct cudaDeviceProp *prop, int device) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetDeviceProperties.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetDeviceProperties called \n");
 	ret = orig_cudaGetDeviceProperties(prop, device);
 	fprintf(fp, ">>>>>>>> cudaGetDeviceProperties returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaDeviceGetAttribute)(int *value, enum cudaDeviceAttr attr, int device) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaDeviceGetAttribute(int *value, enum cudaDeviceAttr attr, int device) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceGetAttribute.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceGetAttribute called \n");
 	ret = orig_cudaDeviceGetAttribute(value, attr, device);
 	fprintf(fp, ">>>>>>>> cudaDeviceGetAttribute returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceGetDefaultMemPool)(cudaMemPool_t *memPool, int device) = NULL;

__host__ cudaError_t  cudaDeviceGetDefaultMemPool(cudaMemPool_t *memPool, int device) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceGetDefaultMemPool.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceGetDefaultMemPool called \n");
 	ret = orig_cudaDeviceGetDefaultMemPool(memPool, device);
 	fprintf(fp, ">>>>>>>> cudaDeviceGetDefaultMemPool returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceSetMemPool)(int device, cudaMemPool_t memPool) = NULL;

__host__ cudaError_t  cudaDeviceSetMemPool(int device, cudaMemPool_t memPool) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceSetMemPool.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceSetMemPool called \n");
 	ret = orig_cudaDeviceSetMemPool(device, memPool);
 	fprintf(fp, ">>>>>>>> cudaDeviceSetMemPool returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceGetMemPool)(cudaMemPool_t *memPool, int device) = NULL;

__host__ cudaError_t  cudaDeviceGetMemPool(cudaMemPool_t *memPool, int device) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceGetMemPool.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceGetMemPool called \n");
 	ret = orig_cudaDeviceGetMemPool(memPool, device);
 	fprintf(fp, ">>>>>>>> cudaDeviceGetMemPool returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceGetNvSciSyncAttributes)(void *nvSciSyncAttrList, int device, int flags) = NULL;

__host__ cudaError_t  cudaDeviceGetNvSciSyncAttributes(void *nvSciSyncAttrList, int device, int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceGetNvSciSyncAttributes.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceGetNvSciSyncAttributes called \n");
 	ret = orig_cudaDeviceGetNvSciSyncAttributes(nvSciSyncAttrList, device, flags);
 	fprintf(fp, ">>>>>>>> cudaDeviceGetNvSciSyncAttributes returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaDeviceGetP2PAttribute)(int *value, enum cudaDeviceP2PAttr attr, int srcDevice, int dstDevice) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaDeviceGetP2PAttribute(int *value, enum cudaDeviceP2PAttr attr, int srcDevice, int dstDevice) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceGetP2PAttribute.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceGetP2PAttribute called \n");
 	ret = orig_cudaDeviceGetP2PAttribute(value, attr, srcDevice, dstDevice);
 	fprintf(fp, ">>>>>>>> cudaDeviceGetP2PAttribute returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaChooseDevice)(int *device, const struct cudaDeviceProp *prop) = NULL;

__host__ cudaError_t  cudaChooseDevice(int *device, const struct cudaDeviceProp *prop) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaChooseDevice.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaChooseDevice called \n");
 	ret = orig_cudaChooseDevice(device, prop);
 	fprintf(fp, ">>>>>>>> cudaChooseDevice returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaInitDevice)(int device, unsigned int deviceFlags, unsigned int flags) = NULL;

__host__ cudaError_t  cudaInitDevice(int device, unsigned int deviceFlags, unsigned int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaInitDevice.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaInitDevice called \n");
 	ret = orig_cudaInitDevice(device, deviceFlags, flags);
 	fprintf(fp, ">>>>>>>> cudaInitDevice returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaSetDevice)(int device) = NULL;

__host__ cudaError_t  cudaSetDevice(int device) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaSetDevice.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaSetDevice called \n");
 	ret = orig_cudaSetDevice(device);
 	fprintf(fp, ">>>>>>>> cudaSetDevice returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaGetDevice)(int *device) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaGetDevice(int *device) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetDevice.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetDevice called \n");
 	ret = orig_cudaGetDevice(device);
 	fprintf(fp, ">>>>>>>> cudaGetDevice returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaSetValidDevices)(int *device_arr, int len) = NULL;

__host__ cudaError_t  cudaSetValidDevices(int *device_arr, int len) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaSetValidDevices.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaSetValidDevices called \n");
 	ret = orig_cudaSetValidDevices(device_arr, len);
 	fprintf(fp, ">>>>>>>> cudaSetValidDevices returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaSetDeviceFlags)( unsigned int flags ) = NULL;

__host__ cudaError_t  cudaSetDeviceFlags( unsigned int flags ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaSetDeviceFlags.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaSetDeviceFlags called \n");
 	ret = orig_cudaSetDeviceFlags(flags);
 	fprintf(fp, ">>>>>>>> cudaSetDeviceFlags returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetDeviceFlags)( unsigned int *flags ) = NULL;

__host__ cudaError_t  cudaGetDeviceFlags( unsigned int *flags ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetDeviceFlags.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetDeviceFlags called \n");
 	ret = orig_cudaGetDeviceFlags(flags);
 	fprintf(fp, ">>>>>>>> cudaGetDeviceFlags returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamCreate)(cudaStream_t *pStream) = NULL;

__host__ cudaError_t  cudaStreamCreate(cudaStream_t *pStream) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamCreate.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamCreate called \n");
 	ret = orig_cudaStreamCreate(pStream);
 	fprintf(fp, ">>>>>>>> cudaStreamCreate returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamCreateWithFlags)(cudaStream_t *pStream, unsigned int flags) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamCreateWithFlags(cudaStream_t *pStream, unsigned int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamCreateWithFlags.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamCreateWithFlags called \n");
 	ret = orig_cudaStreamCreateWithFlags(pStream, flags);
 	fprintf(fp, ">>>>>>>> cudaStreamCreateWithFlags returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamCreateWithPriority)(cudaStream_t *pStream, unsigned int flags, int priority) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamCreateWithPriority(cudaStream_t *pStream, unsigned int flags, int priority) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamCreateWithPriority.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamCreateWithPriority called \n");
 	ret = orig_cudaStreamCreateWithPriority(pStream, flags, priority);
 	fprintf(fp, ">>>>>>>> cudaStreamCreateWithPriority returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamGetPriority)(cudaStream_t hStream, int *priority) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamGetPriority(cudaStream_t hStream, int *priority) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamGetPriority.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamGetPriority called \n");
 	ret = orig_cudaStreamGetPriority(hStream, priority);
 	fprintf(fp, ">>>>>>>> cudaStreamGetPriority returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamGetFlags)(cudaStream_t hStream, unsigned int *flags) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamGetFlags(cudaStream_t hStream, unsigned int *flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamGetFlags.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamGetFlags called \n");
 	ret = orig_cudaStreamGetFlags(hStream, flags);
 	fprintf(fp, ">>>>>>>> cudaStreamGetFlags returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamGetId)(cudaStream_t hStream, unsigned long long *streamId) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamGetId(cudaStream_t hStream, unsigned long long *streamId) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamGetId.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamGetId called \n");
 	ret = orig_cudaStreamGetId(hStream, streamId);
 	fprintf(fp, ">>>>>>>> cudaStreamGetId returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaCtxResetPersistingL2Cache)(void) = NULL;

__host__ cudaError_t  cudaCtxResetPersistingL2Cache(void) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaCtxResetPersistingL2Cache.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaCtxResetPersistingL2Cache called \n");
 	ret = orig_cudaCtxResetPersistingL2Cache();
 	fprintf(fp, ">>>>>>>> cudaCtxResetPersistingL2Cache returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamCopyAttributes)(cudaStream_t dst, cudaStream_t src) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamCopyAttributes(cudaStream_t dst, cudaStream_t src) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamCopyAttributes.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamCopyAttributes called \n");
 	ret = orig_cudaStreamCopyAttributes(dst, src);
 	fprintf(fp, ">>>>>>>> cudaStreamCopyAttributes returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamGetAttribute)(        cudaStream_t hStream, cudaStreamAttrID attr,        cudaStreamAttrValue *value_out) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamGetAttribute(        cudaStream_t hStream, cudaStreamAttrID attr,        cudaStreamAttrValue *value_out) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamGetAttribute.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamGetAttribute called \n");
 	ret = orig_cudaStreamGetAttribute(hStream, attr, value_out);
 	fprintf(fp, ">>>>>>>> cudaStreamGetAttribute returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamSetAttribute)(        cudaStream_t hStream, cudaStreamAttrID attr,        const cudaStreamAttrValue *value) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamSetAttribute(        cudaStream_t hStream, cudaStreamAttrID attr,        const cudaStreamAttrValue *value) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamSetAttribute.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamSetAttribute called \n");
 	ret = orig_cudaStreamSetAttribute(hStream, attr, value);
 	fprintf(fp, ">>>>>>>> cudaStreamSetAttribute returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamDestroy)(cudaStream_t stream) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamDestroy(cudaStream_t stream) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamDestroy.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamDestroy called \n");
 	ret = orig_cudaStreamDestroy(stream);
 	fprintf(fp, ">>>>>>>> cudaStreamDestroy returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamWaitEvent)(cudaStream_t stream, cudaEvent_t event, unsigned int flags ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned int flags ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamWaitEvent.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamWaitEvent called \n");
 	ret = orig_cudaStreamWaitEvent(stream, event, flags);
 	fprintf(fp, ">>>>>>>> cudaStreamWaitEvent returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamAddCallback)(cudaStream_t stream,        cudaStreamCallback_t callback, void *userData, unsigned int flags) = NULL;

__host__ cudaError_t  cudaStreamAddCallback(cudaStream_t stream,        cudaStreamCallback_t callback, void *userData, unsigned int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamAddCallback.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamAddCallback called \n");
 	ret = orig_cudaStreamAddCallback(stream, callback, userData, flags);
 	fprintf(fp, ">>>>>>>> cudaStreamAddCallback returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamSynchronize)(cudaStream_t stream) = NULL;

__host__ cudaError_t  cudaStreamSynchronize(cudaStream_t stream) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamSynchronize.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamSynchronize called \n");
 	ret = orig_cudaStreamSynchronize(stream);
 	fprintf(fp, ">>>>>>>> cudaStreamSynchronize returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamQuery)(cudaStream_t stream) = NULL;

__host__ cudaError_t  cudaStreamQuery(cudaStream_t stream) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamQuery.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamQuery called \n");
 	ret = orig_cudaStreamQuery(stream);
 	fprintf(fp, ">>>>>>>> cudaStreamQuery returned\n");
 	return ret;

}

// static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamAttachMemAsync)(cudaStream_t stream, void *devPtr, size_t length , unsigned int flags = cudaMemAttachSingle) = NULL;

// __host__ __cudart_builtin__ cudaError_t  cudaStreamAttachMemAsync(cudaStream_t stream, void *devPtr, size_t length , unsigned int flags = cudaMemAttachSingle) {
//     	cudaError_t ret;
//  	// Write your own custom c code in the cudaStreamAttachMemAsync.c file
//  	FILE *fp = fopen("Kernel_Log.txt", "a");
//  	fprintf(fp, ">>>>>>>> cudaStreamAttachMemAsync called \n");
//  	ret = orig_cudaStreamAttachMemAsync(stream, devPtr, length, flags);
//  	fprintf(fp, ">>>>>>>> cudaStreamAttachMemAsync returned\n");
//  	return ret;

// }

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaStreamAttachMemAsync)(cudaStream_t stream, void *devPtr, size_t length , unsigned int flags) = NULL;

// __host__ __cudart_builtin__ cudaError_t  cudaStreamAttachMemAsync(cudaStream_t stream, void *devPtr, size_t length , unsigned int flags) {
//     	cudaError_t ret;
//  	// Write your own custom c code in the cudaStreamAttachMemAsync.c file
//  	FILE *fp = fopen("Kernel_Log.txt", "a");
//  	fprintf(fp, ">>>>>>>> cudaStreamAttachMemAsync called \n");
//  	ret = orig_cudaStreamAttachMemAsync(stream, devPtr, length, flags);
//  	fprintf(fp, ">>>>>>>> cudaStreamAttachMemAsync returned\n");
//  	return ret;

// }

static __host__ cudaError_t  (*orig_cudaStreamBeginCapture)(cudaStream_t stream, enum cudaStreamCaptureMode mode) = NULL;

__host__ cudaError_t  cudaStreamBeginCapture(cudaStream_t stream, enum cudaStreamCaptureMode mode) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamBeginCapture.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamBeginCapture called \n");
 	ret = orig_cudaStreamBeginCapture(stream, mode);
 	fprintf(fp, ">>>>>>>> cudaStreamBeginCapture returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamBeginCaptureToGraph)(cudaStream_t stream, cudaGraph_t graph, const cudaGraphNode_t *dependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, enum cudaStreamCaptureMode mode) = NULL;

__host__ cudaError_t  cudaStreamBeginCaptureToGraph(cudaStream_t stream, cudaGraph_t graph, const cudaGraphNode_t *dependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, enum cudaStreamCaptureMode mode) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamBeginCaptureToGraph.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamBeginCaptureToGraph called \n");
 	ret = orig_cudaStreamBeginCaptureToGraph(stream, graph, dependencies, dependencyData, numDependencies, mode);
 	fprintf(fp, ">>>>>>>> cudaStreamBeginCaptureToGraph returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaThreadExchangeStreamCaptureMode)(enum cudaStreamCaptureMode *mode) = NULL;

__host__ cudaError_t  cudaThreadExchangeStreamCaptureMode(enum cudaStreamCaptureMode *mode) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaThreadExchangeStreamCaptureMode.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaThreadExchangeStreamCaptureMode called \n");
 	ret = orig_cudaThreadExchangeStreamCaptureMode(mode);
 	fprintf(fp, ">>>>>>>> cudaThreadExchangeStreamCaptureMode returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamEndCapture)(cudaStream_t stream, cudaGraph_t *pGraph) = NULL;

__host__ cudaError_t  cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t *pGraph) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamEndCapture.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamEndCapture called \n");
 	ret = orig_cudaStreamEndCapture(stream, pGraph);
 	fprintf(fp, ">>>>>>>> cudaStreamEndCapture returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamIsCapturing)(cudaStream_t stream, enum cudaStreamCaptureStatus *pCaptureStatus) = NULL;

__host__ cudaError_t  cudaStreamIsCapturing(cudaStream_t stream, enum cudaStreamCaptureStatus *pCaptureStatus) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamIsCapturing.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamIsCapturing called \n");
 	ret = orig_cudaStreamIsCapturing(stream, pCaptureStatus);
 	fprintf(fp, ">>>>>>>> cudaStreamIsCapturing returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamGetCaptureInfo)(cudaStream_t stream, enum cudaStreamCaptureStatus *captureStatus_out, unsigned long long *id_out , cudaGraph_t *graph_out , const cudaGraphNode_t **dependencies_out , size_t *numDependencies_out ) = NULL;

__host__ cudaError_t  cudaStreamGetCaptureInfo(cudaStream_t stream, enum cudaStreamCaptureStatus *captureStatus_out, unsigned long long *id_out , cudaGraph_t *graph_out , const cudaGraphNode_t **dependencies_out , size_t *numDependencies_out ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamGetCaptureInfo.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamGetCaptureInfo called \n");
 	ret = orig_cudaStreamGetCaptureInfo(stream, captureStatus_out, id_out, graph_out, dependencies_out, numDependencies_out);
 	fprintf(fp, ">>>>>>>> cudaStreamGetCaptureInfo returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamGetCaptureInfo_v3)(cudaStream_t stream,    enum cudaStreamCaptureStatus *captureStatus_out, unsigned long long *id_out ,    cudaGraph_t *graph_out , const cudaGraphNode_t **dependencies_out ,    const cudaGraphEdgeData **edgeData_out , size_t *numDependencies_out ) = NULL;

__host__ cudaError_t  cudaStreamGetCaptureInfo_v3(cudaStream_t stream,    enum cudaStreamCaptureStatus *captureStatus_out, unsigned long long *id_out ,    cudaGraph_t *graph_out , const cudaGraphNode_t **dependencies_out ,    const cudaGraphEdgeData **edgeData_out , size_t *numDependencies_out ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamGetCaptureInfo_v3.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamGetCaptureInfo_v3 called \n");
 	ret = orig_cudaStreamGetCaptureInfo_v3(stream, captureStatus_out, id_out, graph_out, dependencies_out, edgeData_out, numDependencies_out);
 	fprintf(fp, ">>>>>>>> cudaStreamGetCaptureInfo_v3 returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamUpdateCaptureDependencies)(cudaStream_t stream, cudaGraphNode_t *dependencies, size_t numDependencies, unsigned int flags ) = NULL;

__host__ cudaError_t  cudaStreamUpdateCaptureDependencies(cudaStream_t stream, cudaGraphNode_t *dependencies, size_t numDependencies, unsigned int flags ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamUpdateCaptureDependencies.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamUpdateCaptureDependencies called \n");
 	ret = orig_cudaStreamUpdateCaptureDependencies(stream, dependencies, numDependencies, flags);
 	fprintf(fp, ">>>>>>>> cudaStreamUpdateCaptureDependencies returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaStreamUpdateCaptureDependencies_v2)(cudaStream_t stream, cudaGraphNode_t *dependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, unsigned int flags ) = NULL;

__host__ cudaError_t  cudaStreamUpdateCaptureDependencies_v2(cudaStream_t stream, cudaGraphNode_t *dependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, unsigned int flags ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaStreamUpdateCaptureDependencies_v2.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaStreamUpdateCaptureDependencies_v2 called \n");
 	ret = orig_cudaStreamUpdateCaptureDependencies_v2(stream, dependencies, dependencyData, numDependencies, flags);
 	fprintf(fp, ">>>>>>>> cudaStreamUpdateCaptureDependencies_v2 returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaEventCreate)(cudaEvent_t *event) = NULL;

__host__ cudaError_t  cudaEventCreate(cudaEvent_t *event) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaEventCreate.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaEventCreate called \n");
 	ret = orig_cudaEventCreate(event);
 	fprintf(fp, ">>>>>>>> cudaEventCreate returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaEventCreateWithFlags)(cudaEvent_t *event, unsigned int flags) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaEventCreateWithFlags(cudaEvent_t *event, unsigned int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaEventCreateWithFlags.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaEventCreateWithFlags called \n");
 	ret = orig_cudaEventCreateWithFlags(event, flags);
 	fprintf(fp, ">>>>>>>> cudaEventCreateWithFlags returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaEventRecord)(cudaEvent_t event, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaEventRecord(cudaEvent_t event, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaEventRecord.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaEventRecord called \n");
 	ret = orig_cudaEventRecord(event, stream);
 	fprintf(fp, ">>>>>>>> cudaEventRecord returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaEventQuery)(cudaEvent_t event) = NULL;

__host__ cudaError_t  cudaEventQuery(cudaEvent_t event) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaEventQuery.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaEventQuery called \n");
 	ret = orig_cudaEventQuery(event);
 	fprintf(fp, ">>>>>>>> cudaEventQuery returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaEventSynchronize)(cudaEvent_t event) = NULL;

__host__ cudaError_t  cudaEventSynchronize(cudaEvent_t event) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaEventSynchronize.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaEventSynchronize called \n");
 	ret = orig_cudaEventSynchronize(event);
 	fprintf(fp, ">>>>>>>> cudaEventSynchronize returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaEventDestroy)(cudaEvent_t event) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaEventDestroy(cudaEvent_t event) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaEventDestroy.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaEventDestroy called \n");
 	ret = orig_cudaEventDestroy(event);
 	fprintf(fp, ">>>>>>>> cudaEventDestroy returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaEventElapsedTime)(float *ms, cudaEvent_t start, cudaEvent_t end) = NULL;

__host__ cudaError_t  cudaEventElapsedTime(float *ms, cudaEvent_t start, cudaEvent_t end) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaEventElapsedTime.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaEventElapsedTime called \n");
 	ret = orig_cudaEventElapsedTime(ms, start, end);
 	fprintf(fp, ">>>>>>>> cudaEventElapsedTime returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaImportExternalMemory)(cudaExternalMemory_t *extMem_out, const struct cudaExternalMemoryHandleDesc *memHandleDesc) = NULL;

__host__ cudaError_t  cudaImportExternalMemory(cudaExternalMemory_t *extMem_out, const struct cudaExternalMemoryHandleDesc *memHandleDesc) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaImportExternalMemory.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaImportExternalMemory called \n");
 	ret = orig_cudaImportExternalMemory(extMem_out, memHandleDesc);
 	fprintf(fp, ">>>>>>>> cudaImportExternalMemory returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaExternalMemoryGetMappedBuffer)(void **devPtr, cudaExternalMemory_t extMem, const struct cudaExternalMemoryBufferDesc *bufferDesc) = NULL;

__host__ cudaError_t  cudaExternalMemoryGetMappedBuffer(void **devPtr, cudaExternalMemory_t extMem, const struct cudaExternalMemoryBufferDesc *bufferDesc) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaExternalMemoryGetMappedBuffer.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaExternalMemoryGetMappedBuffer called \n");
 	ret = orig_cudaExternalMemoryGetMappedBuffer(devPtr, extMem, bufferDesc);
 	fprintf(fp, ">>>>>>>> cudaExternalMemoryGetMappedBuffer returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaExternalMemoryGetMappedMipmappedArray)(cudaMipmappedArray_t *mipmap, cudaExternalMemory_t extMem, const struct cudaExternalMemoryMipmappedArrayDesc *mipmapDesc) = NULL;

__host__ cudaError_t  cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t *mipmap, cudaExternalMemory_t extMem, const struct cudaExternalMemoryMipmappedArrayDesc *mipmapDesc) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaExternalMemoryGetMappedMipmappedArray.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaExternalMemoryGetMappedMipmappedArray called \n");
 	ret = orig_cudaExternalMemoryGetMappedMipmappedArray(mipmap, extMem, mipmapDesc);
 	fprintf(fp, ">>>>>>>> cudaExternalMemoryGetMappedMipmappedArray returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDestroyExternalMemory)(cudaExternalMemory_t extMem) = NULL;

__host__ cudaError_t  cudaDestroyExternalMemory(cudaExternalMemory_t extMem) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDestroyExternalMemory.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDestroyExternalMemory called \n");
 	ret = orig_cudaDestroyExternalMemory(extMem);
 	fprintf(fp, ">>>>>>>> cudaDestroyExternalMemory returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaImportExternalSemaphore)(cudaExternalSemaphore_t *extSem_out, const struct cudaExternalSemaphoreHandleDesc *semHandleDesc) = NULL;

__host__ cudaError_t  cudaImportExternalSemaphore(cudaExternalSemaphore_t *extSem_out, const struct cudaExternalSemaphoreHandleDesc *semHandleDesc) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaImportExternalSemaphore.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaImportExternalSemaphore called \n");
 	ret = orig_cudaImportExternalSemaphore(extSem_out, semHandleDesc);
 	fprintf(fp, ">>>>>>>> cudaImportExternalSemaphore returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaSignalExternalSemaphoresAsync)(const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreSignalParams *paramsArray, unsigned int numExtSems, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaSignalExternalSemaphoresAsync(const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreSignalParams *paramsArray, unsigned int numExtSems, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaSignalExternalSemaphoresAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaSignalExternalSemaphoresAsync called \n");
 	ret = orig_cudaSignalExternalSemaphoresAsync(extSemArray, paramsArray, numExtSems, stream);
 	fprintf(fp, ">>>>>>>> cudaSignalExternalSemaphoresAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaWaitExternalSemaphoresAsync)(const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreWaitParams *paramsArray, unsigned int numExtSems, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaWaitExternalSemaphoresAsync(const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreWaitParams *paramsArray, unsigned int numExtSems, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaWaitExternalSemaphoresAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaWaitExternalSemaphoresAsync called \n");
 	ret = orig_cudaWaitExternalSemaphoresAsync(extSemArray, paramsArray, numExtSems, stream);
 	fprintf(fp, ">>>>>>>> cudaWaitExternalSemaphoresAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDestroyExternalSemaphore)(cudaExternalSemaphore_t extSem) = NULL;

__host__ cudaError_t  cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDestroyExternalSemaphore.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDestroyExternalSemaphore called \n");
 	ret = orig_cudaDestroyExternalSemaphore(extSem);
 	fprintf(fp, ">>>>>>>> cudaDestroyExternalSemaphore returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaLaunchKernel)(const void *func, dim3 gridDim, dim3 blockDim, void **args, size_t sharedMem, cudaStream_t stream) = NULL;

__host__ cudaError_t  cudaLaunchKernel(const void *func, dim3 gridDim, dim3 blockDim, void **args, size_t sharedMem, cudaStream_t stream) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaLaunchKernel.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaLaunchKernel called \n");
 	ret = orig_cudaLaunchKernel(func, gridDim, blockDim, args, sharedMem, stream);
 	fprintf(fp, ">>>>>>>> cudaLaunchKernel returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaLaunchKernelExC)(const cudaLaunchConfig_t *config, const void *func, void **args) = NULL;

__host__ cudaError_t  cudaLaunchKernelExC(const cudaLaunchConfig_t *config, const void *func, void **args) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaLaunchKernelExC.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaLaunchKernelExC called \n");
 	ret = orig_cudaLaunchKernelExC(config, func, args);
 	fprintf(fp, ">>>>>>>> cudaLaunchKernelExC returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaLaunchCooperativeKernel)(const void *func, dim3 gridDim, dim3 blockDim, void **args, size_t sharedMem, cudaStream_t stream) = NULL;

__host__ cudaError_t  cudaLaunchCooperativeKernel(const void *func, dim3 gridDim, dim3 blockDim, void **args, size_t sharedMem, cudaStream_t stream) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaLaunchCooperativeKernel.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaLaunchCooperativeKernel called \n");
 	ret = orig_cudaLaunchCooperativeKernel(func, gridDim, blockDim, args, sharedMem, stream);
 	fprintf(fp, ">>>>>>>> cudaLaunchCooperativeKernel returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaFuncSetCacheConfig)(const void *func, enum cudaFuncCache cacheConfig) = NULL;

__host__ cudaError_t  cudaFuncSetCacheConfig(const void *func, enum cudaFuncCache cacheConfig) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaFuncSetCacheConfig.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaFuncSetCacheConfig called \n");
 	ret = orig_cudaFuncSetCacheConfig(func, cacheConfig);
 	fprintf(fp, ">>>>>>>> cudaFuncSetCacheConfig returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaFuncGetAttributes)(struct cudaFuncAttributes *attr, const void *func) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaFuncGetAttributes(struct cudaFuncAttributes *attr, const void *func) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaFuncGetAttributes.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaFuncGetAttributes called \n");
 	ret = orig_cudaFuncGetAttributes(attr, func);
 	fprintf(fp, ">>>>>>>> cudaFuncGetAttributes returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaFuncSetAttribute)(const void *func, enum cudaFuncAttribute attr, int value) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaFuncSetAttribute(const void *func, enum cudaFuncAttribute attr, int value) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaFuncSetAttribute.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaFuncSetAttribute called \n");
 	ret = orig_cudaFuncSetAttribute(func, attr, value);
 	fprintf(fp, ">>>>>>>> cudaFuncSetAttribute returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaFuncGetName)(const char **name, const void *func) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaFuncGetName(const char **name, const void *func) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaFuncGetName.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaFuncGetName called \n");
 	ret = orig_cudaFuncGetName(name, func);
 	fprintf(fp, ">>>>>>>> cudaFuncGetName returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaFuncGetParamInfo)(const void *func, size_t paramIndex, size_t *paramOffset, size_t *paramSize) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaFuncGetParamInfo(const void *func, size_t paramIndex, size_t *paramOffset, size_t *paramSize) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaFuncGetParamInfo.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaFuncGetParamInfo called \n");
 	ret = orig_cudaFuncGetParamInfo(func, paramIndex, paramOffset, paramSize);
 	fprintf(fp, ">>>>>>>> cudaFuncGetParamInfo returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaLaunchHostFunc)(cudaStream_t stream, cudaHostFn_t fn, void *userData) = NULL;

__host__ cudaError_t  cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void *userData) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaLaunchHostFunc.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaLaunchHostFunc called \n");
 	ret = orig_cudaLaunchHostFunc(stream, fn, userData);
 	fprintf(fp, ">>>>>>>> cudaLaunchHostFunc returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaOccupancyMaxActiveBlocksPerMultiprocessor)(int *numBlocks, const void *func, int blockSize, size_t dynamicSMemSize) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *numBlocks, const void *func, int blockSize, size_t dynamicSMemSize) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaOccupancyMaxActiveBlocksPerMultiprocessor.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessor called \n");
 	ret = orig_cudaOccupancyMaxActiveBlocksPerMultiprocessor(numBlocks, func, blockSize, dynamicSMemSize);
 	fprintf(fp, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessor returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaOccupancyAvailableDynamicSMemPerBlock)(size_t *dynamicSmemSize, const void *func, int numBlocks, int blockSize) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaOccupancyAvailableDynamicSMemPerBlock(size_t *dynamicSmemSize, const void *func, int numBlocks, int blockSize) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaOccupancyAvailableDynamicSMemPerBlock.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaOccupancyAvailableDynamicSMemPerBlock called \n");
 	ret = orig_cudaOccupancyAvailableDynamicSMemPerBlock(dynamicSmemSize, func, numBlocks, blockSize);
 	fprintf(fp, ">>>>>>>> cudaOccupancyAvailableDynamicSMemPerBlock returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags)(int *numBlocks, const void *func, int blockSize, size_t dynamicSMemSize, unsigned int flags) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *numBlocks, const void *func, int blockSize, size_t dynamicSMemSize, unsigned int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags called \n");
 	ret = orig_cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, func, blockSize, dynamicSMemSize, flags);
 	fprintf(fp, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaOccupancyMaxPotentialClusterSize)(int *clusterSize, const void *func, const cudaLaunchConfig_t *launchConfig) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaOccupancyMaxPotentialClusterSize(int *clusterSize, const void *func, const cudaLaunchConfig_t *launchConfig) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaOccupancyMaxPotentialClusterSize.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaOccupancyMaxPotentialClusterSize called \n");
 	ret = orig_cudaOccupancyMaxPotentialClusterSize(clusterSize, func, launchConfig);
 	fprintf(fp, ">>>>>>>> cudaOccupancyMaxPotentialClusterSize returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaOccupancyMaxActiveClusters)(int *numClusters, const void *func, const cudaLaunchConfig_t *launchConfig) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaOccupancyMaxActiveClusters(int *numClusters, const void *func, const cudaLaunchConfig_t *launchConfig) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaOccupancyMaxActiveClusters.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaOccupancyMaxActiveClusters called \n");
 	ret = orig_cudaOccupancyMaxActiveClusters(numClusters, func, launchConfig);
 	fprintf(fp, ">>>>>>>> cudaOccupancyMaxActiveClusters returned\n");
 	return ret;

}

// static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMallocManaged)(void **devPtr, size_t size, unsigned int flags = cudaMemAttachGlobal) = NULL;

// __host__ __cudart_builtin__ cudaError_t  cudaMallocManaged(void **devPtr, size_t size, unsigned int flags = cudaMemAttachGlobal) {
//     	cudaError_t ret;
//  	// Write your own custom c code in the cudaMallocManaged.c file
//  	FILE *fp = fopen("Kernel_Log.txt", "a");
//  	fprintf(fp, ">>>>>>>> cudaMallocManaged called \n");
//  	ret = orig_cudaMallocManaged(devPtr, size, flags);
//  	fprintf(fp, ">>>>>>>> cudaMallocManaged returned\n");
//  	return ret;

// }

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMallocManaged)(void **devPtr, size_t size, unsigned int flags) = NULL;

// __host__ __cudart_builtin__ cudaError_t  cudaMallocManaged(void **devPtr, size_t size, unsigned int flags) {
//     	cudaError_t ret;
//  	// Write your own custom c code in the cudaMallocManaged.c file
//  	FILE *fp = fopen("Kernel_Log.txt", "a");
//  	fprintf(fp, ">>>>>>>> cudaMallocManaged called \n");
//  	ret = orig_cudaMallocManaged(devPtr, size, flags);
//  	fprintf(fp, ">>>>>>>> cudaMallocManaged returned\n");
//  	return ret;

// }

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMalloc)(void **devPtr, size_t size) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaMalloc(void **devPtr, size_t size) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMalloc.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMalloc called \n");
 	ret = orig_cudaMalloc(devPtr, size);
 	fprintf(fp, ">>>>>>>> cudaMalloc returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMallocHost)(void **ptr, size_t size) = NULL;

__host__ cudaError_t  cudaMallocHost(void **ptr, size_t size) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMallocHost.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMallocHost called \n");
 	ret = orig_cudaMallocHost(ptr, size);
 	fprintf(fp, ">>>>>>>> cudaMallocHost returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMallocPitch)(void **devPtr, size_t *pitch, size_t width, size_t height) = NULL;

__host__ cudaError_t  cudaMallocPitch(void **devPtr, size_t *pitch, size_t width, size_t height) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMallocPitch.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMallocPitch called \n");
 	ret = orig_cudaMallocPitch(devPtr, pitch, width, height);
 	fprintf(fp, ">>>>>>>> cudaMallocPitch returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMallocArray)(cudaArray_t *array, const struct cudaChannelFormatDesc *desc, size_t width, size_t height , unsigned int flags ) = NULL;

__host__ cudaError_t  cudaMallocArray(cudaArray_t *array, const struct cudaChannelFormatDesc *desc, size_t width, size_t height , unsigned int flags ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMallocArray.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMallocArray called \n");
 	ret = orig_cudaMallocArray(array, desc, width, height, flags);
 	fprintf(fp, ">>>>>>>> cudaMallocArray returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaFree)(void *devPtr) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaFree(void *devPtr) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaFree.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaFree called \n");
 	ret = orig_cudaFree(devPtr);
 	fprintf(fp, ">>>>>>>> cudaFree returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaFreeHost)(void *ptr) = NULL;

__host__ cudaError_t  cudaFreeHost(void *ptr) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaFreeHost.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaFreeHost called \n");
 	ret = orig_cudaFreeHost(ptr);
 	fprintf(fp, ">>>>>>>> cudaFreeHost returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaFreeArray)(cudaArray_t array) = NULL;

__host__ cudaError_t  cudaFreeArray(cudaArray_t array) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaFreeArray.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaFreeArray called \n");
 	ret = orig_cudaFreeArray(array);
 	fprintf(fp, ">>>>>>>> cudaFreeArray returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaFreeMipmappedArray)(cudaMipmappedArray_t mipmappedArray) = NULL;

__host__ cudaError_t  cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaFreeMipmappedArray.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaFreeMipmappedArray called \n");
 	ret = orig_cudaFreeMipmappedArray(mipmappedArray);
 	fprintf(fp, ">>>>>>>> cudaFreeMipmappedArray returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaHostAlloc)(void **pHost, size_t size, unsigned int flags) = NULL;

__host__ cudaError_t  cudaHostAlloc(void **pHost, size_t size, unsigned int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaHostAlloc.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaHostAlloc called \n");
 	ret = orig_cudaHostAlloc(pHost, size, flags);
 	fprintf(fp, ">>>>>>>> cudaHostAlloc returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaHostRegister)(void *ptr, size_t size, unsigned int flags) = NULL;

__host__ cudaError_t  cudaHostRegister(void *ptr, size_t size, unsigned int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaHostRegister.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaHostRegister called \n");
 	ret = orig_cudaHostRegister(ptr, size, flags);
 	fprintf(fp, ">>>>>>>> cudaHostRegister returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaHostUnregister)(void *ptr) = NULL;

__host__ cudaError_t  cudaHostUnregister(void *ptr) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaHostUnregister.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaHostUnregister called \n");
 	ret = orig_cudaHostUnregister(ptr);
 	fprintf(fp, ">>>>>>>> cudaHostUnregister returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaHostGetDevicePointer)(void **pDevice, void *pHost, unsigned int flags) = NULL;

__host__ cudaError_t  cudaHostGetDevicePointer(void **pDevice, void *pHost, unsigned int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaHostGetDevicePointer.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaHostGetDevicePointer called \n");
 	ret = orig_cudaHostGetDevicePointer(pDevice, pHost, flags);
 	fprintf(fp, ">>>>>>>> cudaHostGetDevicePointer returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaHostGetFlags)(unsigned int *pFlags, void *pHost) = NULL;

__host__ cudaError_t  cudaHostGetFlags(unsigned int *pFlags, void *pHost) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaHostGetFlags.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaHostGetFlags called \n");
 	ret = orig_cudaHostGetFlags(pFlags, pHost);
 	fprintf(fp, ">>>>>>>> cudaHostGetFlags returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMalloc3D)(struct cudaPitchedPtr* pitchedDevPtr, struct cudaExtent extent) = NULL;

__host__ cudaError_t  cudaMalloc3D(struct cudaPitchedPtr* pitchedDevPtr, struct cudaExtent extent) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMalloc3D.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMalloc3D called \n");
 	ret = orig_cudaMalloc3D(pitchedDevPtr, extent);
 	fprintf(fp, ">>>>>>>> cudaMalloc3D returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMalloc3DArray)(cudaArray_t *array, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent, unsigned int flags ) = NULL;

__host__ cudaError_t  cudaMalloc3DArray(cudaArray_t *array, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent, unsigned int flags ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMalloc3DArray.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMalloc3DArray called \n");
 	ret = orig_cudaMalloc3DArray(array, desc, extent, flags);
 	fprintf(fp, ">>>>>>>> cudaMalloc3DArray returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMallocMipmappedArray)(cudaMipmappedArray_t *mipmappedArray, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent, unsigned int numLevels, unsigned int flags ) = NULL;

__host__ cudaError_t  cudaMallocMipmappedArray(cudaMipmappedArray_t *mipmappedArray, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent, unsigned int numLevels, unsigned int flags ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMallocMipmappedArray.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMallocMipmappedArray called \n");
 	ret = orig_cudaMallocMipmappedArray(mipmappedArray, desc, extent, numLevels, flags);
 	fprintf(fp, ">>>>>>>> cudaMallocMipmappedArray returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetMipmappedArrayLevel)(cudaArray_t *levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned int level) = NULL;

__host__ cudaError_t  cudaGetMipmappedArrayLevel(cudaArray_t *levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned int level) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetMipmappedArrayLevel.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetMipmappedArrayLevel called \n");
 	ret = orig_cudaGetMipmappedArrayLevel(levelArray, mipmappedArray, level);
 	fprintf(fp, ">>>>>>>> cudaGetMipmappedArrayLevel returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy3D)(const struct cudaMemcpy3DParms *p) = NULL;

__host__ cudaError_t  cudaMemcpy3D(const struct cudaMemcpy3DParms *p) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpy3D.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpy3D called \n");
 	ret = orig_cudaMemcpy3D(p);
 	fprintf(fp, ">>>>>>>> cudaMemcpy3D returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy3DPeer)(const struct cudaMemcpy3DPeerParms *p) = NULL;

__host__ cudaError_t  cudaMemcpy3DPeer(const struct cudaMemcpy3DPeerParms *p) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpy3DPeer.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpy3DPeer called \n");
 	ret = orig_cudaMemcpy3DPeer(p);
 	fprintf(fp, ">>>>>>>> cudaMemcpy3DPeer returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMemcpy3DAsync)(const struct cudaMemcpy3DParms *p, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaMemcpy3DAsync(const struct cudaMemcpy3DParms *p, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpy3DAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpy3DAsync called \n");
 	ret = orig_cudaMemcpy3DAsync(p, stream);
 	fprintf(fp, ">>>>>>>> cudaMemcpy3DAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy3DPeerAsync)(const struct cudaMemcpy3DPeerParms *p, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemcpy3DPeerAsync(const struct cudaMemcpy3DPeerParms *p, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpy3DPeerAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpy3DPeerAsync called \n");
 	ret = orig_cudaMemcpy3DPeerAsync(p, stream);
 	fprintf(fp, ">>>>>>>> cudaMemcpy3DPeerAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemGetInfo)(size_t *free, size_t *total) = NULL;

__host__ cudaError_t  cudaMemGetInfo(size_t *free, size_t *total) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemGetInfo.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemGetInfo called \n");
 	ret = orig_cudaMemGetInfo(free, total);
 	fprintf(fp, ">>>>>>>> cudaMemGetInfo returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaArrayGetInfo)(struct cudaChannelFormatDesc *desc, struct cudaExtent *extent, unsigned int *flags, cudaArray_t array) = NULL;

__host__ cudaError_t  cudaArrayGetInfo(struct cudaChannelFormatDesc *desc, struct cudaExtent *extent, unsigned int *flags, cudaArray_t array) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaArrayGetInfo.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaArrayGetInfo called \n");
 	ret = orig_cudaArrayGetInfo(desc, extent, flags, array);
 	fprintf(fp, ">>>>>>>> cudaArrayGetInfo returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaArrayGetPlane)(cudaArray_t *pPlaneArray, cudaArray_t hArray, unsigned int planeIdx) = NULL;

__host__ cudaError_t  cudaArrayGetPlane(cudaArray_t *pPlaneArray, cudaArray_t hArray, unsigned int planeIdx) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaArrayGetPlane.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaArrayGetPlane called \n");
 	ret = orig_cudaArrayGetPlane(pPlaneArray, hArray, planeIdx);
 	fprintf(fp, ">>>>>>>> cudaArrayGetPlane returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaArrayGetMemoryRequirements)(struct cudaArrayMemoryRequirements  *memoryRequirements, cudaArray_t array, int device) = NULL;

__host__ cudaError_t  cudaArrayGetMemoryRequirements(struct cudaArrayMemoryRequirements  *memoryRequirements, cudaArray_t array, int device) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaArrayGetMemoryRequirements.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaArrayGetMemoryRequirements called \n");
 	ret = orig_cudaArrayGetMemoryRequirements(memoryRequirements, array, device);
 	fprintf(fp, ">>>>>>>> cudaArrayGetMemoryRequirements returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMipmappedArrayGetMemoryRequirements)(struct cudaArrayMemoryRequirements *memoryRequirements, cudaMipmappedArray_t mipmap, int device) = NULL;

__host__ cudaError_t  cudaMipmappedArrayGetMemoryRequirements(struct cudaArrayMemoryRequirements *memoryRequirements, cudaMipmappedArray_t mipmap, int device) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMipmappedArrayGetMemoryRequirements.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMipmappedArrayGetMemoryRequirements called \n");
 	ret = orig_cudaMipmappedArrayGetMemoryRequirements(memoryRequirements, mipmap, device);
 	fprintf(fp, ">>>>>>>> cudaMipmappedArrayGetMemoryRequirements returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy)(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind) = NULL;

__host__ cudaError_t  cudaMemcpy(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpy.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpy called \n");
 	ret = orig_cudaMemcpy(dst, src, count, kind);
 	fprintf(fp, ">>>>>>>> cudaMemcpy returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpyPeer)(void *dst, int dstDevice, const void *src, int srcDevice, size_t count) = NULL;

__host__ cudaError_t  cudaMemcpyPeer(void *dst, int dstDevice, const void *src, int srcDevice, size_t count) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpyPeer.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpyPeer called \n");
 	ret = orig_cudaMemcpyPeer(dst, dstDevice, src, srcDevice, count);
 	fprintf(fp, ">>>>>>>> cudaMemcpyPeer returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy2D)(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind) = NULL;

__host__ cudaError_t  cudaMemcpy2D(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpy2D.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpy2D called \n");
 	ret = orig_cudaMemcpy2D(dst, dpitch, src, spitch, width, height, kind);
 	fprintf(fp, ">>>>>>>> cudaMemcpy2D returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy2DToArray)(cudaArray_t dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind) = NULL;

__host__ cudaError_t  cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpy2DToArray.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpy2DToArray called \n");
 	ret = orig_cudaMemcpy2DToArray(dst, wOffset, hOffset, src, spitch, width, height, kind);
 	fprintf(fp, ">>>>>>>> cudaMemcpy2DToArray returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy2DFromArray)(void *dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind) = NULL;

__host__ cudaError_t  cudaMemcpy2DFromArray(void *dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpy2DFromArray.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpy2DFromArray called \n");
 	ret = orig_cudaMemcpy2DFromArray(dst, dpitch, src, wOffset, hOffset, width, height, kind);
 	fprintf(fp, ">>>>>>>> cudaMemcpy2DFromArray returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy2DArrayToArray)(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, enum cudaMemcpyKind kind ) = NULL;

__host__ cudaError_t  cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, enum cudaMemcpyKind kind ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpy2DArrayToArray.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpy2DArrayToArray called \n");
 	ret = orig_cudaMemcpy2DArrayToArray(dst, wOffsetDst, hOffsetDst, src, wOffsetSrc, hOffsetSrc, width, height, kind);
 	fprintf(fp, ">>>>>>>> cudaMemcpy2DArrayToArray returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpyToSymbol)(const void *symbol, const void *src, size_t count, size_t offset , enum cudaMemcpyKind kind ) = NULL;

__host__ cudaError_t  cudaMemcpyToSymbol(const void *symbol, const void *src, size_t count, size_t offset , enum cudaMemcpyKind kind ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpyToSymbol.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpyToSymbol called \n");
 	ret = orig_cudaMemcpyToSymbol(symbol, src, count, offset, kind);
 	fprintf(fp, ">>>>>>>> cudaMemcpyToSymbol returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpyFromSymbol)(void *dst, const void *symbol, size_t count, size_t offset , enum cudaMemcpyKind kind ) = NULL;

__host__ cudaError_t  cudaMemcpyFromSymbol(void *dst, const void *symbol, size_t count, size_t offset , enum cudaMemcpyKind kind ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpyFromSymbol.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpyFromSymbol called \n");
 	ret = orig_cudaMemcpyFromSymbol(dst, symbol, count, offset, kind);
 	fprintf(fp, ">>>>>>>> cudaMemcpyFromSymbol returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMemcpyAsync)(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaMemcpyAsync(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpyAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpyAsync called \n");
 	ret = orig_cudaMemcpyAsync(dst, src, count, kind, stream);
 	fprintf(fp, ">>>>>>>> cudaMemcpyAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpyPeerAsync)(void *dst, int dstDevice, const void *src, int srcDevice, size_t count, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemcpyPeerAsync(void *dst, int dstDevice, const void *src, int srcDevice, size_t count, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpyPeerAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpyPeerAsync called \n");
 	ret = orig_cudaMemcpyPeerAsync(dst, dstDevice, src, srcDevice, count, stream);
 	fprintf(fp, ">>>>>>>> cudaMemcpyPeerAsync returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMemcpy2DAsync)(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaMemcpy2DAsync(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpy2DAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpy2DAsync called \n");
 	ret = orig_cudaMemcpy2DAsync(dst, dpitch, src, spitch, width, height, kind, stream);
 	fprintf(fp, ">>>>>>>> cudaMemcpy2DAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy2DToArrayAsync)(cudaArray_t dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpy2DToArrayAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpy2DToArrayAsync called \n");
 	ret = orig_cudaMemcpy2DToArrayAsync(dst, wOffset, hOffset, src, spitch, width, height, kind, stream);
 	fprintf(fp, ">>>>>>>> cudaMemcpy2DToArrayAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpy2DFromArrayAsync)(void *dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemcpy2DFromArrayAsync(void *dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpy2DFromArrayAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpy2DFromArrayAsync called \n");
 	ret = orig_cudaMemcpy2DFromArrayAsync(dst, dpitch, src, wOffset, hOffset, width, height, kind, stream);
 	fprintf(fp, ">>>>>>>> cudaMemcpy2DFromArrayAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpyToSymbolAsync)(const void *symbol, const void *src, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemcpyToSymbolAsync(const void *symbol, const void *src, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpyToSymbolAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpyToSymbolAsync called \n");
 	ret = orig_cudaMemcpyToSymbolAsync(symbol, src, count, offset, kind, stream);
 	fprintf(fp, ">>>>>>>> cudaMemcpyToSymbolAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemcpyFromSymbolAsync)(void *dst, const void *symbol, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemcpyFromSymbolAsync(void *dst, const void *symbol, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemcpyFromSymbolAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemcpyFromSymbolAsync called \n");
 	ret = orig_cudaMemcpyFromSymbolAsync(dst, symbol, count, offset, kind, stream);
 	fprintf(fp, ">>>>>>>> cudaMemcpyFromSymbolAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemset)(void *devPtr, int value, size_t count) = NULL;

__host__ cudaError_t  cudaMemset(void *devPtr, int value, size_t count) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemset.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemset called \n");
 	ret = orig_cudaMemset(devPtr, value, count);
 	fprintf(fp, ">>>>>>>> cudaMemset returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemset2D)(void *devPtr, size_t pitch, int value, size_t width, size_t height) = NULL;

__host__ cudaError_t  cudaMemset2D(void *devPtr, size_t pitch, int value, size_t width, size_t height) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemset2D.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemset2D called \n");
 	ret = orig_cudaMemset2D(devPtr, pitch, value, width, height);
 	fprintf(fp, ">>>>>>>> cudaMemset2D returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemset3D)(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent) = NULL;

__host__ cudaError_t  cudaMemset3D(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemset3D.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemset3D called \n");
 	ret = orig_cudaMemset3D(pitchedDevPtr, value, extent);
 	fprintf(fp, ">>>>>>>> cudaMemset3D returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMemsetAsync)(void *devPtr, int value, size_t count, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaMemsetAsync(void *devPtr, int value, size_t count, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemsetAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemsetAsync called \n");
 	ret = orig_cudaMemsetAsync(devPtr, value, count, stream);
 	fprintf(fp, ">>>>>>>> cudaMemsetAsync returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMemset2DAsync)(void *devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaMemset2DAsync(void *devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemset2DAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemset2DAsync called \n");
 	ret = orig_cudaMemset2DAsync(devPtr, pitch, value, width, height, stream);
 	fprintf(fp, ">>>>>>>> cudaMemset2DAsync returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaMemset3DAsync)(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaMemset3DAsync(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemset3DAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemset3DAsync called \n");
 	ret = orig_cudaMemset3DAsync(pitchedDevPtr, value, extent, stream);
 	fprintf(fp, ">>>>>>>> cudaMemset3DAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetSymbolAddress)(void **devPtr, const void *symbol) = NULL;

__host__ cudaError_t  cudaGetSymbolAddress(void **devPtr, const void *symbol) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetSymbolAddress.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetSymbolAddress called \n");
 	ret = orig_cudaGetSymbolAddress(devPtr, symbol);
 	fprintf(fp, ">>>>>>>> cudaGetSymbolAddress returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetSymbolSize)(size_t *size, const void *symbol) = NULL;

__host__ cudaError_t  cudaGetSymbolSize(size_t *size, const void *symbol) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetSymbolSize.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetSymbolSize called \n");
 	ret = orig_cudaGetSymbolSize(size, symbol);
 	fprintf(fp, ">>>>>>>> cudaGetSymbolSize returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPrefetchAsync)(const void *devPtr, size_t count, int dstDevice, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemPrefetchAsync(const void *devPtr, size_t count, int dstDevice, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemPrefetchAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemPrefetchAsync called \n");
 	ret = orig_cudaMemPrefetchAsync(devPtr, count, dstDevice, stream);
 	fprintf(fp, ">>>>>>>> cudaMemPrefetchAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPrefetchAsync_v2)(const void *devPtr, size_t count, struct cudaMemLocation location, unsigned int flags, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaMemPrefetchAsync_v2(const void *devPtr, size_t count, struct cudaMemLocation location, unsigned int flags, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemPrefetchAsync_v2.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemPrefetchAsync_v2 called \n");
 	ret = orig_cudaMemPrefetchAsync_v2(devPtr, count, location, flags, stream);
 	fprintf(fp, ">>>>>>>> cudaMemPrefetchAsync_v2 returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemAdvise)(const void *devPtr, size_t count, enum cudaMemoryAdvise advice, int device) = NULL;

__host__ cudaError_t  cudaMemAdvise(const void *devPtr, size_t count, enum cudaMemoryAdvise advice, int device) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemAdvise.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemAdvise called \n");
 	ret = orig_cudaMemAdvise(devPtr, count, advice, device);
 	fprintf(fp, ">>>>>>>> cudaMemAdvise returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemAdvise_v2)(const void *devPtr, size_t count, enum cudaMemoryAdvise advice, struct cudaMemLocation location) = NULL;

__host__ cudaError_t  cudaMemAdvise_v2(const void *devPtr, size_t count, enum cudaMemoryAdvise advice, struct cudaMemLocation location) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemAdvise_v2.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemAdvise_v2 called \n");
 	ret = orig_cudaMemAdvise_v2(devPtr, count, advice, location);
 	fprintf(fp, ">>>>>>>> cudaMemAdvise_v2 returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemRangeGetAttribute)(void *data, size_t dataSize, enum cudaMemRangeAttribute attribute, const void *devPtr, size_t count) = NULL;

__host__ cudaError_t  cudaMemRangeGetAttribute(void *data, size_t dataSize, enum cudaMemRangeAttribute attribute, const void *devPtr, size_t count) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemRangeGetAttribute.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemRangeGetAttribute called \n");
 	ret = orig_cudaMemRangeGetAttribute(data, dataSize, attribute, devPtr, count);
 	fprintf(fp, ">>>>>>>> cudaMemRangeGetAttribute returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemRangeGetAttributes)(void **data, size_t *dataSizes, enum cudaMemRangeAttribute *attributes, size_t numAttributes, const void *devPtr, size_t count) = NULL;

__host__ cudaError_t  cudaMemRangeGetAttributes(void **data, size_t *dataSizes, enum cudaMemRangeAttribute *attributes, size_t numAttributes, const void *devPtr, size_t count) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemRangeGetAttributes.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemRangeGetAttributes called \n");
 	ret = orig_cudaMemRangeGetAttributes(data, dataSizes, attributes, numAttributes, devPtr, count);
 	fprintf(fp, ">>>>>>>> cudaMemRangeGetAttributes returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMallocAsync)(void **devPtr, size_t size, cudaStream_t hStream) = NULL;

__host__ cudaError_t  cudaMallocAsync(void **devPtr, size_t size, cudaStream_t hStream) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMallocAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMallocAsync called \n");
 	ret = orig_cudaMallocAsync(devPtr, size, hStream);
 	fprintf(fp, ">>>>>>>> cudaMallocAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaFreeAsync)(void *devPtr, cudaStream_t hStream) = NULL;

__host__ cudaError_t  cudaFreeAsync(void *devPtr, cudaStream_t hStream) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaFreeAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaFreeAsync called \n");
 	ret = orig_cudaFreeAsync(devPtr, hStream);
 	fprintf(fp, ">>>>>>>> cudaFreeAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolTrimTo)(cudaMemPool_t memPool, size_t minBytesToKeep) = NULL;

__host__ cudaError_t  cudaMemPoolTrimTo(cudaMemPool_t memPool, size_t minBytesToKeep) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemPoolTrimTo.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemPoolTrimTo called \n");
 	ret = orig_cudaMemPoolTrimTo(memPool, minBytesToKeep);
 	fprintf(fp, ">>>>>>>> cudaMemPoolTrimTo returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolSetAttribute)(cudaMemPool_t memPool, enum cudaMemPoolAttr attr, void *value ) = NULL;

__host__ cudaError_t  cudaMemPoolSetAttribute(cudaMemPool_t memPool, enum cudaMemPoolAttr attr, void *value ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemPoolSetAttribute.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemPoolSetAttribute called \n");
 	ret = orig_cudaMemPoolSetAttribute(memPool, attr, value);
 	fprintf(fp, ">>>>>>>> cudaMemPoolSetAttribute returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolGetAttribute)(cudaMemPool_t memPool, enum cudaMemPoolAttr attr, void *value ) = NULL;

__host__ cudaError_t  cudaMemPoolGetAttribute(cudaMemPool_t memPool, enum cudaMemPoolAttr attr, void *value ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemPoolGetAttribute.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemPoolGetAttribute called \n");
 	ret = orig_cudaMemPoolGetAttribute(memPool, attr, value);
 	fprintf(fp, ">>>>>>>> cudaMemPoolGetAttribute returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolSetAccess)(cudaMemPool_t memPool, const struct cudaMemAccessDesc *descList, size_t count) = NULL;

__host__ cudaError_t  cudaMemPoolSetAccess(cudaMemPool_t memPool, const struct cudaMemAccessDesc *descList, size_t count) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemPoolSetAccess.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemPoolSetAccess called \n");
 	ret = orig_cudaMemPoolSetAccess(memPool, descList, count);
 	fprintf(fp, ">>>>>>>> cudaMemPoolSetAccess returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolGetAccess)(enum cudaMemAccessFlags *flags, cudaMemPool_t memPool, struct cudaMemLocation *location) = NULL;

__host__ cudaError_t  cudaMemPoolGetAccess(enum cudaMemAccessFlags *flags, cudaMemPool_t memPool, struct cudaMemLocation *location) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemPoolGetAccess.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemPoolGetAccess called \n");
 	ret = orig_cudaMemPoolGetAccess(flags, memPool, location);
 	fprintf(fp, ">>>>>>>> cudaMemPoolGetAccess returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolCreate)(cudaMemPool_t *memPool, const struct cudaMemPoolProps *poolProps) = NULL;

__host__ cudaError_t  cudaMemPoolCreate(cudaMemPool_t *memPool, const struct cudaMemPoolProps *poolProps) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemPoolCreate.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemPoolCreate called \n");
 	ret = orig_cudaMemPoolCreate(memPool, poolProps);
 	fprintf(fp, ">>>>>>>> cudaMemPoolCreate returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolDestroy)(cudaMemPool_t memPool) = NULL;

__host__ cudaError_t  cudaMemPoolDestroy(cudaMemPool_t memPool) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemPoolDestroy.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemPoolDestroy called \n");
 	ret = orig_cudaMemPoolDestroy(memPool);
 	fprintf(fp, ">>>>>>>> cudaMemPoolDestroy returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMallocFromPoolAsync)(void **ptr, size_t size, cudaMemPool_t memPool, cudaStream_t stream) = NULL;

__host__ cudaError_t  cudaMallocFromPoolAsync(void **ptr, size_t size, cudaMemPool_t memPool, cudaStream_t stream) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMallocFromPoolAsync.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMallocFromPoolAsync called \n");
 	ret = orig_cudaMallocFromPoolAsync(ptr, size, memPool, stream);
 	fprintf(fp, ">>>>>>>> cudaMallocFromPoolAsync returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolExportToShareableHandle)(    void                            *shareableHandle,    cudaMemPool_t                    memPool,    enum cudaMemAllocationHandleType handleType,    unsigned int                     flags) = NULL;

__host__ cudaError_t  cudaMemPoolExportToShareableHandle(    void                            *shareableHandle,    cudaMemPool_t                    memPool,    enum cudaMemAllocationHandleType handleType,    unsigned int                     flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemPoolExportToShareableHandle.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemPoolExportToShareableHandle called \n");
 	ret = orig_cudaMemPoolExportToShareableHandle(shareableHandle, memPool, handleType, flags);
 	fprintf(fp, ">>>>>>>> cudaMemPoolExportToShareableHandle returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolImportFromShareableHandle)(    cudaMemPool_t                   *memPool,    void                            *shareableHandle,    enum cudaMemAllocationHandleType handleType,    unsigned int                     flags) = NULL;

__host__ cudaError_t  cudaMemPoolImportFromShareableHandle(    cudaMemPool_t                   *memPool,    void                            *shareableHandle,    enum cudaMemAllocationHandleType handleType,    unsigned int                     flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemPoolImportFromShareableHandle.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemPoolImportFromShareableHandle called \n");
 	ret = orig_cudaMemPoolImportFromShareableHandle(memPool, shareableHandle, handleType, flags);
 	fprintf(fp, ">>>>>>>> cudaMemPoolImportFromShareableHandle returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolExportPointer)(struct cudaMemPoolPtrExportData *exportData, void *ptr) = NULL;

__host__ cudaError_t  cudaMemPoolExportPointer(struct cudaMemPoolPtrExportData *exportData, void *ptr) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemPoolExportPointer.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemPoolExportPointer called \n");
 	ret = orig_cudaMemPoolExportPointer(exportData, ptr);
 	fprintf(fp, ">>>>>>>> cudaMemPoolExportPointer returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaMemPoolImportPointer)(void **ptr, cudaMemPool_t memPool, struct cudaMemPoolPtrExportData *exportData) = NULL;

__host__ cudaError_t  cudaMemPoolImportPointer(void **ptr, cudaMemPool_t memPool, struct cudaMemPoolPtrExportData *exportData) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaMemPoolImportPointer.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaMemPoolImportPointer called \n");
 	ret = orig_cudaMemPoolImportPointer(ptr, memPool, exportData);
 	fprintf(fp, ">>>>>>>> cudaMemPoolImportPointer returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaPointerGetAttributes)(struct cudaPointerAttributes *attributes, const void *ptr) = NULL;

__host__ cudaError_t  cudaPointerGetAttributes(struct cudaPointerAttributes *attributes, const void *ptr) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaPointerGetAttributes.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaPointerGetAttributes called \n");
 	ret = orig_cudaPointerGetAttributes(attributes, ptr);
 	fprintf(fp, ">>>>>>>> cudaPointerGetAttributes returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceCanAccessPeer)(int *canAccessPeer, int device, int peerDevice) = NULL;

__host__ cudaError_t  cudaDeviceCanAccessPeer(int *canAccessPeer, int device, int peerDevice) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceCanAccessPeer.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceCanAccessPeer called \n");
 	ret = orig_cudaDeviceCanAccessPeer(canAccessPeer, device, peerDevice);
 	fprintf(fp, ">>>>>>>> cudaDeviceCanAccessPeer returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceEnablePeerAccess)(int peerDevice, unsigned int flags) = NULL;

__host__ cudaError_t  cudaDeviceEnablePeerAccess(int peerDevice, unsigned int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceEnablePeerAccess.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceEnablePeerAccess called \n");
 	ret = orig_cudaDeviceEnablePeerAccess(peerDevice, flags);
 	fprintf(fp, ">>>>>>>> cudaDeviceEnablePeerAccess returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceDisablePeerAccess)(int peerDevice) = NULL;

__host__ cudaError_t  cudaDeviceDisablePeerAccess(int peerDevice) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceDisablePeerAccess.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceDisablePeerAccess called \n");
 	ret = orig_cudaDeviceDisablePeerAccess(peerDevice);
 	fprintf(fp, ">>>>>>>> cudaDeviceDisablePeerAccess returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphicsUnregisterResource)(cudaGraphicsResource_t resource) = NULL;

__host__ cudaError_t  cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphicsUnregisterResource.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphicsUnregisterResource called \n");
 	ret = orig_cudaGraphicsUnregisterResource(resource);
 	fprintf(fp, ">>>>>>>> cudaGraphicsUnregisterResource returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphicsResourceSetMapFlags)(cudaGraphicsResource_t resource, unsigned int flags) = NULL;

__host__ cudaError_t  cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphicsResourceSetMapFlags.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphicsResourceSetMapFlags called \n");
 	ret = orig_cudaGraphicsResourceSetMapFlags(resource, flags);
 	fprintf(fp, ">>>>>>>> cudaGraphicsResourceSetMapFlags returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphicsMapResources)(int count, cudaGraphicsResource_t *resources, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaGraphicsMapResources(int count, cudaGraphicsResource_t *resources, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphicsMapResources.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphicsMapResources called \n");
 	ret = orig_cudaGraphicsMapResources(count, resources, stream);
 	fprintf(fp, ">>>>>>>> cudaGraphicsMapResources returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphicsUnmapResources)(int count, cudaGraphicsResource_t *resources, cudaStream_t stream ) = NULL;

__host__ cudaError_t  cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t *resources, cudaStream_t stream ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphicsUnmapResources.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphicsUnmapResources called \n");
 	ret = orig_cudaGraphicsUnmapResources(count, resources, stream);
 	fprintf(fp, ">>>>>>>> cudaGraphicsUnmapResources returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphicsResourceGetMappedPointer)(void **devPtr, size_t *size, cudaGraphicsResource_t resource) = NULL;

__host__ cudaError_t  cudaGraphicsResourceGetMappedPointer(void **devPtr, size_t *size, cudaGraphicsResource_t resource) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphicsResourceGetMappedPointer.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphicsResourceGetMappedPointer called \n");
 	ret = orig_cudaGraphicsResourceGetMappedPointer(devPtr, size, resource);
 	fprintf(fp, ">>>>>>>> cudaGraphicsResourceGetMappedPointer returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphicsSubResourceGetMappedArray)(cudaArray_t *array, cudaGraphicsResource_t resource, unsigned int arrayIndex, unsigned int mipLevel) = NULL;

__host__ cudaError_t  cudaGraphicsSubResourceGetMappedArray(cudaArray_t *array, cudaGraphicsResource_t resource, unsigned int arrayIndex, unsigned int mipLevel) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphicsSubResourceGetMappedArray.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphicsSubResourceGetMappedArray called \n");
 	ret = orig_cudaGraphicsSubResourceGetMappedArray(array, resource, arrayIndex, mipLevel);
 	fprintf(fp, ">>>>>>>> cudaGraphicsSubResourceGetMappedArray returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphicsResourceGetMappedMipmappedArray)(cudaMipmappedArray_t *mipmappedArray, cudaGraphicsResource_t resource) = NULL;

__host__ cudaError_t  cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t *mipmappedArray, cudaGraphicsResource_t resource) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphicsResourceGetMappedMipmappedArray.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphicsResourceGetMappedMipmappedArray called \n");
 	ret = orig_cudaGraphicsResourceGetMappedMipmappedArray(mipmappedArray, resource);
 	fprintf(fp, ">>>>>>>> cudaGraphicsResourceGetMappedMipmappedArray returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetChannelDesc)(struct cudaChannelFormatDesc *desc, cudaArray_const_t array) = NULL;

__host__ cudaError_t  cudaGetChannelDesc(struct cudaChannelFormatDesc *desc, cudaArray_const_t array) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetChannelDesc.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetChannelDesc called \n");
 	ret = orig_cudaGetChannelDesc(desc, array);
 	fprintf(fp, ">>>>>>>> cudaGetChannelDesc returned\n");
 	return ret;

}

static __host__ struct cudaChannelFormatDesc  (*orig_cudaCreateChannelDesc)(int x, int y, int z, int w, enum cudaChannelFormatKind f) = NULL;

__host__ struct cudaChannelFormatDesc  cudaCreateChannelDesc(int x, int y, int z, int w, enum cudaChannelFormatKind f) {
    	struct cudaChannelFormatDesc ret;
 	// Write your own custom c code in the cudaCreateChannelDesc.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaCreateChannelDesc called \n");
 	ret = orig_cudaCreateChannelDesc(x, y, z, w, f);
 	fprintf(fp, ">>>>>>>> cudaCreateChannelDesc returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaCreateTextureObject)(cudaTextureObject_t *pTexObject, const struct cudaResourceDesc *pResDesc, const struct cudaTextureDesc *pTexDesc, const struct cudaResourceViewDesc *pResViewDesc) = NULL;

__host__ cudaError_t  cudaCreateTextureObject(cudaTextureObject_t *pTexObject, const struct cudaResourceDesc *pResDesc, const struct cudaTextureDesc *pTexDesc, const struct cudaResourceViewDesc *pResViewDesc) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaCreateTextureObject.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaCreateTextureObject called \n");
 	ret = orig_cudaCreateTextureObject(pTexObject, pResDesc, pTexDesc, pResViewDesc);
 	fprintf(fp, ">>>>>>>> cudaCreateTextureObject returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDestroyTextureObject)(cudaTextureObject_t texObject) = NULL;

__host__ cudaError_t  cudaDestroyTextureObject(cudaTextureObject_t texObject) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDestroyTextureObject.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDestroyTextureObject called \n");
 	ret = orig_cudaDestroyTextureObject(texObject);
 	fprintf(fp, ">>>>>>>> cudaDestroyTextureObject returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetTextureObjectResourceDesc)(struct cudaResourceDesc *pResDesc, cudaTextureObject_t texObject) = NULL;

__host__ cudaError_t  cudaGetTextureObjectResourceDesc(struct cudaResourceDesc *pResDesc, cudaTextureObject_t texObject) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetTextureObjectResourceDesc.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetTextureObjectResourceDesc called \n");
 	ret = orig_cudaGetTextureObjectResourceDesc(pResDesc, texObject);
 	fprintf(fp, ">>>>>>>> cudaGetTextureObjectResourceDesc returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetTextureObjectTextureDesc)(struct cudaTextureDesc *pTexDesc, cudaTextureObject_t texObject) = NULL;

__host__ cudaError_t  cudaGetTextureObjectTextureDesc(struct cudaTextureDesc *pTexDesc, cudaTextureObject_t texObject) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetTextureObjectTextureDesc.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetTextureObjectTextureDesc called \n");
 	ret = orig_cudaGetTextureObjectTextureDesc(pTexDesc, texObject);
 	fprintf(fp, ">>>>>>>> cudaGetTextureObjectTextureDesc returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetTextureObjectResourceViewDesc)(struct cudaResourceViewDesc *pResViewDesc, cudaTextureObject_t texObject) = NULL;

__host__ cudaError_t  cudaGetTextureObjectResourceViewDesc(struct cudaResourceViewDesc *pResViewDesc, cudaTextureObject_t texObject) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetTextureObjectResourceViewDesc.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetTextureObjectResourceViewDesc called \n");
 	ret = orig_cudaGetTextureObjectResourceViewDesc(pResViewDesc, texObject);
 	fprintf(fp, ">>>>>>>> cudaGetTextureObjectResourceViewDesc returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaCreateSurfaceObject)(cudaSurfaceObject_t *pSurfObject, const struct cudaResourceDesc *pResDesc) = NULL;

__host__ cudaError_t  cudaCreateSurfaceObject(cudaSurfaceObject_t *pSurfObject, const struct cudaResourceDesc *pResDesc) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaCreateSurfaceObject.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaCreateSurfaceObject called \n");
 	ret = orig_cudaCreateSurfaceObject(pSurfObject, pResDesc);
 	fprintf(fp, ">>>>>>>> cudaCreateSurfaceObject returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDestroySurfaceObject)(cudaSurfaceObject_t surfObject) = NULL;

__host__ cudaError_t  cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDestroySurfaceObject.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDestroySurfaceObject called \n");
 	ret = orig_cudaDestroySurfaceObject(surfObject);
 	fprintf(fp, ">>>>>>>> cudaDestroySurfaceObject returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetSurfaceObjectResourceDesc)(struct cudaResourceDesc *pResDesc, cudaSurfaceObject_t surfObject) = NULL;

__host__ cudaError_t  cudaGetSurfaceObjectResourceDesc(struct cudaResourceDesc *pResDesc, cudaSurfaceObject_t surfObject) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetSurfaceObjectResourceDesc.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetSurfaceObjectResourceDesc called \n");
 	ret = orig_cudaGetSurfaceObjectResourceDesc(pResDesc, surfObject);
 	fprintf(fp, ">>>>>>>> cudaGetSurfaceObjectResourceDesc returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDriverGetVersion)(int *driverVersion) = NULL;

__host__ cudaError_t  cudaDriverGetVersion(int *driverVersion) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDriverGetVersion.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDriverGetVersion called \n");
 	ret = orig_cudaDriverGetVersion(driverVersion);
 	fprintf(fp, ">>>>>>>> cudaDriverGetVersion returned\n");
 	return ret;

}

static __host__ __cudart_builtin__ cudaError_t  (*orig_cudaRuntimeGetVersion)(int *runtimeVersion) = NULL;

__host__ __cudart_builtin__ cudaError_t  cudaRuntimeGetVersion(int *runtimeVersion) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaRuntimeGetVersion.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaRuntimeGetVersion called \n");
 	ret = orig_cudaRuntimeGetVersion(runtimeVersion);
 	fprintf(fp, ">>>>>>>> cudaRuntimeGetVersion returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphCreate)(cudaGraph_t *pGraph, unsigned int flags) = NULL;

__host__ cudaError_t  cudaGraphCreate(cudaGraph_t *pGraph, unsigned int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphCreate.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphCreate called \n");
 	ret = orig_cudaGraphCreate(pGraph, flags);
 	fprintf(fp, ">>>>>>>> cudaGraphCreate returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddKernelNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaKernelNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphAddKernelNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaKernelNodeParams *pNodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphAddKernelNode.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphAddKernelNode called \n");
 	ret = orig_cudaGraphAddKernelNode(pGraphNode, graph, pDependencies, numDependencies, pNodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphAddKernelNode returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphKernelNodeGetParams)(cudaGraphNode_t node, struct cudaKernelNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphKernelNodeGetParams(cudaGraphNode_t node, struct cudaKernelNodeParams *pNodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphKernelNodeGetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeGetParams called \n");
 	ret = orig_cudaGraphKernelNodeGetParams(node, pNodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeGetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphKernelNodeSetParams)(cudaGraphNode_t node, const struct cudaKernelNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphKernelNodeSetParams(cudaGraphNode_t node, const struct cudaKernelNodeParams *pNodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphKernelNodeSetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeSetParams called \n");
 	ret = orig_cudaGraphKernelNodeSetParams(node, pNodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeSetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphKernelNodeCopyAttributes)(        cudaGraphNode_t hSrc,        cudaGraphNode_t hDst) = NULL;

__host__ cudaError_t  cudaGraphKernelNodeCopyAttributes(        cudaGraphNode_t hSrc,        cudaGraphNode_t hDst) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphKernelNodeCopyAttributes.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeCopyAttributes called \n");
 	ret = orig_cudaGraphKernelNodeCopyAttributes(hSrc, hDst);
 	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeCopyAttributes returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphKernelNodeGetAttribute)(    cudaGraphNode_t hNode,    cudaKernelNodeAttrID attr,    cudaKernelNodeAttrValue *value_out) = NULL;

__host__ cudaError_t  cudaGraphKernelNodeGetAttribute(    cudaGraphNode_t hNode,    cudaKernelNodeAttrID attr,    cudaKernelNodeAttrValue *value_out) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphKernelNodeGetAttribute.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeGetAttribute called \n");
 	ret = orig_cudaGraphKernelNodeGetAttribute(hNode, attr, value_out);
 	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeGetAttribute returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphKernelNodeSetAttribute)(    cudaGraphNode_t hNode,    cudaKernelNodeAttrID attr,    const cudaKernelNodeAttrValue *value) = NULL;

__host__ cudaError_t  cudaGraphKernelNodeSetAttribute(    cudaGraphNode_t hNode,    cudaKernelNodeAttrID attr,    const cudaKernelNodeAttrValue *value) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphKernelNodeSetAttribute.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeSetAttribute called \n");
 	ret = orig_cudaGraphKernelNodeSetAttribute(hNode, attr, value);
 	fprintf(fp, ">>>>>>>> cudaGraphKernelNodeSetAttribute returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddMemcpyNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaMemcpy3DParms *pCopyParams) = NULL;

__host__ cudaError_t  cudaGraphAddMemcpyNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaMemcpy3DParms *pCopyParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphAddMemcpyNode.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphAddMemcpyNode called \n");
 	ret = orig_cudaGraphAddMemcpyNode(pGraphNode, graph, pDependencies, numDependencies, pCopyParams);
 	fprintf(fp, ">>>>>>>> cudaGraphAddMemcpyNode returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphMemcpyNodeGetParams)(cudaGraphNode_t node, struct cudaMemcpy3DParms *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node, struct cudaMemcpy3DParms *pNodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphMemcpyNodeGetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphMemcpyNodeGetParams called \n");
 	ret = orig_cudaGraphMemcpyNodeGetParams(node, pNodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphMemcpyNodeGetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphMemcpyNodeSetParams)(cudaGraphNode_t node, const struct cudaMemcpy3DParms *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node, const struct cudaMemcpy3DParms *pNodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphMemcpyNodeSetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphMemcpyNodeSetParams called \n");
 	ret = orig_cudaGraphMemcpyNodeSetParams(node, pNodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphMemcpyNodeSetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddMemsetNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaMemsetParams *pMemsetParams) = NULL;

__host__ cudaError_t  cudaGraphAddMemsetNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaMemsetParams *pMemsetParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphAddMemsetNode.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphAddMemsetNode called \n");
 	ret = orig_cudaGraphAddMemsetNode(pGraphNode, graph, pDependencies, numDependencies, pMemsetParams);
 	fprintf(fp, ">>>>>>>> cudaGraphAddMemsetNode returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphMemsetNodeGetParams)(cudaGraphNode_t node, struct cudaMemsetParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphMemsetNodeGetParams(cudaGraphNode_t node, struct cudaMemsetParams *pNodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphMemsetNodeGetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphMemsetNodeGetParams called \n");
 	ret = orig_cudaGraphMemsetNodeGetParams(node, pNodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphMemsetNodeGetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphMemsetNodeSetParams)(cudaGraphNode_t node, const struct cudaMemsetParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphMemsetNodeSetParams(cudaGraphNode_t node, const struct cudaMemsetParams *pNodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphMemsetNodeSetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphMemsetNodeSetParams called \n");
 	ret = orig_cudaGraphMemsetNodeSetParams(node, pNodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphMemsetNodeSetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddHostNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaHostNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphAddHostNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaHostNodeParams *pNodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphAddHostNode.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphAddHostNode called \n");
 	ret = orig_cudaGraphAddHostNode(pGraphNode, graph, pDependencies, numDependencies, pNodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphAddHostNode returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphHostNodeGetParams)(cudaGraphNode_t node, struct cudaHostNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphHostNodeGetParams(cudaGraphNode_t node, struct cudaHostNodeParams *pNodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphHostNodeGetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphHostNodeGetParams called \n");
 	ret = orig_cudaGraphHostNodeGetParams(node, pNodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphHostNodeGetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphHostNodeSetParams)(cudaGraphNode_t node, const struct cudaHostNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphHostNodeSetParams(cudaGraphNode_t node, const struct cudaHostNodeParams *pNodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphHostNodeSetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphHostNodeSetParams called \n");
 	ret = orig_cudaGraphHostNodeSetParams(node, pNodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphHostNodeSetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddChildGraphNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, cudaGraph_t childGraph) = NULL;

__host__ cudaError_t  cudaGraphAddChildGraphNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, cudaGraph_t childGraph) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphAddChildGraphNode.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphAddChildGraphNode called \n");
 	ret = orig_cudaGraphAddChildGraphNode(pGraphNode, graph, pDependencies, numDependencies, childGraph);
 	fprintf(fp, ">>>>>>>> cudaGraphAddChildGraphNode returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphChildGraphNodeGetGraph)(cudaGraphNode_t node, cudaGraph_t *pGraph) = NULL;

__host__ cudaError_t  cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t *pGraph) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphChildGraphNodeGetGraph.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphChildGraphNodeGetGraph called \n");
 	ret = orig_cudaGraphChildGraphNodeGetGraph(node, pGraph);
 	fprintf(fp, ">>>>>>>> cudaGraphChildGraphNodeGetGraph returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddEmptyNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies) = NULL;

__host__ cudaError_t  cudaGraphAddEmptyNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphAddEmptyNode.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphAddEmptyNode called \n");
 	ret = orig_cudaGraphAddEmptyNode(pGraphNode, graph, pDependencies, numDependencies);
 	fprintf(fp, ">>>>>>>> cudaGraphAddEmptyNode returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddExternalSemaphoresSignalNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphAddExternalSemaphoresSignalNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphAddExternalSemaphoresSignalNode.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphAddExternalSemaphoresSignalNode called \n");
 	ret = orig_cudaGraphAddExternalSemaphoresSignalNode(pGraphNode, graph, pDependencies, numDependencies, nodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphAddExternalSemaphoresSignalNode returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExternalSemaphoresSignalNodeGetParams)(cudaGraphNode_t hNode, struct cudaExternalSemaphoreSignalNodeParams *params_out) = NULL;

__host__ cudaError_t  cudaGraphExternalSemaphoresSignalNodeGetParams(cudaGraphNode_t hNode, struct cudaExternalSemaphoreSignalNodeParams *params_out) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphExternalSemaphoresSignalNodeGetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeGetParams called \n");
 	ret = orig_cudaGraphExternalSemaphoresSignalNodeGetParams(hNode, params_out);
 	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeGetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExternalSemaphoresSignalNodeSetParams)(cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphExternalSemaphoresSignalNodeSetParams(cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphExternalSemaphoresSignalNodeSetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeSetParams called \n");
 	ret = orig_cudaGraphExternalSemaphoresSignalNodeSetParams(hNode, nodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeSetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddExternalSemaphoresWaitNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphAddExternalSemaphoresWaitNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphAddExternalSemaphoresWaitNode.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphAddExternalSemaphoresWaitNode called \n");
 	ret = orig_cudaGraphAddExternalSemaphoresWaitNode(pGraphNode, graph, pDependencies, numDependencies, nodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphAddExternalSemaphoresWaitNode returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExternalSemaphoresWaitNodeGetParams)(cudaGraphNode_t hNode, struct cudaExternalSemaphoreWaitNodeParams *params_out) = NULL;

__host__ cudaError_t  cudaGraphExternalSemaphoresWaitNodeGetParams(cudaGraphNode_t hNode, struct cudaExternalSemaphoreWaitNodeParams *params_out) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphExternalSemaphoresWaitNodeGetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeGetParams called \n");
 	ret = orig_cudaGraphExternalSemaphoresWaitNodeGetParams(hNode, params_out);
 	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeGetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExternalSemaphoresWaitNodeSetParams)(cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphExternalSemaphoresWaitNodeSetParams(cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphExternalSemaphoresWaitNodeSetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeSetParams called \n");
 	ret = orig_cudaGraphExternalSemaphoresWaitNodeSetParams(hNode, nodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeSetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddMemAllocNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, struct cudaMemAllocNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphAddMemAllocNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, struct cudaMemAllocNodeParams *nodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphAddMemAllocNode.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphAddMemAllocNode called \n");
 	ret = orig_cudaGraphAddMemAllocNode(pGraphNode, graph, pDependencies, numDependencies, nodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphAddMemAllocNode returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphMemAllocNodeGetParams)(cudaGraphNode_t node, struct cudaMemAllocNodeParams *params_out) = NULL;

__host__ cudaError_t  cudaGraphMemAllocNodeGetParams(cudaGraphNode_t node, struct cudaMemAllocNodeParams *params_out) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphMemAllocNodeGetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphMemAllocNodeGetParams called \n");
 	ret = orig_cudaGraphMemAllocNodeGetParams(node, params_out);
 	fprintf(fp, ">>>>>>>> cudaGraphMemAllocNodeGetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddMemFreeNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, void *dptr) = NULL;

__host__ cudaError_t  cudaGraphAddMemFreeNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, void *dptr) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphAddMemFreeNode.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphAddMemFreeNode called \n");
 	ret = orig_cudaGraphAddMemFreeNode(pGraphNode, graph, pDependencies, numDependencies, dptr);
 	fprintf(fp, ">>>>>>>> cudaGraphAddMemFreeNode returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphMemFreeNodeGetParams)(cudaGraphNode_t node, void *dptr_out) = NULL;

__host__ cudaError_t  cudaGraphMemFreeNodeGetParams(cudaGraphNode_t node, void *dptr_out) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphMemFreeNodeGetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphMemFreeNodeGetParams called \n");
 	ret = orig_cudaGraphMemFreeNodeGetParams(node, dptr_out);
 	fprintf(fp, ">>>>>>>> cudaGraphMemFreeNodeGetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceGraphMemTrim)(int device) = NULL;

__host__ cudaError_t  cudaDeviceGraphMemTrim(int device) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceGraphMemTrim.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceGraphMemTrim called \n");
 	ret = orig_cudaDeviceGraphMemTrim(device);
 	fprintf(fp, ">>>>>>>> cudaDeviceGraphMemTrim returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceGetGraphMemAttribute)(int device, enum cudaGraphMemAttributeType attr, void* value) = NULL;

__host__ cudaError_t  cudaDeviceGetGraphMemAttribute(int device, enum cudaGraphMemAttributeType attr, void* value) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceGetGraphMemAttribute.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceGetGraphMemAttribute called \n");
 	ret = orig_cudaDeviceGetGraphMemAttribute(device, attr, value);
 	fprintf(fp, ">>>>>>>> cudaDeviceGetGraphMemAttribute returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaDeviceSetGraphMemAttribute)(int device, enum cudaGraphMemAttributeType attr, void* value) = NULL;

__host__ cudaError_t  cudaDeviceSetGraphMemAttribute(int device, enum cudaGraphMemAttributeType attr, void* value) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaDeviceSetGraphMemAttribute.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaDeviceSetGraphMemAttribute called \n");
 	ret = orig_cudaDeviceSetGraphMemAttribute(device, attr, value);
 	fprintf(fp, ">>>>>>>> cudaDeviceSetGraphMemAttribute returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphClone)(cudaGraph_t *pGraphClone, cudaGraph_t originalGraph) = NULL;

__host__ cudaError_t  cudaGraphClone(cudaGraph_t *pGraphClone, cudaGraph_t originalGraph) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphClone.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphClone called \n");
 	ret = orig_cudaGraphClone(pGraphClone, originalGraph);
 	fprintf(fp, ">>>>>>>> cudaGraphClone returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeFindInClone)(cudaGraphNode_t *pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph) = NULL;

__host__ cudaError_t  cudaGraphNodeFindInClone(cudaGraphNode_t *pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphNodeFindInClone.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphNodeFindInClone called \n");
 	ret = orig_cudaGraphNodeFindInClone(pNode, originalNode, clonedGraph);
 	fprintf(fp, ">>>>>>>> cudaGraphNodeFindInClone returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeGetType)(cudaGraphNode_t node, enum cudaGraphNodeType *pType) = NULL;

__host__ cudaError_t  cudaGraphNodeGetType(cudaGraphNode_t node, enum cudaGraphNodeType *pType) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphNodeGetType.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphNodeGetType called \n");
 	ret = orig_cudaGraphNodeGetType(node, pType);
 	fprintf(fp, ">>>>>>>> cudaGraphNodeGetType returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphGetNodes)(cudaGraph_t graph, cudaGraphNode_t *nodes, size_t *numNodes) = NULL;

__host__ cudaError_t  cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t *nodes, size_t *numNodes) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphGetNodes.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphGetNodes called \n");
 	ret = orig_cudaGraphGetNodes(graph, nodes, numNodes);
 	fprintf(fp, ">>>>>>>> cudaGraphGetNodes returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphGetRootNodes)(cudaGraph_t graph, cudaGraphNode_t *pRootNodes, size_t *pNumRootNodes) = NULL;

__host__ cudaError_t  cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t *pRootNodes, size_t *pNumRootNodes) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphGetRootNodes.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphGetRootNodes called \n");
 	ret = orig_cudaGraphGetRootNodes(graph, pRootNodes, pNumRootNodes);
 	fprintf(fp, ">>>>>>>> cudaGraphGetRootNodes returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphGetEdges)(cudaGraph_t graph, cudaGraphNode_t *from, cudaGraphNode_t *to, size_t *numEdges) = NULL;

__host__ cudaError_t  cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t *from, cudaGraphNode_t *to, size_t *numEdges) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphGetEdges.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphGetEdges called \n");
 	ret = orig_cudaGraphGetEdges(graph, from, to, numEdges);
 	fprintf(fp, ">>>>>>>> cudaGraphGetEdges returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphGetEdges_v2)(cudaGraph_t graph, cudaGraphNode_t *from, cudaGraphNode_t *to, cudaGraphEdgeData *edgeData, size_t *numEdges) = NULL;

__host__ cudaError_t  cudaGraphGetEdges_v2(cudaGraph_t graph, cudaGraphNode_t *from, cudaGraphNode_t *to, cudaGraphEdgeData *edgeData, size_t *numEdges) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphGetEdges_v2.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphGetEdges_v2 called \n");
 	ret = orig_cudaGraphGetEdges_v2(graph, from, to, edgeData, numEdges);
 	fprintf(fp, ">>>>>>>> cudaGraphGetEdges_v2 returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeGetDependencies)(cudaGraphNode_t node, cudaGraphNode_t *pDependencies, size_t *pNumDependencies) = NULL;

__host__ cudaError_t  cudaGraphNodeGetDependencies(cudaGraphNode_t node, cudaGraphNode_t *pDependencies, size_t *pNumDependencies) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphNodeGetDependencies.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependencies called \n");
 	ret = orig_cudaGraphNodeGetDependencies(node, pDependencies, pNumDependencies);
 	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependencies returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeGetDependencies_v2)(cudaGraphNode_t node, cudaGraphNode_t *pDependencies, cudaGraphEdgeData *edgeData, size_t *pNumDependencies) = NULL;

__host__ cudaError_t  cudaGraphNodeGetDependencies_v2(cudaGraphNode_t node, cudaGraphNode_t *pDependencies, cudaGraphEdgeData *edgeData, size_t *pNumDependencies) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphNodeGetDependencies_v2.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependencies_v2 called \n");
 	ret = orig_cudaGraphNodeGetDependencies_v2(node, pDependencies, edgeData, pNumDependencies);
 	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependencies_v2 returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeGetDependentNodes)(cudaGraphNode_t node, cudaGraphNode_t *pDependentNodes, size_t *pNumDependentNodes) = NULL;

__host__ cudaError_t  cudaGraphNodeGetDependentNodes(cudaGraphNode_t node, cudaGraphNode_t *pDependentNodes, size_t *pNumDependentNodes) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphNodeGetDependentNodes.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependentNodes called \n");
 	ret = orig_cudaGraphNodeGetDependentNodes(node, pDependentNodes, pNumDependentNodes);
 	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependentNodes returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeGetDependentNodes_v2)(cudaGraphNode_t node, cudaGraphNode_t *pDependentNodes, cudaGraphEdgeData *edgeData, size_t *pNumDependentNodes) = NULL;

__host__ cudaError_t  cudaGraphNodeGetDependentNodes_v2(cudaGraphNode_t node, cudaGraphNode_t *pDependentNodes, cudaGraphEdgeData *edgeData, size_t *pNumDependentNodes) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphNodeGetDependentNodes_v2.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependentNodes_v2 called \n");
 	ret = orig_cudaGraphNodeGetDependentNodes_v2(node, pDependentNodes, edgeData, pNumDependentNodes);
 	fprintf(fp, ">>>>>>>> cudaGraphNodeGetDependentNodes_v2 returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddDependencies)(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, size_t numDependencies) = NULL;

__host__ cudaError_t  cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, size_t numDependencies) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphAddDependencies.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphAddDependencies called \n");
 	ret = orig_cudaGraphAddDependencies(graph, from, to, numDependencies);
 	fprintf(fp, ">>>>>>>> cudaGraphAddDependencies returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddDependencies_v2)(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, const cudaGraphEdgeData *edgeData, size_t numDependencies) = NULL;

__host__ cudaError_t  cudaGraphAddDependencies_v2(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, const cudaGraphEdgeData *edgeData, size_t numDependencies) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphAddDependencies_v2.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphAddDependencies_v2 called \n");
 	ret = orig_cudaGraphAddDependencies_v2(graph, from, to, edgeData, numDependencies);
 	fprintf(fp, ">>>>>>>> cudaGraphAddDependencies_v2 returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphRemoveDependencies)(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, size_t numDependencies) = NULL;

__host__ cudaError_t  cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, size_t numDependencies) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphRemoveDependencies.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphRemoveDependencies called \n");
 	ret = orig_cudaGraphRemoveDependencies(graph, from, to, numDependencies);
 	fprintf(fp, ">>>>>>>> cudaGraphRemoveDependencies returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphRemoveDependencies_v2)(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, const cudaGraphEdgeData *edgeData, size_t numDependencies) = NULL;

__host__ cudaError_t  cudaGraphRemoveDependencies_v2(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, const cudaGraphEdgeData *edgeData, size_t numDependencies) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphRemoveDependencies_v2.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphRemoveDependencies_v2 called \n");
 	ret = orig_cudaGraphRemoveDependencies_v2(graph, from, to, edgeData, numDependencies);
 	fprintf(fp, ">>>>>>>> cudaGraphRemoveDependencies_v2 returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphDestroyNode)(cudaGraphNode_t node) = NULL;

__host__ cudaError_t  cudaGraphDestroyNode(cudaGraphNode_t node) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphDestroyNode.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphDestroyNode called \n");
 	ret = orig_cudaGraphDestroyNode(node);
 	fprintf(fp, ">>>>>>>> cudaGraphDestroyNode returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphInstantiate)(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, unsigned long long flags ) = NULL;

__host__ cudaError_t  cudaGraphInstantiate(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, unsigned long long flags ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphInstantiate.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphInstantiate called \n");
 	ret = orig_cudaGraphInstantiate(pGraphExec, graph, flags);
 	fprintf(fp, ">>>>>>>> cudaGraphInstantiate returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphInstantiateWithFlags)(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, unsigned long long flags ) = NULL;

__host__ cudaError_t  cudaGraphInstantiateWithFlags(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, unsigned long long flags ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphInstantiateWithFlags.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphInstantiateWithFlags called \n");
 	ret = orig_cudaGraphInstantiateWithFlags(pGraphExec, graph, flags);
 	fprintf(fp, ">>>>>>>> cudaGraphInstantiateWithFlags returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphInstantiateWithParams)(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, cudaGraphInstantiateParams *instantiateParams) = NULL;

__host__ cudaError_t  cudaGraphInstantiateWithParams(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, cudaGraphInstantiateParams *instantiateParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphInstantiateWithParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphInstantiateWithParams called \n");
 	ret = orig_cudaGraphInstantiateWithParams(pGraphExec, graph, instantiateParams);
 	fprintf(fp, ">>>>>>>> cudaGraphInstantiateWithParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecGetFlags)(cudaGraphExec_t graphExec, unsigned long long *flags) = NULL;

__host__ cudaError_t  cudaGraphExecGetFlags(cudaGraphExec_t graphExec, unsigned long long *flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphExecGetFlags.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphExecGetFlags called \n");
 	ret = orig_cudaGraphExecGetFlags(graphExec, flags);
 	fprintf(fp, ">>>>>>>> cudaGraphExecGetFlags returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecKernelNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaKernelNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphExecKernelNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaKernelNodeParams *pNodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphExecKernelNodeSetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphExecKernelNodeSetParams called \n");
 	ret = orig_cudaGraphExecKernelNodeSetParams(hGraphExec, node, pNodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphExecKernelNodeSetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecMemcpyNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaMemcpy3DParms *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphExecMemcpyNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaMemcpy3DParms *pNodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphExecMemcpyNodeSetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphExecMemcpyNodeSetParams called \n");
 	ret = orig_cudaGraphExecMemcpyNodeSetParams(hGraphExec, node, pNodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphExecMemcpyNodeSetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecMemsetNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaMemsetParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphExecMemsetNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaMemsetParams *pNodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphExecMemsetNodeSetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphExecMemsetNodeSetParams called \n");
 	ret = orig_cudaGraphExecMemsetNodeSetParams(hGraphExec, node, pNodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphExecMemsetNodeSetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecHostNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaHostNodeParams *pNodeParams) = NULL;

__host__ cudaError_t  cudaGraphExecHostNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaHostNodeParams *pNodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphExecHostNodeSetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphExecHostNodeSetParams called \n");
 	ret = orig_cudaGraphExecHostNodeSetParams(hGraphExec, node, pNodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphExecHostNodeSetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecExternalSemaphoresSignalNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphExecExternalSemaphoresSignalNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphExecExternalSemaphoresSignalNodeSetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphExecExternalSemaphoresSignalNodeSetParams called \n");
 	ret = orig_cudaGraphExecExternalSemaphoresSignalNodeSetParams(hGraphExec, hNode, nodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphExecExternalSemaphoresSignalNodeSetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecExternalSemaphoresWaitNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphExecExternalSemaphoresWaitNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphExecExternalSemaphoresWaitNodeSetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphExecExternalSemaphoresWaitNodeSetParams called \n");
 	ret = orig_cudaGraphExecExternalSemaphoresWaitNodeSetParams(hGraphExec, hNode, nodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphExecExternalSemaphoresWaitNodeSetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeSetEnabled)(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned int isEnabled) = NULL;

__host__ cudaError_t  cudaGraphNodeSetEnabled(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned int isEnabled) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphNodeSetEnabled.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphNodeSetEnabled called \n");
 	ret = orig_cudaGraphNodeSetEnabled(hGraphExec, hNode, isEnabled);
 	fprintf(fp, ">>>>>>>> cudaGraphNodeSetEnabled returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeGetEnabled)(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned int *isEnabled) = NULL;

__host__ cudaError_t  cudaGraphNodeGetEnabled(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned int *isEnabled) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphNodeGetEnabled.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphNodeGetEnabled called \n");
 	ret = orig_cudaGraphNodeGetEnabled(hGraphExec, hNode, isEnabled);
 	fprintf(fp, ">>>>>>>> cudaGraphNodeGetEnabled returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecUpdate)(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphExecUpdateResultInfo *resultInfo) = NULL;

__host__ cudaError_t  cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphExecUpdateResultInfo *resultInfo) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphExecUpdate.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphExecUpdate called \n");
 	ret = orig_cudaGraphExecUpdate(hGraphExec, hGraph, resultInfo);
 	fprintf(fp, ">>>>>>>> cudaGraphExecUpdate returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphLaunch)(cudaGraphExec_t graphExec, cudaStream_t stream) = NULL;

__host__ cudaError_t  cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphLaunch.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphLaunch called \n");
 	ret = orig_cudaGraphLaunch(graphExec, stream);
 	fprintf(fp, ">>>>>>>> cudaGraphLaunch returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecDestroy)(cudaGraphExec_t graphExec) = NULL;

__host__ cudaError_t  cudaGraphExecDestroy(cudaGraphExec_t graphExec) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphExecDestroy.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphExecDestroy called \n");
 	ret = orig_cudaGraphExecDestroy(graphExec);
 	fprintf(fp, ">>>>>>>> cudaGraphExecDestroy returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphDestroy)(cudaGraph_t graph) = NULL;

__host__ cudaError_t  cudaGraphDestroy(cudaGraph_t graph) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphDestroy.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphDestroy called \n");
 	ret = orig_cudaGraphDestroy(graph);
 	fprintf(fp, ">>>>>>>> cudaGraphDestroy returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphDebugDotPrint)(cudaGraph_t graph, const char *path, unsigned int flags) = NULL;

__host__ cudaError_t  cudaGraphDebugDotPrint(cudaGraph_t graph, const char *path, unsigned int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphDebugDotPrint.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphDebugDotPrint called \n");
 	ret = orig_cudaGraphDebugDotPrint(graph, path, flags);
 	fprintf(fp, ">>>>>>>> cudaGraphDebugDotPrint returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaUserObjectCreate)(cudaUserObject_t *object_out, void *ptr, cudaHostFn_t destroy, unsigned int initialRefcount, unsigned int flags) = NULL;

__host__ cudaError_t  cudaUserObjectCreate(cudaUserObject_t *object_out, void *ptr, cudaHostFn_t destroy, unsigned int initialRefcount, unsigned int flags) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaUserObjectCreate.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaUserObjectCreate called \n");
 	ret = orig_cudaUserObjectCreate(object_out, ptr, destroy, initialRefcount, flags);
 	fprintf(fp, ">>>>>>>> cudaUserObjectCreate returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaUserObjectRetain)(cudaUserObject_t object, unsigned int count ) = NULL;

__host__ cudaError_t  cudaUserObjectRetain(cudaUserObject_t object, unsigned int count ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaUserObjectRetain.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaUserObjectRetain called \n");
 	ret = orig_cudaUserObjectRetain(object, count);
 	fprintf(fp, ">>>>>>>> cudaUserObjectRetain returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaUserObjectRelease)(cudaUserObject_t object, unsigned int count ) = NULL;

__host__ cudaError_t  cudaUserObjectRelease(cudaUserObject_t object, unsigned int count ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaUserObjectRelease.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaUserObjectRelease called \n");
 	ret = orig_cudaUserObjectRelease(object, count);
 	fprintf(fp, ">>>>>>>> cudaUserObjectRelease returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphRetainUserObject)(cudaGraph_t graph, cudaUserObject_t object, unsigned int count , unsigned int flags ) = NULL;

__host__ cudaError_t  cudaGraphRetainUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned int count , unsigned int flags ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphRetainUserObject.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphRetainUserObject called \n");
 	ret = orig_cudaGraphRetainUserObject(graph, object, count, flags);
 	fprintf(fp, ">>>>>>>> cudaGraphRetainUserObject returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphReleaseUserObject)(cudaGraph_t graph, cudaUserObject_t object, unsigned int count ) = NULL;

__host__ cudaError_t  cudaGraphReleaseUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned int count ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphReleaseUserObject.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphReleaseUserObject called \n");
 	ret = orig_cudaGraphReleaseUserObject(graph, object, count);
 	fprintf(fp, ">>>>>>>> cudaGraphReleaseUserObject returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, struct cudaGraphNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphAddNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, struct cudaGraphNodeParams *nodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphAddNode.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphAddNode called \n");
 	ret = orig_cudaGraphAddNode(pGraphNode, graph, pDependencies, numDependencies, nodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphAddNode returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphAddNode_v2)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, struct cudaGraphNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphAddNode_v2(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, struct cudaGraphNodeParams *nodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphAddNode_v2.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphAddNode_v2 called \n");
 	ret = orig_cudaGraphAddNode_v2(pGraphNode, graph, pDependencies, dependencyData, numDependencies, nodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphAddNode_v2 returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphNodeSetParams)(cudaGraphNode_t node, struct cudaGraphNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphNodeSetParams(cudaGraphNode_t node, struct cudaGraphNodeParams *nodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphNodeSetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphNodeSetParams called \n");
 	ret = orig_cudaGraphNodeSetParams(node, nodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphNodeSetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphExecNodeSetParams)(cudaGraphExec_t graphExec, cudaGraphNode_t node, struct cudaGraphNodeParams *nodeParams) = NULL;

__host__ cudaError_t  cudaGraphExecNodeSetParams(cudaGraphExec_t graphExec, cudaGraphNode_t node, struct cudaGraphNodeParams *nodeParams) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphExecNodeSetParams.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphExecNodeSetParams called \n");
 	ret = orig_cudaGraphExecNodeSetParams(graphExec, node, nodeParams);
 	fprintf(fp, ">>>>>>>> cudaGraphExecNodeSetParams returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGraphConditionalHandleCreate)(cudaGraphConditionalHandle *pHandle_out, cudaGraph_t graph, unsigned int defaultLaunchValue , unsigned int flags ) = NULL;

__host__ cudaError_t  cudaGraphConditionalHandleCreate(cudaGraphConditionalHandle *pHandle_out, cudaGraph_t graph, unsigned int defaultLaunchValue , unsigned int flags ) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGraphConditionalHandleCreate.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGraphConditionalHandleCreate called \n");
 	ret = orig_cudaGraphConditionalHandleCreate(pHandle_out, graph, defaultLaunchValue, flags);
 	fprintf(fp, ">>>>>>>> cudaGraphConditionalHandleCreate returned\n");
 	return ret;

}

// static __host__ cudaError_t  (*orig_cudaGetDriverEntryPoint)(const char *symbol, void **funcPtr, unsigned long long flags, enum cudaDriverEntryPointQueryResult *driverStatus = NULL) = NULL;

// __host__ cudaError_t  cudaGetDriverEntryPoint(const char *symbol, void **funcPtr, unsigned long long flags, enum cudaDriverEntryPointQueryResult *driverStatus = NULL) {
    	// cudaError_t ret;
 	// Write your own custom c code in the cudaGetDriverEntryPoint.c file
 	// FILE *fp = fopen("Kernel_Log.txt", "a");
 	// fprintf(fp, ">>>>>>>> cudaGetDriverEntryPoint called \n");
 	// ret = orig_cudaGetDriverEntryPoint(symbol, funcPtr, flags, driverStatus);
 	// fprintf(fp, ">>>>>>>> cudaGetDriverEntryPoint returned\n");
 	// return ret;

// }

static __host__ cudaError_t  (*orig_cudaGetDriverEntryPoint)(const char *symbol, void **funcPtr, unsigned long long flags, enum cudaDriverEntryPointQueryResult *driverStatus) = NULL;

// __host__ cudaError_t  cudaGetDriverEntryPoint(const char *symbol, void **funcPtr, unsigned long long flags, enum cudaDriverEntryPointQueryResult *driverStatus) {
    	// cudaError_t ret;
 	// Write your own custom c code in the cudaGetDriverEntryPoint.c file
 	// FILE *fp = fopen("Kernel_Log.txt", "a");
 	// fprintf(fp, ">>>>>>>> cudaGetDriverEntryPoint called \n");
 	// ret = orig_cudaGetDriverEntryPoint(symbol, funcPtr, flags, driverStatus);
 	// fprintf(fp, ">>>>>>>> cudaGetDriverEntryPoint returned\n");
 	// return ret;

// }

static __host__ cudaError_t  (*orig_cudaGetExportTable)(const void **ppExportTable, const cudaUUID_t *pExportTableId) = NULL;

__host__ cudaError_t  cudaGetExportTable(const void **ppExportTable, const cudaUUID_t *pExportTableId) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetExportTable.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetExportTable called \n");
 	ret = orig_cudaGetExportTable(ppExportTable, pExportTableId);
 	fprintf(fp, ">>>>>>>> cudaGetExportTable returned\n");
 	return ret;

}

static __host__ cudaError_t (*orig_cudaGetFuncBySymbol)(cudaFunction_t* functionPtr, const void* symbolPtr) = NULL;

__host__ cudaError_t cudaGetFuncBySymbol(cudaFunction_t* functionPtr, const void* symbolPtr) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetFuncBySymbol.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetFuncBySymbol called \n");
 	ret = orig_cudaGetFuncBySymbol(functionPtr, symbolPtr);
 	fprintf(fp, ">>>>>>>> cudaGetFuncBySymbol returned\n");
 	return ret;

}

static __host__ cudaError_t  (*orig_cudaGetKernel)(cudaKernel_t *kernelPtr, const void *entryFuncAddr) = NULL;

__host__ cudaError_t  cudaGetKernel(cudaKernel_t *kernelPtr, const void *entryFuncAddr) {
    	cudaError_t ret;
 	// Write your own custom c code in the cudaGetKernel.c file
 	FILE *fp = fopen("Kernel_Log.txt", "a");
 	fprintf(fp, ">>>>>>>> cudaGetKernel called \n");
 	ret = orig_cudaGetKernel(kernelPtr, entryFuncAddr);
 	fprintf(fp, ">>>>>>>> cudaGetKernel returned\n");
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