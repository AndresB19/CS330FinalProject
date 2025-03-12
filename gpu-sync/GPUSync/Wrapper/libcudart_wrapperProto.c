
#define _GNU_SOURCE

#include <stdio.h>
#include <dlfcn.h>
#include <unistd.h>
#include "cuda_runtime_api.h"
#include "GPU_Locks.h"

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceReset)(void) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceReset(void) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceReset.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceReset called\n");
	ret = orig_cudaDeviceReset();
	fprintf(stderr, ">>>>>>>> cudaDeviceReset returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaDeviceSynchronize)(void) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaDeviceSynchronize(void) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceSynchronize.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceSynchronize called\n");
	ret = orig_cudaDeviceSynchronize();
	fprintf(stderr, ">>>>>>>> cudaDeviceSynchronize returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceSetLimit)(enum cudaLimit limit, size_t value) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceSetLimit(enum cudaLimit limit, size_t value) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceSetLimit.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceSetLimit called\n");
	ret = orig_cudaDeviceSetLimit(limit, value);
	fprintf(stderr, ">>>>>>>> cudaDeviceSetLimit returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaDeviceGetLimit)(size_t *pValue, enum cudaLimit limit) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaDeviceGetLimit(size_t *pValue, enum cudaLimit limit) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetLimit.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceGetLimit called\n");
	ret = orig_cudaDeviceGetLimit(pValue, limit);
	fprintf(stderr, ">>>>>>>> cudaDeviceGetLimit returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaDeviceGetCacheConfig)(enum cudaFuncCache *pCacheConfig) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaDeviceGetCacheConfig(enum cudaFuncCache *pCacheConfig) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetCacheConfig.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceGetCacheConfig called\n");
	ret = orig_cudaDeviceGetCacheConfig(pCacheConfig);
	fprintf(stderr, ">>>>>>>> cudaDeviceGetCacheConfig returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaDeviceGetStreamPriorityRange)(int *leastPriority, int *greatestPriority) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaDeviceGetStreamPriorityRange(int *leastPriority, int *greatestPriority) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetStreamPriorityRange.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceGetStreamPriorityRange called\n");
	ret = orig_cudaDeviceGetStreamPriorityRange(leastPriority, greatestPriority);
	fprintf(stderr, ">>>>>>>> cudaDeviceGetStreamPriorityRange returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceSetCacheConfig)(enum cudaFuncCache cacheConfig) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceSetCacheConfig(enum cudaFuncCache cacheConfig) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceSetCacheConfig.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceSetCacheConfig called\n");
	ret = orig_cudaDeviceSetCacheConfig(cacheConfig);
	fprintf(stderr, ">>>>>>>> cudaDeviceSetCacheConfig returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceGetByPCIBusId)(int *device, const char *pciBusId) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceGetByPCIBusId(int *device, const char *pciBusId) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetByPCIBusId.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceGetByPCIBusId called\n");
	ret = orig_cudaDeviceGetByPCIBusId(device, pciBusId);
	fprintf(stderr, ">>>>>>>> cudaDeviceGetByPCIBusId returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceGetPCIBusId)(char *pciBusId, int len, int device) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceGetPCIBusId(char *pciBusId, int len, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetPCIBusId.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceGetPCIBusId called\n");
	ret = orig_cudaDeviceGetPCIBusId(pciBusId, len, device);
	fprintf(stderr, ">>>>>>>> cudaDeviceGetPCIBusId returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaIpcGetEventHandle)(cudaIpcEventHandle_t *handle, cudaEvent_t event) = NULL;

__host__ cudaError_t CUDARTAPI cudaIpcGetEventHandle(cudaIpcEventHandle_t *handle, cudaEvent_t event) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaIpcGetEventHandle.c file
	fprintf(stderr, ">>>>>>>> cudaIpcGetEventHandle called\n");
	ret = orig_cudaIpcGetEventHandle(handle, event);
	fprintf(stderr, ">>>>>>>> cudaIpcGetEventHandle returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaIpcOpenEventHandle)(cudaEvent_t *event, cudaIpcEventHandle_t handle) = NULL;

__host__ cudaError_t CUDARTAPI cudaIpcOpenEventHandle(cudaEvent_t *event, cudaIpcEventHandle_t handle) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaIpcOpenEventHandle.c file
	fprintf(stderr, ">>>>>>>> cudaIpcOpenEventHandle called\n");
	ret = orig_cudaIpcOpenEventHandle(event, handle);
	fprintf(stderr, ">>>>>>>> cudaIpcOpenEventHandle returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaIpcGetMemHandle)(cudaIpcMemHandle_t *handle, void *devPtr) = NULL;

__host__ cudaError_t CUDARTAPI cudaIpcGetMemHandle(cudaIpcMemHandle_t *handle, void *devPtr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaIpcGetMemHandle.c file
	fprintf(stderr, ">>>>>>>> cudaIpcGetMemHandle called\n");
	ret = orig_cudaIpcGetMemHandle(handle, devPtr);
	fprintf(stderr, ">>>>>>>> cudaIpcGetMemHandle returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaIpcOpenMemHandle)(void **devPtr, cudaIpcMemHandle_t handle, unsigned int flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaIpcOpenMemHandle(void **devPtr, cudaIpcMemHandle_t handle, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaIpcOpenMemHandle.c file
	fprintf(stderr, ">>>>>>>> cudaIpcOpenMemHandle called\n");
	ret = orig_cudaIpcOpenMemHandle(devPtr, handle, flags);
	fprintf(stderr, ">>>>>>>> cudaIpcOpenMemHandle returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaIpcCloseMemHandle)(void *devPtr) = NULL;

__host__ cudaError_t CUDARTAPI cudaIpcCloseMemHandle(void *devPtr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaIpcCloseMemHandle.c file
	fprintf(stderr, ">>>>>>>> cudaIpcCloseMemHandle called\n");
	ret = orig_cudaIpcCloseMemHandle(devPtr);
	fprintf(stderr, ">>>>>>>> cudaIpcCloseMemHandle returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceFlushGPUDirectRDMAWrites)(enum cudaFlushGPUDirectRDMAWritesTarget target, enum cudaFlushGPUDirectRDMAWritesScope scope) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceFlushGPUDirectRDMAWrites(enum cudaFlushGPUDirectRDMAWritesTarget target, enum cudaFlushGPUDirectRDMAWritesScope scope) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceFlushGPUDirectRDMAWrites.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceFlushGPUDirectRDMAWrites called\n");
	ret = orig_cudaDeviceFlushGPUDirectRDMAWrites(target, scope);
	fprintf(stderr, ">>>>>>>> cudaDeviceFlushGPUDirectRDMAWrites returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceRegisterAsyncNotification)(int device, cudaAsyncCallback callbackFunc, void* userData, cudaAsyncCallbackHandle_t* callback) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceRegisterAsyncNotification(int device, cudaAsyncCallback callbackFunc, void* userData, cudaAsyncCallbackHandle_t* callback) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceRegisterAsyncNotification.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceRegisterAsyncNotification called\n");
	ret = orig_cudaDeviceRegisterAsyncNotification(device, callbackFunc, userData, callback);
	fprintf(stderr, ">>>>>>>> cudaDeviceRegisterAsyncNotification returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceUnregisterAsyncNotification)(int device, cudaAsyncCallbackHandle_t callback) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceUnregisterAsyncNotification(int device, cudaAsyncCallbackHandle_t callback) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceUnregisterAsyncNotification.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceUnregisterAsyncNotification called\n");
	ret = orig_cudaDeviceUnregisterAsyncNotification(device, callback);
	fprintf(stderr, ">>>>>>>> cudaDeviceUnregisterAsyncNotification returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaGetLastError)(void) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaGetLastError(void) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetLastError.c file
	fprintf(stderr, ">>>>>>>> cudaGetLastError called\n");
	ret = orig_cudaGetLastError();
	fprintf(stderr, ">>>>>>>> cudaGetLastError returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaPeekAtLastError)(void) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaPeekAtLastError(void) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaPeekAtLastError.c file
	fprintf(stderr, ">>>>>>>> cudaPeekAtLastError called\n");
	ret = orig_cudaPeekAtLastError();
	fprintf(stderr, ">>>>>>>> cudaPeekAtLastError returned\n");
	return ret;

}

static __host__ __cudart_builtin__ const char* CUDARTAPI (*orig_cudaGetErrorName)(cudaError_t error) = NULL;

__host__ __cudart_builtin__ const char* CUDARTAPI cudaGetErrorName(cudaError_t error) {
    	const char* ret;
	// Write your own custom c code in the cudaGetErrorName.c file
	fprintf(stderr, ">>>>>>>> cudaGetErrorName called\n");
	ret = orig_cudaGetErrorName(error);
	fprintf(stderr, ">>>>>>>> cudaGetErrorName returned\n");
	return ret;

}

static __host__ __cudart_builtin__ const char* CUDARTAPI (*orig_cudaGetErrorString)(cudaError_t error) = NULL;

__host__ __cudart_builtin__ const char* CUDARTAPI cudaGetErrorString(cudaError_t error) {
    	const char* ret;
	// Write your own custom c code in the cudaGetErrorString.c file
	fprintf(stderr, ">>>>>>>> cudaGetErrorString called\n");
	ret = orig_cudaGetErrorString(error);
	fprintf(stderr, ">>>>>>>> cudaGetErrorString returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaGetDeviceCount)(int *count) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaGetDeviceCount(int *count) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetDeviceCount.c file
	fprintf(stderr, ">>>>>>>> cudaGetDeviceCount called\n");
	ret = orig_cudaGetDeviceCount(count);
	fprintf(stderr, ">>>>>>>> cudaGetDeviceCount returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaGetDeviceProperties)(struct cudaDeviceProp *prop, int device) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaGetDeviceProperties(struct cudaDeviceProp *prop, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetDeviceProperties.c file
	fprintf(stderr, ">>>>>>>> cudaGetDeviceProperties called\n");
	ret = orig_cudaGetDeviceProperties(prop, device);
	fprintf(stderr, ">>>>>>>> cudaGetDeviceProperties returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaDeviceGetAttribute)(int *value, enum cudaDeviceAttr attr, int device) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaDeviceGetAttribute(int *value, enum cudaDeviceAttr attr, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetAttribute.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceGetAttribute called\n");
	ret = orig_cudaDeviceGetAttribute(value, attr, device);
	fprintf(stderr, ">>>>>>>> cudaDeviceGetAttribute returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceGetDefaultMemPool)(cudaMemPool_t *memPool, int device) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceGetDefaultMemPool(cudaMemPool_t *memPool, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetDefaultMemPool.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceGetDefaultMemPool called\n");
	ret = orig_cudaDeviceGetDefaultMemPool(memPool, device);
	fprintf(stderr, ">>>>>>>> cudaDeviceGetDefaultMemPool returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceSetMemPool)(int device, cudaMemPool_t memPool) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceSetMemPool(int device, cudaMemPool_t memPool) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceSetMemPool.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceSetMemPool called\n");
	ret = orig_cudaDeviceSetMemPool(device, memPool);
	fprintf(stderr, ">>>>>>>> cudaDeviceSetMemPool returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceGetMemPool)(cudaMemPool_t *memPool, int device) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceGetMemPool(cudaMemPool_t *memPool, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetMemPool.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceGetMemPool called\n");
	ret = orig_cudaDeviceGetMemPool(memPool, device);
	fprintf(stderr, ">>>>>>>> cudaDeviceGetMemPool returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceGetNvSciSyncAttributes)(void *nvSciSyncAttrList, int device, int flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceGetNvSciSyncAttributes(void *nvSciSyncAttrList, int device, int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetNvSciSyncAttributes.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceGetNvSciSyncAttributes called\n");
	ret = orig_cudaDeviceGetNvSciSyncAttributes(nvSciSyncAttrList, device, flags);
	fprintf(stderr, ">>>>>>>> cudaDeviceGetNvSciSyncAttributes returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaDeviceGetP2PAttribute)(int *value, enum cudaDeviceP2PAttr attr, int srcDevice, int dstDevice) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaDeviceGetP2PAttribute(int *value, enum cudaDeviceP2PAttr attr, int srcDevice, int dstDevice) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetP2PAttribute.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceGetP2PAttribute called\n");
	ret = orig_cudaDeviceGetP2PAttribute(value, attr, srcDevice, dstDevice);
	fprintf(stderr, ">>>>>>>> cudaDeviceGetP2PAttribute returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaChooseDevice)(int *device, const struct cudaDeviceProp *prop) = NULL;

__host__ cudaError_t CUDARTAPI cudaChooseDevice(int *device, const struct cudaDeviceProp *prop) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaChooseDevice.c file
	fprintf(stderr, ">>>>>>>> cudaChooseDevice called\n");
	ret = orig_cudaChooseDevice(device, prop);
	fprintf(stderr, ">>>>>>>> cudaChooseDevice returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaInitDevice)(int device, unsigned int deviceFlags, unsigned int flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaInitDevice(int device, unsigned int deviceFlags, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaInitDevice.c file
	fprintf(stderr, ">>>>>>>> cudaInitDevice called\n");
	ret = orig_cudaInitDevice(device, deviceFlags, flags);
	fprintf(stderr, ">>>>>>>> cudaInitDevice returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaSetDevice)(int device) = NULL;

__host__ cudaError_t CUDARTAPI cudaSetDevice(int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaSetDevice.c file
	fprintf(stderr, ">>>>>>>> cudaSetDevice called\n");
	ret = orig_cudaSetDevice(device);
	fprintf(stderr, ">>>>>>>> cudaSetDevice returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaGetDevice)(int *device) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaGetDevice(int *device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetDevice.c file
	fprintf(stderr, ">>>>>>>> cudaGetDevice called\n");
	ret = orig_cudaGetDevice(device);
	fprintf(stderr, ">>>>>>>> cudaGetDevice returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaSetValidDevices)(int *device_arr, int len) = NULL;

__host__ cudaError_t CUDARTAPI cudaSetValidDevices(int *device_arr, int len) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaSetValidDevices.c file
	fprintf(stderr, ">>>>>>>> cudaSetValidDevices called\n");
	ret = orig_cudaSetValidDevices(device_arr, len);
	fprintf(stderr, ">>>>>>>> cudaSetValidDevices returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaSetDeviceFlags)( unsigned int flags ) = NULL;

__host__ cudaError_t CUDARTAPI cudaSetDeviceFlags( unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaSetDeviceFlags.c file
	fprintf(stderr, ">>>>>>>> cudaSetDeviceFlags called\n");
	ret = orig_cudaSetDeviceFlags(flags);
	fprintf(stderr, ">>>>>>>> cudaSetDeviceFlags returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGetDeviceFlags)( unsigned int *flags ) = NULL;

__host__ cudaError_t CUDARTAPI cudaGetDeviceFlags( unsigned int *flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetDeviceFlags.c file
	fprintf(stderr, ">>>>>>>> cudaGetDeviceFlags called\n");
	ret = orig_cudaGetDeviceFlags(flags);
	fprintf(stderr, ">>>>>>>> cudaGetDeviceFlags returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaStreamCreate)(cudaStream_t *pStream) = NULL;

__host__ cudaError_t CUDARTAPI cudaStreamCreate(cudaStream_t *pStream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamCreate.c file
	fprintf(stderr, ">>>>>>>> cudaStreamCreate called\n");
	ret = orig_cudaStreamCreate(pStream);
	fprintf(stderr, ">>>>>>>> cudaStreamCreate returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaStreamCreateWithFlags)(cudaStream_t *pStream, unsigned int flags) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaStreamCreateWithFlags(cudaStream_t *pStream, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamCreateWithFlags.c file
	fprintf(stderr, ">>>>>>>> cudaStreamCreateWithFlags called\n");
	ret = orig_cudaStreamCreateWithFlags(pStream, flags);
	fprintf(stderr, ">>>>>>>> cudaStreamCreateWithFlags returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaStreamCreateWithPriority)(cudaStream_t *pStream, unsigned int flags, int priority) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaStreamCreateWithPriority(cudaStream_t *pStream, unsigned int flags, int priority) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamCreateWithPriority.c file
	fprintf(stderr, ">>>>>>>> cudaStreamCreateWithPriority called\n");
	ret = orig_cudaStreamCreateWithPriority(pStream, flags, priority);
	fprintf(stderr, ">>>>>>>> cudaStreamCreateWithPriority returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaStreamGetPriority)(cudaStream_t hStream, int *priority) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaStreamGetPriority(cudaStream_t hStream, int *priority) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamGetPriority.c file
	fprintf(stderr, ">>>>>>>> cudaStreamGetPriority called\n");
	ret = orig_cudaStreamGetPriority(hStream, priority);
	fprintf(stderr, ">>>>>>>> cudaStreamGetPriority returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaStreamGetFlags)(cudaStream_t hStream, unsigned int *flags) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaStreamGetFlags(cudaStream_t hStream, unsigned int *flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamGetFlags.c file
	fprintf(stderr, ">>>>>>>> cudaStreamGetFlags called\n");
	ret = orig_cudaStreamGetFlags(hStream, flags);
	fprintf(stderr, ">>>>>>>> cudaStreamGetFlags returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaStreamGetId)(cudaStream_t hStream, unsigned long long *streamId) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaStreamGetId(cudaStream_t hStream, unsigned long long *streamId) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamGetId.c file
	fprintf(stderr, ">>>>>>>> cudaStreamGetId called\n");
	ret = orig_cudaStreamGetId(hStream, streamId);
	fprintf(stderr, ">>>>>>>> cudaStreamGetId returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaCtxResetPersistingL2Cache)(void) = NULL;

__host__ cudaError_t CUDARTAPI cudaCtxResetPersistingL2Cache(void) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaCtxResetPersistingL2Cache.c file
	fprintf(stderr, ">>>>>>>> cudaCtxResetPersistingL2Cache called\n");
	ret = orig_cudaCtxResetPersistingL2Cache();
	fprintf(stderr, ">>>>>>>> cudaCtxResetPersistingL2Cache returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaStreamCopyAttributes)(cudaStream_t dst, cudaStream_t src) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaStreamCopyAttributes(cudaStream_t dst, cudaStream_t src) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamCopyAttributes.c file
	fprintf(stderr, ">>>>>>>> cudaStreamCopyAttributes called\n");
	ret = orig_cudaStreamCopyAttributes(dst, src);
	fprintf(stderr, ">>>>>>>> cudaStreamCopyAttributes returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaStreamGetAttribute)(        cudaStream_t hStream, cudaStreamAttrID attr,        cudaStreamAttrValue *value_out) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaStreamGetAttribute(        cudaStream_t hStream, cudaStreamAttrID attr,        cudaStreamAttrValue *value_out) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamGetAttribute.c file
	fprintf(stderr, ">>>>>>>> cudaStreamGetAttribute called\n");
	ret = orig_cudaStreamGetAttribute(hStream, attr, value_out);
	fprintf(stderr, ">>>>>>>> cudaStreamGetAttribute returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaStreamSetAttribute)(        cudaStream_t hStream, cudaStreamAttrID attr,        const cudaStreamAttrValue *value) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaStreamSetAttribute(        cudaStream_t hStream, cudaStreamAttrID attr,        const cudaStreamAttrValue *value) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamSetAttribute.c file
	fprintf(stderr, ">>>>>>>> cudaStreamSetAttribute called\n");
	ret = orig_cudaStreamSetAttribute(hStream, attr, value);
	fprintf(stderr, ">>>>>>>> cudaStreamSetAttribute returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaStreamDestroy)(cudaStream_t stream) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaStreamDestroy(cudaStream_t stream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamDestroy.c file
	fprintf(stderr, ">>>>>>>> cudaStreamDestroy called\n");
	ret = orig_cudaStreamDestroy(stream);
	fprintf(stderr, ">>>>>>>> cudaStreamDestroy returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaStreamWaitEvent)(cudaStream_t stream, cudaEvent_t event, unsigned int flags ) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamWaitEvent.c file
	fprintf(stderr, ">>>>>>>> cudaStreamWaitEvent called\n");
	ret = orig_cudaStreamWaitEvent(stream, event, flags);
	fprintf(stderr, ">>>>>>>> cudaStreamWaitEvent returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaStreamAddCallback)(cudaStream_t stream,        cudaStreamCallback_t callback, void *userData, unsigned int flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaStreamAddCallback(cudaStream_t stream,        cudaStreamCallback_t callback, void *userData, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamAddCallback.c file
	fprintf(stderr, ">>>>>>>> cudaStreamAddCallback called\n");
	ret = orig_cudaStreamAddCallback(stream, callback, userData, flags);
	fprintf(stderr, ">>>>>>>> cudaStreamAddCallback returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaStreamSynchronize)(cudaStream_t stream) = NULL;

__host__ cudaError_t CUDARTAPI cudaStreamSynchronize(cudaStream_t stream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamSynchronize.c file
	fprintf(stderr, ">>>>>>>> cudaStreamSynchronize called\n");
	ret = orig_cudaStreamSynchronize(stream);
	fprintf(stderr, ">>>>>>>> cudaStreamSynchronize returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaStreamQuery)(cudaStream_t stream) = NULL;

__host__ cudaError_t CUDARTAPI cudaStreamQuery(cudaStream_t stream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamQuery.c file
	fprintf(stderr, ">>>>>>>> cudaStreamQuery called\n");
	ret = orig_cudaStreamQuery(stream);
	fprintf(stderr, ">>>>>>>> cudaStreamQuery returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaStreamAttachMemAsync)(cudaStream_t stream, void *devPtr, size_t length , unsigned int flags = cudaMemAttachSingle) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaStreamAttachMemAsync(cudaStream_t stream, void *devPtr, size_t length , unsigned int flags = cudaMemAttachSingle) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamAttachMemAsync.c file
	fprintf(stderr, ">>>>>>>> cudaStreamAttachMemAsync called\n");
	ret = orig_cudaStreamAttachMemAsync(stream, devPtr, length, flags);
	fprintf(stderr, ">>>>>>>> cudaStreamAttachMemAsync returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaStreamAttachMemAsync)(cudaStream_t stream, void *devPtr, size_t length , unsigned int flags) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaStreamAttachMemAsync(cudaStream_t stream, void *devPtr, size_t length , unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamAttachMemAsync.c file
	fprintf(stderr, ">>>>>>>> cudaStreamAttachMemAsync called\n");
	ret = orig_cudaStreamAttachMemAsync(stream, devPtr, length, flags);
	fprintf(stderr, ">>>>>>>> cudaStreamAttachMemAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaStreamBeginCapture)(cudaStream_t stream, enum cudaStreamCaptureMode mode) = NULL;

__host__ cudaError_t CUDARTAPI cudaStreamBeginCapture(cudaStream_t stream, enum cudaStreamCaptureMode mode) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamBeginCapture.c file
	fprintf(stderr, ">>>>>>>> cudaStreamBeginCapture called\n");
	ret = orig_cudaStreamBeginCapture(stream, mode);
	fprintf(stderr, ">>>>>>>> cudaStreamBeginCapture returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaStreamBeginCaptureToGraph)(cudaStream_t stream, cudaGraph_t graph, const cudaGraphNode_t *dependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, enum cudaStreamCaptureMode mode) = NULL;

__host__ cudaError_t CUDARTAPI cudaStreamBeginCaptureToGraph(cudaStream_t stream, cudaGraph_t graph, const cudaGraphNode_t *dependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, enum cudaStreamCaptureMode mode) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamBeginCaptureToGraph.c file
	fprintf(stderr, ">>>>>>>> cudaStreamBeginCaptureToGraph called\n");
	ret = orig_cudaStreamBeginCaptureToGraph(stream, graph, dependencies, dependencyData, numDependencies, mode);
	fprintf(stderr, ">>>>>>>> cudaStreamBeginCaptureToGraph returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaThreadExchangeStreamCaptureMode)(enum cudaStreamCaptureMode *mode) = NULL;

__host__ cudaError_t CUDARTAPI cudaThreadExchangeStreamCaptureMode(enum cudaStreamCaptureMode *mode) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaThreadExchangeStreamCaptureMode.c file
	fprintf(stderr, ">>>>>>>> cudaThreadExchangeStreamCaptureMode called\n");
	ret = orig_cudaThreadExchangeStreamCaptureMode(mode);
	fprintf(stderr, ">>>>>>>> cudaThreadExchangeStreamCaptureMode returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaStreamEndCapture)(cudaStream_t stream, cudaGraph_t *pGraph) = NULL;

__host__ cudaError_t CUDARTAPI cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t *pGraph) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamEndCapture.c file
	fprintf(stderr, ">>>>>>>> cudaStreamEndCapture called\n");
	ret = orig_cudaStreamEndCapture(stream, pGraph);
	fprintf(stderr, ">>>>>>>> cudaStreamEndCapture returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaStreamIsCapturing)(cudaStream_t stream, enum cudaStreamCaptureStatus *pCaptureStatus) = NULL;

__host__ cudaError_t CUDARTAPI cudaStreamIsCapturing(cudaStream_t stream, enum cudaStreamCaptureStatus *pCaptureStatus) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamIsCapturing.c file
	fprintf(stderr, ">>>>>>>> cudaStreamIsCapturing called\n");
	ret = orig_cudaStreamIsCapturing(stream, pCaptureStatus);
	fprintf(stderr, ">>>>>>>> cudaStreamIsCapturing returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaStreamGetCaptureInfo)(cudaStream_t stream, enum cudaStreamCaptureStatus *captureStatus_out, unsigned long long *id_out , cudaGraph_t *graph_out , const cudaGraphNode_t **dependencies_out , size_t *numDependencies_out ) = NULL;

__host__ cudaError_t CUDARTAPI cudaStreamGetCaptureInfo(cudaStream_t stream, enum cudaStreamCaptureStatus *captureStatus_out, unsigned long long *id_out , cudaGraph_t *graph_out , const cudaGraphNode_t **dependencies_out , size_t *numDependencies_out ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamGetCaptureInfo.c file
	fprintf(stderr, ">>>>>>>> cudaStreamGetCaptureInfo called\n");
	ret = orig_cudaStreamGetCaptureInfo(stream, captureStatus_out, id_out, graph_out, dependencies_out, numDependencies_out);
	fprintf(stderr, ">>>>>>>> cudaStreamGetCaptureInfo returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaStreamGetCaptureInfo_v3)(cudaStream_t stream,    enum cudaStreamCaptureStatus *captureStatus_out, unsigned long long *id_out ,    cudaGraph_t *graph_out , const cudaGraphNode_t **dependencies_out ,    const cudaGraphEdgeData **edgeData_out , size_t *numDependencies_out ) = NULL;

__host__ cudaError_t CUDARTAPI cudaStreamGetCaptureInfo_v3(cudaStream_t stream,    enum cudaStreamCaptureStatus *captureStatus_out, unsigned long long *id_out ,    cudaGraph_t *graph_out , const cudaGraphNode_t **dependencies_out ,    const cudaGraphEdgeData **edgeData_out , size_t *numDependencies_out ) {
    	cudaError_t  cudaStreamGetCaptureInfo_ ret;
	// Write your own custom c code in the cudaStreamGetCaptureInfo_v3.c file
	fprintf(stderr, ">>>>>>>> cudaStreamGetCaptureInfo_v3 called\n");
	ret = orig_cudaStreamGetCaptureInfo_v3(stream, captureStatus_out, id_out, graph_out, dependencies_out, edgeData_out, numDependencies_out);
	fprintf(stderr, ">>>>>>>> cudaStreamGetCaptureInfo_v3 returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaStreamUpdateCaptureDependencies)(cudaStream_t stream, cudaGraphNode_t *dependencies, size_t numDependencies, unsigned int flags ) = NULL;

__host__ cudaError_t CUDARTAPI cudaStreamUpdateCaptureDependencies(cudaStream_t stream, cudaGraphNode_t *dependencies, size_t numDependencies, unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaStreamUpdateCaptureDependencies.c file
	fprintf(stderr, ">>>>>>>> cudaStreamUpdateCaptureDependencies called\n");
	ret = orig_cudaStreamUpdateCaptureDependencies(stream, dependencies, numDependencies, flags);
	fprintf(stderr, ">>>>>>>> cudaStreamUpdateCaptureDependencies returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaStreamUpdateCaptureDependencies_v2)(cudaStream_t stream, cudaGraphNode_t *dependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, unsigned int flags ) = NULL;

__host__ cudaError_t CUDARTAPI cudaStreamUpdateCaptureDependencies_v2(cudaStream_t stream, cudaGraphNode_t *dependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, unsigned int flags ) {
    	cudaError_t  cudaStreamUpdateCaptureDependencies_ ret;
	// Write your own custom c code in the cudaStreamUpdateCaptureDependencies_v2.c file
	fprintf(stderr, ">>>>>>>> cudaStreamUpdateCaptureDependencies_v2 called\n");
	ret = orig_cudaStreamUpdateCaptureDependencies_v2(stream, dependencies, dependencyData, numDependencies, flags);
	fprintf(stderr, ">>>>>>>> cudaStreamUpdateCaptureDependencies_v2 returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaEventCreate)(cudaEvent_t *event) = NULL;

__host__ cudaError_t CUDARTAPI cudaEventCreate(cudaEvent_t *event) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaEventCreate.c file
	fprintf(stderr, ">>>>>>>> cudaEventCreate called\n");
	ret = orig_cudaEventCreate(event);
	fprintf(stderr, ">>>>>>>> cudaEventCreate returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaEventCreateWithFlags)(cudaEvent_t *event, unsigned int flags) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaEventCreateWithFlags(cudaEvent_t *event, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaEventCreateWithFlags.c file
	fprintf(stderr, ">>>>>>>> cudaEventCreateWithFlags called\n");
	ret = orig_cudaEventCreateWithFlags(event, flags);
	fprintf(stderr, ">>>>>>>> cudaEventCreateWithFlags returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaEventRecord)(cudaEvent_t event, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaEventRecord(cudaEvent_t event, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaEventRecord.c file
	fprintf(stderr, ">>>>>>>> cudaEventRecord called\n");
	ret = orig_cudaEventRecord(event, stream);
	fprintf(stderr, ">>>>>>>> cudaEventRecord returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaEventQuery)(cudaEvent_t event) = NULL;

__host__ cudaError_t CUDARTAPI cudaEventQuery(cudaEvent_t event) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaEventQuery.c file
	fprintf(stderr, ">>>>>>>> cudaEventQuery called\n");
	ret = orig_cudaEventQuery(event);
	fprintf(stderr, ">>>>>>>> cudaEventQuery returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaEventSynchronize)(cudaEvent_t event) = NULL;

__host__ cudaError_t CUDARTAPI cudaEventSynchronize(cudaEvent_t event) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaEventSynchronize.c file
	fprintf(stderr, ">>>>>>>> cudaEventSynchronize called\n");
	ret = orig_cudaEventSynchronize(event);
	fprintf(stderr, ">>>>>>>> cudaEventSynchronize returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaEventDestroy)(cudaEvent_t event) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaEventDestroy(cudaEvent_t event) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaEventDestroy.c file
	fprintf(stderr, ">>>>>>>> cudaEventDestroy called\n");
	ret = orig_cudaEventDestroy(event);
	fprintf(stderr, ">>>>>>>> cudaEventDestroy returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaEventElapsedTime)(float *ms, cudaEvent_t start, cudaEvent_t end) = NULL;

__host__ cudaError_t CUDARTAPI cudaEventElapsedTime(float *ms, cudaEvent_t start, cudaEvent_t end) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaEventElapsedTime.c file
	fprintf(stderr, ">>>>>>>> cudaEventElapsedTime called\n");
	ret = orig_cudaEventElapsedTime(ms, start, end);
	fprintf(stderr, ">>>>>>>> cudaEventElapsedTime returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaImportExternalMemory)(cudaExternalMemory_t *extMem_out, const struct cudaExternalMemoryHandleDesc *memHandleDesc) = NULL;

__host__ cudaError_t CUDARTAPI cudaImportExternalMemory(cudaExternalMemory_t *extMem_out, const struct cudaExternalMemoryHandleDesc *memHandleDesc) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaImportExternalMemory.c file
	fprintf(stderr, ">>>>>>>> cudaImportExternalMemory called\n");
	ret = orig_cudaImportExternalMemory(extMem_out, memHandleDesc);
	fprintf(stderr, ">>>>>>>> cudaImportExternalMemory returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaExternalMemoryGetMappedBuffer)(void **devPtr, cudaExternalMemory_t extMem, const struct cudaExternalMemoryBufferDesc *bufferDesc) = NULL;

__host__ cudaError_t CUDARTAPI cudaExternalMemoryGetMappedBuffer(void **devPtr, cudaExternalMemory_t extMem, const struct cudaExternalMemoryBufferDesc *bufferDesc) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaExternalMemoryGetMappedBuffer.c file
	fprintf(stderr, ">>>>>>>> cudaExternalMemoryGetMappedBuffer called\n");
	ret = orig_cudaExternalMemoryGetMappedBuffer(devPtr, extMem, bufferDesc);
	fprintf(stderr, ">>>>>>>> cudaExternalMemoryGetMappedBuffer returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaExternalMemoryGetMappedMipmappedArray)(cudaMipmappedArray_t *mipmap, cudaExternalMemory_t extMem, const struct cudaExternalMemoryMipmappedArrayDesc *mipmapDesc) = NULL;

__host__ cudaError_t CUDARTAPI cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t *mipmap, cudaExternalMemory_t extMem, const struct cudaExternalMemoryMipmappedArrayDesc *mipmapDesc) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaExternalMemoryGetMappedMipmappedArray.c file
	fprintf(stderr, ">>>>>>>> cudaExternalMemoryGetMappedMipmappedArray called\n");
	ret = orig_cudaExternalMemoryGetMappedMipmappedArray(mipmap, extMem, mipmapDesc);
	fprintf(stderr, ">>>>>>>> cudaExternalMemoryGetMappedMipmappedArray returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDestroyExternalMemory)(cudaExternalMemory_t extMem) = NULL;

__host__ cudaError_t CUDARTAPI cudaDestroyExternalMemory(cudaExternalMemory_t extMem) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDestroyExternalMemory.c file
	fprintf(stderr, ">>>>>>>> cudaDestroyExternalMemory called\n");
	ret = orig_cudaDestroyExternalMemory(extMem);
	fprintf(stderr, ">>>>>>>> cudaDestroyExternalMemory returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaImportExternalSemaphore)(cudaExternalSemaphore_t *extSem_out, const struct cudaExternalSemaphoreHandleDesc *semHandleDesc) = NULL;

__host__ cudaError_t CUDARTAPI cudaImportExternalSemaphore(cudaExternalSemaphore_t *extSem_out, const struct cudaExternalSemaphoreHandleDesc *semHandleDesc) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaImportExternalSemaphore.c file
	fprintf(stderr, ">>>>>>>> cudaImportExternalSemaphore called\n");
	ret = orig_cudaImportExternalSemaphore(extSem_out, semHandleDesc);
	fprintf(stderr, ">>>>>>>> cudaImportExternalSemaphore returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaSignalExternalSemaphoresAsync)(const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreSignalParams *paramsArray, unsigned int numExtSems, cudaStream_t stream ) = NULL;

__host__ cudaError_t CUDARTAPI cudaSignalExternalSemaphoresAsync(const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreSignalParams *paramsArray, unsigned int numExtSems, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaSignalExternalSemaphoresAsync.c file
	fprintf(stderr, ">>>>>>>> cudaSignalExternalSemaphoresAsync called\n");
	ret = orig_cudaSignalExternalSemaphoresAsync(extSemArray, paramsArray, numExtSems, stream);
	fprintf(stderr, ">>>>>>>> cudaSignalExternalSemaphoresAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaWaitExternalSemaphoresAsync)(const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreWaitParams *paramsArray, unsigned int numExtSems, cudaStream_t stream ) = NULL;

__host__ cudaError_t CUDARTAPI cudaWaitExternalSemaphoresAsync(const cudaExternalSemaphore_t *extSemArray, const struct cudaExternalSemaphoreWaitParams *paramsArray, unsigned int numExtSems, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaWaitExternalSemaphoresAsync.c file
	fprintf(stderr, ">>>>>>>> cudaWaitExternalSemaphoresAsync called\n");
	ret = orig_cudaWaitExternalSemaphoresAsync(extSemArray, paramsArray, numExtSems, stream);
	fprintf(stderr, ">>>>>>>> cudaWaitExternalSemaphoresAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDestroyExternalSemaphore)(cudaExternalSemaphore_t extSem) = NULL;

__host__ cudaError_t CUDARTAPI cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDestroyExternalSemaphore.c file
	fprintf(stderr, ">>>>>>>> cudaDestroyExternalSemaphore called\n");
	ret = orig_cudaDestroyExternalSemaphore(extSem);
	fprintf(stderr, ">>>>>>>> cudaDestroyExternalSemaphore returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaLaunchKernel)(const void *func, dim3 gridDim, dim3 blockDim, void **args, size_t sharedMem, cudaStream_t stream) = NULL;

__host__ cudaError_t CUDARTAPI cudaLaunchKernel(const void *func, dim3 gridDim, dim3 blockDim, void **args, size_t sharedMem, cudaStream_t stream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaLaunchKernel.c file
	fprintf(stderr, ">>>>>>>> cudaLaunchKernel called\n");
	ret = orig_cudaLaunchKernel(func, gridDim, blockDim, args, sharedMem, stream);
	fprintf(stderr, ">>>>>>>> cudaLaunchKernel returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaLaunchKernelExC)(const cudaLaunchConfig_t *config, const void *func, void **args) = NULL;

__host__ cudaError_t CUDARTAPI cudaLaunchKernelExC(const cudaLaunchConfig_t *config, const void *func, void **args) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaLaunchKernelExC.c file
	fprintf(stderr, ">>>>>>>> cudaLaunchKernelExC called\n");
	ret = orig_cudaLaunchKernelExC(config, func, args);
	fprintf(stderr, ">>>>>>>> cudaLaunchKernelExC returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaLaunchCooperativeKernel)(const void *func, dim3 gridDim, dim3 blockDim, void **args, size_t sharedMem, cudaStream_t stream) = NULL;

__host__ cudaError_t CUDARTAPI cudaLaunchCooperativeKernel(const void *func, dim3 gridDim, dim3 blockDim, void **args, size_t sharedMem, cudaStream_t stream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaLaunchCooperativeKernel.c file
	fprintf(stderr, ">>>>>>>> cudaLaunchCooperativeKernel called\n");
	ret = orig_cudaLaunchCooperativeKernel(func, gridDim, blockDim, args, sharedMem, stream);
	fprintf(stderr, ">>>>>>>> cudaLaunchCooperativeKernel returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaFuncSetCacheConfig)(const void *func, enum cudaFuncCache cacheConfig) = NULL;

__host__ cudaError_t CUDARTAPI cudaFuncSetCacheConfig(const void *func, enum cudaFuncCache cacheConfig) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFuncSetCacheConfig.c file
	fprintf(stderr, ">>>>>>>> cudaFuncSetCacheConfig called\n");
	ret = orig_cudaFuncSetCacheConfig(func, cacheConfig);
	fprintf(stderr, ">>>>>>>> cudaFuncSetCacheConfig returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaFuncGetAttributes)(struct cudaFuncAttributes *attr, const void *func) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaFuncGetAttributes(struct cudaFuncAttributes *attr, const void *func) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFuncGetAttributes.c file
	fprintf(stderr, ">>>>>>>> cudaFuncGetAttributes called\n");
	ret = orig_cudaFuncGetAttributes(attr, func);
	fprintf(stderr, ">>>>>>>> cudaFuncGetAttributes returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaFuncSetAttribute)(const void *func, enum cudaFuncAttribute attr, int value) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaFuncSetAttribute(const void *func, enum cudaFuncAttribute attr, int value) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFuncSetAttribute.c file
	fprintf(stderr, ">>>>>>>> cudaFuncSetAttribute called\n");
	ret = orig_cudaFuncSetAttribute(func, attr, value);
	fprintf(stderr, ">>>>>>>> cudaFuncSetAttribute returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaFuncGetName)(const char **name, const void *func) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaFuncGetName(const char **name, const void *func) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFuncGetName.c file
	fprintf(stderr, ">>>>>>>> cudaFuncGetName called\n");
	ret = orig_cudaFuncGetName(name, func);
	fprintf(stderr, ">>>>>>>> cudaFuncGetName returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaFuncGetParamInfo)(const void *func, size_t paramIndex, size_t *paramOffset, size_t *paramSize) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaFuncGetParamInfo(const void *func, size_t paramIndex, size_t *paramOffset, size_t *paramSize) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFuncGetParamInfo.c file
	fprintf(stderr, ">>>>>>>> cudaFuncGetParamInfo called\n");
	ret = orig_cudaFuncGetParamInfo(func, paramIndex, paramOffset, paramSize);
	fprintf(stderr, ">>>>>>>> cudaFuncGetParamInfo returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaLaunchHostFunc)(cudaStream_t stream, cudaHostFn_t fn, void *userData) = NULL;

__host__ cudaError_t CUDARTAPI cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void *userData) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaLaunchHostFunc.c file
	fprintf(stderr, ">>>>>>>> cudaLaunchHostFunc called\n");
	ret = orig_cudaLaunchHostFunc(stream, fn, userData);
	fprintf(stderr, ">>>>>>>> cudaLaunchHostFunc returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaOccupancyMaxActiveBlocksPerMultiprocessor)(int *numBlocks, const void *func, int blockSize, size_t dynamicSMemSize) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *numBlocks, const void *func, int blockSize, size_t dynamicSMemSize) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaOccupancyMaxActiveBlocksPerMultiprocessor.c file
	fprintf(stderr, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessor called\n");
	ret = orig_cudaOccupancyMaxActiveBlocksPerMultiprocessor(numBlocks, func, blockSize, dynamicSMemSize);
	fprintf(stderr, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessor returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaOccupancyAvailableDynamicSMemPerBlock)(size_t *dynamicSmemSize, const void *func, int numBlocks, int blockSize) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaOccupancyAvailableDynamicSMemPerBlock(size_t *dynamicSmemSize, const void *func, int numBlocks, int blockSize) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaOccupancyAvailableDynamicSMemPerBlock.c file
	fprintf(stderr, ">>>>>>>> cudaOccupancyAvailableDynamicSMemPerBlock called\n");
	ret = orig_cudaOccupancyAvailableDynamicSMemPerBlock(dynamicSmemSize, func, numBlocks, blockSize);
	fprintf(stderr, ">>>>>>>> cudaOccupancyAvailableDynamicSMemPerBlock returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags)(int *numBlocks, const void *func, int blockSize, size_t dynamicSMemSize, unsigned int flags) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *numBlocks, const void *func, int blockSize, size_t dynamicSMemSize, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags.c file
	fprintf(stderr, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags called\n");
	ret = orig_cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, func, blockSize, dynamicSMemSize, flags);
	fprintf(stderr, ">>>>>>>> cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaOccupancyMaxPotentialClusterSize)(int *clusterSize, const void *func, const cudaLaunchConfig_t *launchConfig) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaOccupancyMaxPotentialClusterSize(int *clusterSize, const void *func, const cudaLaunchConfig_t *launchConfig) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaOccupancyMaxPotentialClusterSize.c file
	fprintf(stderr, ">>>>>>>> cudaOccupancyMaxPotentialClusterSize called\n");
	ret = orig_cudaOccupancyMaxPotentialClusterSize(clusterSize, func, launchConfig);
	fprintf(stderr, ">>>>>>>> cudaOccupancyMaxPotentialClusterSize returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaOccupancyMaxActiveClusters)(int *numClusters, const void *func, const cudaLaunchConfig_t *launchConfig) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaOccupancyMaxActiveClusters(int *numClusters, const void *func, const cudaLaunchConfig_t *launchConfig) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaOccupancyMaxActiveClusters.c file
	fprintf(stderr, ">>>>>>>> cudaOccupancyMaxActiveClusters called\n");
	ret = orig_cudaOccupancyMaxActiveClusters(numClusters, func, launchConfig);
	fprintf(stderr, ">>>>>>>> cudaOccupancyMaxActiveClusters returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaMallocManaged)(void **devPtr, size_t size, unsigned int flags = cudaMemAttachGlobal) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaMallocManaged(void **devPtr, size_t size, unsigned int flags = cudaMemAttachGlobal) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMallocManaged.c file
	fprintf(stderr, ">>>>>>>> cudaMallocManaged called\n");
	ret = orig_cudaMallocManaged(devPtr, size, flags);
	fprintf(stderr, ">>>>>>>> cudaMallocManaged returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaMallocManaged)(void **devPtr, size_t size, unsigned int flags) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaMallocManaged(void **devPtr, size_t size, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMallocManaged.c file
	fprintf(stderr, ">>>>>>>> cudaMallocManaged called\n");
	ret = orig_cudaMallocManaged(devPtr, size, flags);
	fprintf(stderr, ">>>>>>>> cudaMallocManaged returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaMalloc)(void **devPtr, size_t size) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaMalloc(void **devPtr, size_t size) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMalloc.c file
	fprintf(stderr, ">>>>>>>> cudaMalloc called\n");
	ret = orig_cudaMalloc(devPtr, size);
	fprintf(stderr, ">>>>>>>> cudaMalloc returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMallocHost)(void **ptr, size_t size) = NULL;

__host__ cudaError_t CUDARTAPI cudaMallocHost(void **ptr, size_t size) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMallocHost.c file
	fprintf(stderr, ">>>>>>>> cudaMallocHost called\n");
	ret = orig_cudaMallocHost(ptr, size);
	fprintf(stderr, ">>>>>>>> cudaMallocHost returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMallocPitch)(void **devPtr, size_t *pitch, size_t width, size_t height) = NULL;

__host__ cudaError_t CUDARTAPI cudaMallocPitch(void **devPtr, size_t *pitch, size_t width, size_t height) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMallocPitch.c file
	fprintf(stderr, ">>>>>>>> cudaMallocPitch called\n");
	ret = orig_cudaMallocPitch(devPtr, pitch, width, height);
	fprintf(stderr, ">>>>>>>> cudaMallocPitch returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMallocArray)(cudaArray_t *array, const struct cudaChannelFormatDesc *desc, size_t width, size_t height , unsigned int flags ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMallocArray(cudaArray_t *array, const struct cudaChannelFormatDesc *desc, size_t width, size_t height , unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMallocArray.c file
	fprintf(stderr, ">>>>>>>> cudaMallocArray called\n");
	ret = orig_cudaMallocArray(array, desc, width, height, flags);
	fprintf(stderr, ">>>>>>>> cudaMallocArray returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaFree)(void *devPtr) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaFree(void *devPtr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFree.c file
	fprintf(stderr, ">>>>>>>> cudaFree called\n");
	ret = orig_cudaFree(devPtr);
	fprintf(stderr, ">>>>>>>> cudaFree returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaFreeHost)(void *ptr) = NULL;

__host__ cudaError_t CUDARTAPI cudaFreeHost(void *ptr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFreeHost.c file
	fprintf(stderr, ">>>>>>>> cudaFreeHost called\n");
	ret = orig_cudaFreeHost(ptr);
	fprintf(stderr, ">>>>>>>> cudaFreeHost returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaFreeArray)(cudaArray_t array) = NULL;

__host__ cudaError_t CUDARTAPI cudaFreeArray(cudaArray_t array) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFreeArray.c file
	fprintf(stderr, ">>>>>>>> cudaFreeArray called\n");
	ret = orig_cudaFreeArray(array);
	fprintf(stderr, ">>>>>>>> cudaFreeArray returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaFreeMipmappedArray)(cudaMipmappedArray_t mipmappedArray) = NULL;

__host__ cudaError_t CUDARTAPI cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFreeMipmappedArray.c file
	fprintf(stderr, ">>>>>>>> cudaFreeMipmappedArray called\n");
	ret = orig_cudaFreeMipmappedArray(mipmappedArray);
	fprintf(stderr, ">>>>>>>> cudaFreeMipmappedArray returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaHostAlloc)(void **pHost, size_t size, unsigned int flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaHostAlloc(void **pHost, size_t size, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaHostAlloc.c file
	fprintf(stderr, ">>>>>>>> cudaHostAlloc called\n");
	ret = orig_cudaHostAlloc(pHost, size, flags);
	fprintf(stderr, ">>>>>>>> cudaHostAlloc returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaHostRegister)(void *ptr, size_t size, unsigned int flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaHostRegister(void *ptr, size_t size, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaHostRegister.c file
	fprintf(stderr, ">>>>>>>> cudaHostRegister called\n");
	ret = orig_cudaHostRegister(ptr, size, flags);
	fprintf(stderr, ">>>>>>>> cudaHostRegister returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaHostUnregister)(void *ptr) = NULL;

__host__ cudaError_t CUDARTAPI cudaHostUnregister(void *ptr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaHostUnregister.c file
	fprintf(stderr, ">>>>>>>> cudaHostUnregister called\n");
	ret = orig_cudaHostUnregister(ptr);
	fprintf(stderr, ">>>>>>>> cudaHostUnregister returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaHostGetDevicePointer)(void **pDevice, void *pHost, unsigned int flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaHostGetDevicePointer(void **pDevice, void *pHost, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaHostGetDevicePointer.c file
	fprintf(stderr, ">>>>>>>> cudaHostGetDevicePointer called\n");
	ret = orig_cudaHostGetDevicePointer(pDevice, pHost, flags);
	fprintf(stderr, ">>>>>>>> cudaHostGetDevicePointer returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaHostGetFlags)(unsigned int *pFlags, void *pHost) = NULL;

__host__ cudaError_t CUDARTAPI cudaHostGetFlags(unsigned int *pFlags, void *pHost) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaHostGetFlags.c file
	fprintf(stderr, ">>>>>>>> cudaHostGetFlags called\n");
	ret = orig_cudaHostGetFlags(pFlags, pHost);
	fprintf(stderr, ">>>>>>>> cudaHostGetFlags returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMalloc3D)(struct cudaPitchedPtr* pitchedDevPtr, struct cudaExtent extent) = NULL;

__host__ cudaError_t CUDARTAPI cudaMalloc3D(struct cudaPitchedPtr* pitchedDevPtr, struct cudaExtent extent) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMalloc3D.c file
	fprintf(stderr, ">>>>>>>> cudaMalloc3D called\n");
	ret = orig_cudaMalloc3D(pitchedDevPtr, extent);
	fprintf(stderr, ">>>>>>>> cudaMalloc3D returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMalloc3DArray)(cudaArray_t *array, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent, unsigned int flags ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMalloc3DArray(cudaArray_t *array, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent, unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMalloc3DArray.c file
	fprintf(stderr, ">>>>>>>> cudaMalloc3DArray called\n");
	ret = orig_cudaMalloc3DArray(array, desc, extent, flags);
	fprintf(stderr, ">>>>>>>> cudaMalloc3DArray returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMallocMipmappedArray)(cudaMipmappedArray_t *mipmappedArray, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent, unsigned int numLevels, unsigned int flags ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMallocMipmappedArray(cudaMipmappedArray_t *mipmappedArray, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent, unsigned int numLevels, unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMallocMipmappedArray.c file
	fprintf(stderr, ">>>>>>>> cudaMallocMipmappedArray called\n");
	ret = orig_cudaMallocMipmappedArray(mipmappedArray, desc, extent, numLevels, flags);
	fprintf(stderr, ">>>>>>>> cudaMallocMipmappedArray returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGetMipmappedArrayLevel)(cudaArray_t *levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned int level) = NULL;

__host__ cudaError_t CUDARTAPI cudaGetMipmappedArrayLevel(cudaArray_t *levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned int level) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetMipmappedArrayLevel.c file
	fprintf(stderr, ">>>>>>>> cudaGetMipmappedArrayLevel called\n");
	ret = orig_cudaGetMipmappedArrayLevel(levelArray, mipmappedArray, level);
	fprintf(stderr, ">>>>>>>> cudaGetMipmappedArrayLevel returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpy3D)(const struct cudaMemcpy3DParms *p) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpy3D(const struct cudaMemcpy3DParms *p) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy3D.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpy3D called\n");
	ret = orig_cudaMemcpy3D(p);
	fprintf(stderr, ">>>>>>>> cudaMemcpy3D returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpy3DPeer)(const struct cudaMemcpy3DPeerParms *p) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpy3DPeer(const struct cudaMemcpy3DPeerParms *p) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy3DPeer.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpy3DPeer called\n");
	ret = orig_cudaMemcpy3DPeer(p);
	fprintf(stderr, ">>>>>>>> cudaMemcpy3DPeer returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaMemcpy3DAsync)(const struct cudaMemcpy3DParms *p, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaMemcpy3DAsync(const struct cudaMemcpy3DParms *p, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy3DAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpy3DAsync called\n");
	ret = orig_cudaMemcpy3DAsync(p, stream);
	fprintf(stderr, ">>>>>>>> cudaMemcpy3DAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpy3DPeerAsync)(const struct cudaMemcpy3DPeerParms *p, cudaStream_t stream ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpy3DPeerAsync(const struct cudaMemcpy3DPeerParms *p, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy3DPeerAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpy3DPeerAsync called\n");
	ret = orig_cudaMemcpy3DPeerAsync(p, stream);
	fprintf(stderr, ">>>>>>>> cudaMemcpy3DPeerAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemGetInfo)(size_t *free, size_t *total) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemGetInfo(size_t *free, size_t *total) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemGetInfo.c file
	fprintf(stderr, ">>>>>>>> cudaMemGetInfo called\n");
	ret = orig_cudaMemGetInfo(free, total);
	fprintf(stderr, ">>>>>>>> cudaMemGetInfo returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaArrayGetInfo)(struct cudaChannelFormatDesc *desc, struct cudaExtent *extent, unsigned int *flags, cudaArray_t array) = NULL;

__host__ cudaError_t CUDARTAPI cudaArrayGetInfo(struct cudaChannelFormatDesc *desc, struct cudaExtent *extent, unsigned int *flags, cudaArray_t array) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaArrayGetInfo.c file
	fprintf(stderr, ">>>>>>>> cudaArrayGetInfo called\n");
	ret = orig_cudaArrayGetInfo(desc, extent, flags, array);
	fprintf(stderr, ">>>>>>>> cudaArrayGetInfo returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaArrayGetPlane)(cudaArray_t *pPlaneArray, cudaArray_t hArray, unsigned int planeIdx) = NULL;

__host__ cudaError_t CUDARTAPI cudaArrayGetPlane(cudaArray_t *pPlaneArray, cudaArray_t hArray, unsigned int planeIdx) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaArrayGetPlane.c file
	fprintf(stderr, ">>>>>>>> cudaArrayGetPlane called\n");
	ret = orig_cudaArrayGetPlane(pPlaneArray, hArray, planeIdx);
	fprintf(stderr, ">>>>>>>> cudaArrayGetPlane returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaArrayGetMemoryRequirements)(struct cudaArrayMemoryRequirements  *memoryRequirements, cudaArray_t array, int device) = NULL;

__host__ cudaError_t CUDARTAPI cudaArrayGetMemoryRequirements(struct cudaArrayMemoryRequirements  *memoryRequirements, cudaArray_t array, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaArrayGetMemoryRequirements.c file
	fprintf(stderr, ">>>>>>>> cudaArrayGetMemoryRequirements called\n");
	ret = orig_cudaArrayGetMemoryRequirements(memoryRequirements, array, device);
	fprintf(stderr, ">>>>>>>> cudaArrayGetMemoryRequirements returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMipmappedArrayGetMemoryRequirements)(struct cudaArrayMemoryRequirements *memoryRequirements, cudaMipmappedArray_t mipmap, int device) = NULL;

__host__ cudaError_t CUDARTAPI cudaMipmappedArrayGetMemoryRequirements(struct cudaArrayMemoryRequirements *memoryRequirements, cudaMipmappedArray_t mipmap, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMipmappedArrayGetMemoryRequirements.c file
	fprintf(stderr, ">>>>>>>> cudaMipmappedArrayGetMemoryRequirements called\n");
	ret = orig_cudaMipmappedArrayGetMemoryRequirements(memoryRequirements, mipmap, device);
	fprintf(stderr, ">>>>>>>> cudaMipmappedArrayGetMemoryRequirements returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpy)(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpy(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpy called\n");
	ret = orig_cudaMemcpy(dst, src, count, kind);
	fprintf(stderr, ">>>>>>>> cudaMemcpy returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpyPeer)(void *dst, int dstDevice, const void *src, int srcDevice, size_t count) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpyPeer(void *dst, int dstDevice, const void *src, int srcDevice, size_t count) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpyPeer.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpyPeer called\n");
	ret = orig_cudaMemcpyPeer(dst, dstDevice, src, srcDevice, count);
	fprintf(stderr, ">>>>>>>> cudaMemcpyPeer returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpy2D)(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpy2D(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy2D.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpy2D called\n");
	ret = orig_cudaMemcpy2D(dst, dpitch, src, spitch, width, height, kind);
	fprintf(stderr, ">>>>>>>> cudaMemcpy2D returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpy2DToArray)(cudaArray_t dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy2DToArray.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpy2DToArray called\n");
	ret = orig_cudaMemcpy2DToArray(dst, wOffset, hOffset, src, spitch, width, height, kind);
	fprintf(stderr, ">>>>>>>> cudaMemcpy2DToArray returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpy2DFromArray)(void *dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpy2DFromArray(void *dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy2DFromArray.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpy2DFromArray called\n");
	ret = orig_cudaMemcpy2DFromArray(dst, dpitch, src, wOffset, hOffset, width, height, kind);
	fprintf(stderr, ">>>>>>>> cudaMemcpy2DFromArray returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpy2DArrayToArray)(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, enum cudaMemcpyKind kind ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, enum cudaMemcpyKind kind ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy2DArrayToArray.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpy2DArrayToArray called\n");
	ret = orig_cudaMemcpy2DArrayToArray(dst, wOffsetDst, hOffsetDst, src, wOffsetSrc, hOffsetSrc, width, height, kind);
	fprintf(stderr, ">>>>>>>> cudaMemcpy2DArrayToArray returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpyToSymbol)(const void *symbol, const void *src, size_t count, size_t offset , enum cudaMemcpyKind kind ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpyToSymbol(const void *symbol, const void *src, size_t count, size_t offset , enum cudaMemcpyKind kind ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpyToSymbol.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpyToSymbol called\n");
	ret = orig_cudaMemcpyToSymbol(symbol, src, count, offset, kind);
	fprintf(stderr, ">>>>>>>> cudaMemcpyToSymbol returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpyFromSymbol)(void *dst, const void *symbol, size_t count, size_t offset , enum cudaMemcpyKind kind ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpyFromSymbol(void *dst, const void *symbol, size_t count, size_t offset , enum cudaMemcpyKind kind ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpyFromSymbol.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpyFromSymbol called\n");
	ret = orig_cudaMemcpyFromSymbol(dst, symbol, count, offset, kind);
	fprintf(stderr, ">>>>>>>> cudaMemcpyFromSymbol returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaMemcpyAsync)(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaMemcpyAsync(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpyAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpyAsync called\n");
	ret = orig_cudaMemcpyAsync(dst, src, count, kind, stream);
	fprintf(stderr, ">>>>>>>> cudaMemcpyAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpyPeerAsync)(void *dst, int dstDevice, const void *src, int srcDevice, size_t count, cudaStream_t stream ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpyPeerAsync(void *dst, int dstDevice, const void *src, int srcDevice, size_t count, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpyPeerAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpyPeerAsync called\n");
	ret = orig_cudaMemcpyPeerAsync(dst, dstDevice, src, srcDevice, count, stream);
	fprintf(stderr, ">>>>>>>> cudaMemcpyPeerAsync returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaMemcpy2DAsync)(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaMemcpy2DAsync(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy2DAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpy2DAsync called\n");
	ret = orig_cudaMemcpy2DAsync(dst, dpitch, src, spitch, width, height, kind, stream);
	fprintf(stderr, ">>>>>>>> cudaMemcpy2DAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpy2DToArrayAsync)(cudaArray_t dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy2DToArrayAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpy2DToArrayAsync called\n");
	ret = orig_cudaMemcpy2DToArrayAsync(dst, wOffset, hOffset, src, spitch, width, height, kind, stream);
	fprintf(stderr, ">>>>>>>> cudaMemcpy2DToArrayAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpy2DFromArrayAsync)(void *dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpy2DFromArrayAsync(void *dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpy2DFromArrayAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpy2DFromArrayAsync called\n");
	ret = orig_cudaMemcpy2DFromArrayAsync(dst, dpitch, src, wOffset, hOffset, width, height, kind, stream);
	fprintf(stderr, ">>>>>>>> cudaMemcpy2DFromArrayAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpyToSymbolAsync)(const void *symbol, const void *src, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpyToSymbolAsync(const void *symbol, const void *src, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpyToSymbolAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpyToSymbolAsync called\n");
	ret = orig_cudaMemcpyToSymbolAsync(symbol, src, count, offset, kind, stream);
	fprintf(stderr, ">>>>>>>> cudaMemcpyToSymbolAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemcpyFromSymbolAsync)(void *dst, const void *symbol, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemcpyFromSymbolAsync(void *dst, const void *symbol, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemcpyFromSymbolAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMemcpyFromSymbolAsync called\n");
	ret = orig_cudaMemcpyFromSymbolAsync(dst, symbol, count, offset, kind, stream);
	fprintf(stderr, ">>>>>>>> cudaMemcpyFromSymbolAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemset)(void *devPtr, int value, size_t count) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemset(void *devPtr, int value, size_t count) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemset.c file
	fprintf(stderr, ">>>>>>>> cudaMemset called\n");
	ret = orig_cudaMemset(devPtr, value, count);
	fprintf(stderr, ">>>>>>>> cudaMemset returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemset2D)(void *devPtr, size_t pitch, int value, size_t width, size_t height) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemset2D(void *devPtr, size_t pitch, int value, size_t width, size_t height) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemset2D.c file
	fprintf(stderr, ">>>>>>>> cudaMemset2D called\n");
	ret = orig_cudaMemset2D(devPtr, pitch, value, width, height);
	fprintf(stderr, ">>>>>>>> cudaMemset2D returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemset3D)(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemset3D(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemset3D.c file
	fprintf(stderr, ">>>>>>>> cudaMemset3D called\n");
	ret = orig_cudaMemset3D(pitchedDevPtr, value, extent);
	fprintf(stderr, ">>>>>>>> cudaMemset3D returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaMemsetAsync)(void *devPtr, int value, size_t count, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaMemsetAsync(void *devPtr, int value, size_t count, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemsetAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMemsetAsync called\n");
	ret = orig_cudaMemsetAsync(devPtr, value, count, stream);
	fprintf(stderr, ">>>>>>>> cudaMemsetAsync returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaMemset2DAsync)(void *devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaMemset2DAsync(void *devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemset2DAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMemset2DAsync called\n");
	ret = orig_cudaMemset2DAsync(devPtr, pitch, value, width, height, stream);
	fprintf(stderr, ">>>>>>>> cudaMemset2DAsync returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaMemset3DAsync)(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent, cudaStream_t stream ) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaMemset3DAsync(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemset3DAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMemset3DAsync called\n");
	ret = orig_cudaMemset3DAsync(pitchedDevPtr, value, extent, stream);
	fprintf(stderr, ">>>>>>>> cudaMemset3DAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGetSymbolAddress)(void **devPtr, const void *symbol) = NULL;

__host__ cudaError_t CUDARTAPI cudaGetSymbolAddress(void **devPtr, const void *symbol) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetSymbolAddress.c file
	fprintf(stderr, ">>>>>>>> cudaGetSymbolAddress called\n");
	ret = orig_cudaGetSymbolAddress(devPtr, symbol);
	fprintf(stderr, ">>>>>>>> cudaGetSymbolAddress returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGetSymbolSize)(size_t *size, const void *symbol) = NULL;

__host__ cudaError_t CUDARTAPI cudaGetSymbolSize(size_t *size, const void *symbol) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetSymbolSize.c file
	fprintf(stderr, ">>>>>>>> cudaGetSymbolSize called\n");
	ret = orig_cudaGetSymbolSize(size, symbol);
	fprintf(stderr, ">>>>>>>> cudaGetSymbolSize returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemPrefetchAsync)(const void *devPtr, size_t count, int dstDevice, cudaStream_t stream ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemPrefetchAsync(const void *devPtr, size_t count, int dstDevice, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPrefetchAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMemPrefetchAsync called\n");
	ret = orig_cudaMemPrefetchAsync(devPtr, count, dstDevice, stream);
	fprintf(stderr, ">>>>>>>> cudaMemPrefetchAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemPrefetchAsync_v2)(const void *devPtr, size_t count, struct cudaMemLocation location, unsigned int flags, cudaStream_t stream ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemPrefetchAsync_v2(const void *devPtr, size_t count, struct cudaMemLocation location, unsigned int flags, cudaStream_t stream ) {
    	cudaError_t  cudaMemPrefetchAsync_ ret;
	// Write your own custom c code in the cudaMemPrefetchAsync_v2.c file
	fprintf(stderr, ">>>>>>>> cudaMemPrefetchAsync_v2 called\n");
	ret = orig_cudaMemPrefetchAsync_v2(devPtr, count, location, flags, stream);
	fprintf(stderr, ">>>>>>>> cudaMemPrefetchAsync_v2 returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemAdvise)(const void *devPtr, size_t count, enum cudaMemoryAdvise advice, int device) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemAdvise(const void *devPtr, size_t count, enum cudaMemoryAdvise advice, int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemAdvise.c file
	fprintf(stderr, ">>>>>>>> cudaMemAdvise called\n");
	ret = orig_cudaMemAdvise(devPtr, count, advice, device);
	fprintf(stderr, ">>>>>>>> cudaMemAdvise returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemAdvise_v2)(const void *devPtr, size_t count, enum cudaMemoryAdvise advice, struct cudaMemLocation location) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemAdvise_v2(const void *devPtr, size_t count, enum cudaMemoryAdvise advice, struct cudaMemLocation location) {
    	cudaError_t  cudaMemAdvise_ ret;
	// Write your own custom c code in the cudaMemAdvise_v2.c file
	fprintf(stderr, ">>>>>>>> cudaMemAdvise_v2 called\n");
	ret = orig_cudaMemAdvise_v2(devPtr, count, advice, location);
	fprintf(stderr, ">>>>>>>> cudaMemAdvise_v2 returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemRangeGetAttribute)(void *data, size_t dataSize, enum cudaMemRangeAttribute attribute, const void *devPtr, size_t count) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemRangeGetAttribute(void *data, size_t dataSize, enum cudaMemRangeAttribute attribute, const void *devPtr, size_t count) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemRangeGetAttribute.c file
	fprintf(stderr, ">>>>>>>> cudaMemRangeGetAttribute called\n");
	ret = orig_cudaMemRangeGetAttribute(data, dataSize, attribute, devPtr, count);
	fprintf(stderr, ">>>>>>>> cudaMemRangeGetAttribute returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemRangeGetAttributes)(void **data, size_t *dataSizes, enum cudaMemRangeAttribute *attributes, size_t numAttributes, const void *devPtr, size_t count) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemRangeGetAttributes(void **data, size_t *dataSizes, enum cudaMemRangeAttribute *attributes, size_t numAttributes, const void *devPtr, size_t count) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemRangeGetAttributes.c file
	fprintf(stderr, ">>>>>>>> cudaMemRangeGetAttributes called\n");
	ret = orig_cudaMemRangeGetAttributes(data, dataSizes, attributes, numAttributes, devPtr, count);
	fprintf(stderr, ">>>>>>>> cudaMemRangeGetAttributes returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMallocAsync)(void **devPtr, size_t size, cudaStream_t hStream) = NULL;

__host__ cudaError_t CUDARTAPI cudaMallocAsync(void **devPtr, size_t size, cudaStream_t hStream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMallocAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMallocAsync called\n");
	ret = orig_cudaMallocAsync(devPtr, size, hStream);
	fprintf(stderr, ">>>>>>>> cudaMallocAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaFreeAsync)(void *devPtr, cudaStream_t hStream) = NULL;

__host__ cudaError_t CUDARTAPI cudaFreeAsync(void *devPtr, cudaStream_t hStream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaFreeAsync.c file
	fprintf(stderr, ">>>>>>>> cudaFreeAsync called\n");
	ret = orig_cudaFreeAsync(devPtr, hStream);
	fprintf(stderr, ">>>>>>>> cudaFreeAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemPoolTrimTo)(cudaMemPool_t memPool, size_t minBytesToKeep) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemPoolTrimTo(cudaMemPool_t memPool, size_t minBytesToKeep) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolTrimTo.c file
	fprintf(stderr, ">>>>>>>> cudaMemPoolTrimTo called\n");
	ret = orig_cudaMemPoolTrimTo(memPool, minBytesToKeep);
	fprintf(stderr, ">>>>>>>> cudaMemPoolTrimTo returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemPoolSetAttribute)(cudaMemPool_t memPool, enum cudaMemPoolAttr attr, void *value ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemPoolSetAttribute(cudaMemPool_t memPool, enum cudaMemPoolAttr attr, void *value ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolSetAttribute.c file
	fprintf(stderr, ">>>>>>>> cudaMemPoolSetAttribute called\n");
	ret = orig_cudaMemPoolSetAttribute(memPool, attr, value);
	fprintf(stderr, ">>>>>>>> cudaMemPoolSetAttribute returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemPoolGetAttribute)(cudaMemPool_t memPool, enum cudaMemPoolAttr attr, void *value ) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemPoolGetAttribute(cudaMemPool_t memPool, enum cudaMemPoolAttr attr, void *value ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolGetAttribute.c file
	fprintf(stderr, ">>>>>>>> cudaMemPoolGetAttribute called\n");
	ret = orig_cudaMemPoolGetAttribute(memPool, attr, value);
	fprintf(stderr, ">>>>>>>> cudaMemPoolGetAttribute returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemPoolSetAccess)(cudaMemPool_t memPool, const struct cudaMemAccessDesc *descList, size_t count) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemPoolSetAccess(cudaMemPool_t memPool, const struct cudaMemAccessDesc *descList, size_t count) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolSetAccess.c file
	fprintf(stderr, ">>>>>>>> cudaMemPoolSetAccess called\n");
	ret = orig_cudaMemPoolSetAccess(memPool, descList, count);
	fprintf(stderr, ">>>>>>>> cudaMemPoolSetAccess returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemPoolGetAccess)(enum cudaMemAccessFlags *flags, cudaMemPool_t memPool, struct cudaMemLocation *location) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemPoolGetAccess(enum cudaMemAccessFlags *flags, cudaMemPool_t memPool, struct cudaMemLocation *location) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolGetAccess.c file
	fprintf(stderr, ">>>>>>>> cudaMemPoolGetAccess called\n");
	ret = orig_cudaMemPoolGetAccess(flags, memPool, location);
	fprintf(stderr, ">>>>>>>> cudaMemPoolGetAccess returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemPoolCreate)(cudaMemPool_t *memPool, const struct cudaMemPoolProps *poolProps) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemPoolCreate(cudaMemPool_t *memPool, const struct cudaMemPoolProps *poolProps) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolCreate.c file
	fprintf(stderr, ">>>>>>>> cudaMemPoolCreate called\n");
	ret = orig_cudaMemPoolCreate(memPool, poolProps);
	fprintf(stderr, ">>>>>>>> cudaMemPoolCreate returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemPoolDestroy)(cudaMemPool_t memPool) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemPoolDestroy(cudaMemPool_t memPool) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolDestroy.c file
	fprintf(stderr, ">>>>>>>> cudaMemPoolDestroy called\n");
	ret = orig_cudaMemPoolDestroy(memPool);
	fprintf(stderr, ">>>>>>>> cudaMemPoolDestroy returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMallocFromPoolAsync)(void **ptr, size_t size, cudaMemPool_t memPool, cudaStream_t stream) = NULL;

__host__ cudaError_t CUDARTAPI cudaMallocFromPoolAsync(void **ptr, size_t size, cudaMemPool_t memPool, cudaStream_t stream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMallocFromPoolAsync.c file
	fprintf(stderr, ">>>>>>>> cudaMallocFromPoolAsync called\n");
	ret = orig_cudaMallocFromPoolAsync(ptr, size, memPool, stream);
	fprintf(stderr, ">>>>>>>> cudaMallocFromPoolAsync returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemPoolExportToShareableHandle)(    void                            *shareableHandle,    cudaMemPool_t                    memPool,    enum cudaMemAllocationHandleType handleType,    unsigned int                     flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemPoolExportToShareableHandle(    void                            *shareableHandle,    cudaMemPool_t                    memPool,    enum cudaMemAllocationHandleType handleType,    unsigned int                     flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolExportToShareableHandle.c file
	fprintf(stderr, ">>>>>>>> cudaMemPoolExportToShareableHandle called\n");
	ret = orig_cudaMemPoolExportToShareableHandle(shareableHandle, memPool, handleType, flags);
	fprintf(stderr, ">>>>>>>> cudaMemPoolExportToShareableHandle returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemPoolImportFromShareableHandle)(    cudaMemPool_t                   *memPool,    void                            *shareableHandle,    enum cudaMemAllocationHandleType handleType,    unsigned int                     flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemPoolImportFromShareableHandle(    cudaMemPool_t                   *memPool,    void                            *shareableHandle,    enum cudaMemAllocationHandleType handleType,    unsigned int                     flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolImportFromShareableHandle.c file
	fprintf(stderr, ">>>>>>>> cudaMemPoolImportFromShareableHandle called\n");
	ret = orig_cudaMemPoolImportFromShareableHandle(memPool, shareableHandle, handleType, flags);
	fprintf(stderr, ">>>>>>>> cudaMemPoolImportFromShareableHandle returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemPoolExportPointer)(struct cudaMemPoolPtrExportData *exportData, void *ptr) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemPoolExportPointer(struct cudaMemPoolPtrExportData *exportData, void *ptr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolExportPointer.c file
	fprintf(stderr, ">>>>>>>> cudaMemPoolExportPointer called\n");
	ret = orig_cudaMemPoolExportPointer(exportData, ptr);
	fprintf(stderr, ">>>>>>>> cudaMemPoolExportPointer returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaMemPoolImportPointer)(void **ptr, cudaMemPool_t memPool, struct cudaMemPoolPtrExportData *exportData) = NULL;

__host__ cudaError_t CUDARTAPI cudaMemPoolImportPointer(void **ptr, cudaMemPool_t memPool, struct cudaMemPoolPtrExportData *exportData) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaMemPoolImportPointer.c file
	fprintf(stderr, ">>>>>>>> cudaMemPoolImportPointer called\n");
	ret = orig_cudaMemPoolImportPointer(ptr, memPool, exportData);
	fprintf(stderr, ">>>>>>>> cudaMemPoolImportPointer returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaPointerGetAttributes)(struct cudaPointerAttributes *attributes, const void *ptr) = NULL;

__host__ cudaError_t CUDARTAPI cudaPointerGetAttributes(struct cudaPointerAttributes *attributes, const void *ptr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaPointerGetAttributes.c file
	fprintf(stderr, ">>>>>>>> cudaPointerGetAttributes called\n");
	ret = orig_cudaPointerGetAttributes(attributes, ptr);
	fprintf(stderr, ">>>>>>>> cudaPointerGetAttributes returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceCanAccessPeer)(int *canAccessPeer, int device, int peerDevice) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceCanAccessPeer(int *canAccessPeer, int device, int peerDevice) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceCanAccessPeer.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceCanAccessPeer called\n");
	ret = orig_cudaDeviceCanAccessPeer(canAccessPeer, device, peerDevice);
	fprintf(stderr, ">>>>>>>> cudaDeviceCanAccessPeer returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceEnablePeerAccess)(int peerDevice, unsigned int flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceEnablePeerAccess(int peerDevice, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceEnablePeerAccess.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceEnablePeerAccess called\n");
	ret = orig_cudaDeviceEnablePeerAccess(peerDevice, flags);
	fprintf(stderr, ">>>>>>>> cudaDeviceEnablePeerAccess returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceDisablePeerAccess)(int peerDevice) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceDisablePeerAccess(int peerDevice) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceDisablePeerAccess.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceDisablePeerAccess called\n");
	ret = orig_cudaDeviceDisablePeerAccess(peerDevice);
	fprintf(stderr, ">>>>>>>> cudaDeviceDisablePeerAccess returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphicsUnregisterResource)(cudaGraphicsResource_t resource) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphicsUnregisterResource.c file
	fprintf(stderr, ">>>>>>>> cudaGraphicsUnregisterResource called\n");
	ret = orig_cudaGraphicsUnregisterResource(resource);
	fprintf(stderr, ">>>>>>>> cudaGraphicsUnregisterResource returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphicsResourceSetMapFlags)(cudaGraphicsResource_t resource, unsigned int flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphicsResourceSetMapFlags.c file
	fprintf(stderr, ">>>>>>>> cudaGraphicsResourceSetMapFlags called\n");
	ret = orig_cudaGraphicsResourceSetMapFlags(resource, flags);
	fprintf(stderr, ">>>>>>>> cudaGraphicsResourceSetMapFlags returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphicsMapResources)(int count, cudaGraphicsResource_t *resources, cudaStream_t stream ) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphicsMapResources(int count, cudaGraphicsResource_t *resources, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphicsMapResources.c file
	fprintf(stderr, ">>>>>>>> cudaGraphicsMapResources called\n");
	ret = orig_cudaGraphicsMapResources(count, resources, stream);
	fprintf(stderr, ">>>>>>>> cudaGraphicsMapResources returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphicsUnmapResources)(int count, cudaGraphicsResource_t *resources, cudaStream_t stream ) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t *resources, cudaStream_t stream ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphicsUnmapResources.c file
	fprintf(stderr, ">>>>>>>> cudaGraphicsUnmapResources called\n");
	ret = orig_cudaGraphicsUnmapResources(count, resources, stream);
	fprintf(stderr, ">>>>>>>> cudaGraphicsUnmapResources returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphicsResourceGetMappedPointer)(void **devPtr, size_t *size, cudaGraphicsResource_t resource) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphicsResourceGetMappedPointer(void **devPtr, size_t *size, cudaGraphicsResource_t resource) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphicsResourceGetMappedPointer.c file
	fprintf(stderr, ">>>>>>>> cudaGraphicsResourceGetMappedPointer called\n");
	ret = orig_cudaGraphicsResourceGetMappedPointer(devPtr, size, resource);
	fprintf(stderr, ">>>>>>>> cudaGraphicsResourceGetMappedPointer returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphicsSubResourceGetMappedArray)(cudaArray_t *array, cudaGraphicsResource_t resource, unsigned int arrayIndex, unsigned int mipLevel) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphicsSubResourceGetMappedArray(cudaArray_t *array, cudaGraphicsResource_t resource, unsigned int arrayIndex, unsigned int mipLevel) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphicsSubResourceGetMappedArray.c file
	fprintf(stderr, ">>>>>>>> cudaGraphicsSubResourceGetMappedArray called\n");
	ret = orig_cudaGraphicsSubResourceGetMappedArray(array, resource, arrayIndex, mipLevel);
	fprintf(stderr, ">>>>>>>> cudaGraphicsSubResourceGetMappedArray returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphicsResourceGetMappedMipmappedArray)(cudaMipmappedArray_t *mipmappedArray, cudaGraphicsResource_t resource) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t *mipmappedArray, cudaGraphicsResource_t resource) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphicsResourceGetMappedMipmappedArray.c file
	fprintf(stderr, ">>>>>>>> cudaGraphicsResourceGetMappedMipmappedArray called\n");
	ret = orig_cudaGraphicsResourceGetMappedMipmappedArray(mipmappedArray, resource);
	fprintf(stderr, ">>>>>>>> cudaGraphicsResourceGetMappedMipmappedArray returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGetChannelDesc)(struct cudaChannelFormatDesc *desc, cudaArray_const_t array) = NULL;

__host__ cudaError_t CUDARTAPI cudaGetChannelDesc(struct cudaChannelFormatDesc *desc, cudaArray_const_t array) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetChannelDesc.c file
	fprintf(stderr, ">>>>>>>> cudaGetChannelDesc called\n");
	ret = orig_cudaGetChannelDesc(desc, array);
	fprintf(stderr, ">>>>>>>> cudaGetChannelDesc returned\n");
	return ret;

}

static __host__ struct cudaChannelFormatDesc CUDARTAPI (*orig_cudaCreateChannelDesc)(int x, int y, int z, int w, enum cudaChannelFormatKind f) = NULL;

__host__ struct cudaChannelFormatDesc CUDARTAPI cudaCreateChannelDesc(int x, int y, int z, int w, enum cudaChannelFormatKind f) {
    	struct cudaChannelFormatDesc ret;
	// Write your own custom c code in the cudaCreateChannelDesc.c file
	fprintf(stderr, ">>>>>>>> cudaCreateChannelDesc called\n");
	ret = orig_cudaCreateChannelDesc(x, y, z, w, f);
	fprintf(stderr, ">>>>>>>> cudaCreateChannelDesc returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaCreateTextureObject)(cudaTextureObject_t *pTexObject, const struct cudaResourceDesc *pResDesc, const struct cudaTextureDesc *pTexDesc, const struct cudaResourceViewDesc *pResViewDesc) = NULL;

__host__ cudaError_t CUDARTAPI cudaCreateTextureObject(cudaTextureObject_t *pTexObject, const struct cudaResourceDesc *pResDesc, const struct cudaTextureDesc *pTexDesc, const struct cudaResourceViewDesc *pResViewDesc) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaCreateTextureObject.c file
	fprintf(stderr, ">>>>>>>> cudaCreateTextureObject called\n");
	ret = orig_cudaCreateTextureObject(pTexObject, pResDesc, pTexDesc, pResViewDesc);
	fprintf(stderr, ">>>>>>>> cudaCreateTextureObject returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDestroyTextureObject)(cudaTextureObject_t texObject) = NULL;

__host__ cudaError_t CUDARTAPI cudaDestroyTextureObject(cudaTextureObject_t texObject) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDestroyTextureObject.c file
	fprintf(stderr, ">>>>>>>> cudaDestroyTextureObject called\n");
	ret = orig_cudaDestroyTextureObject(texObject);
	fprintf(stderr, ">>>>>>>> cudaDestroyTextureObject returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGetTextureObjectResourceDesc)(struct cudaResourceDesc *pResDesc, cudaTextureObject_t texObject) = NULL;

__host__ cudaError_t CUDARTAPI cudaGetTextureObjectResourceDesc(struct cudaResourceDesc *pResDesc, cudaTextureObject_t texObject) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetTextureObjectResourceDesc.c file
	fprintf(stderr, ">>>>>>>> cudaGetTextureObjectResourceDesc called\n");
	ret = orig_cudaGetTextureObjectResourceDesc(pResDesc, texObject);
	fprintf(stderr, ">>>>>>>> cudaGetTextureObjectResourceDesc returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGetTextureObjectTextureDesc)(struct cudaTextureDesc *pTexDesc, cudaTextureObject_t texObject) = NULL;

__host__ cudaError_t CUDARTAPI cudaGetTextureObjectTextureDesc(struct cudaTextureDesc *pTexDesc, cudaTextureObject_t texObject) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetTextureObjectTextureDesc.c file
	fprintf(stderr, ">>>>>>>> cudaGetTextureObjectTextureDesc called\n");
	ret = orig_cudaGetTextureObjectTextureDesc(pTexDesc, texObject);
	fprintf(stderr, ">>>>>>>> cudaGetTextureObjectTextureDesc returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGetTextureObjectResourceViewDesc)(struct cudaResourceViewDesc *pResViewDesc, cudaTextureObject_t texObject) = NULL;

__host__ cudaError_t CUDARTAPI cudaGetTextureObjectResourceViewDesc(struct cudaResourceViewDesc *pResViewDesc, cudaTextureObject_t texObject) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetTextureObjectResourceViewDesc.c file
	fprintf(stderr, ">>>>>>>> cudaGetTextureObjectResourceViewDesc called\n");
	ret = orig_cudaGetTextureObjectResourceViewDesc(pResViewDesc, texObject);
	fprintf(stderr, ">>>>>>>> cudaGetTextureObjectResourceViewDesc returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaCreateSurfaceObject)(cudaSurfaceObject_t *pSurfObject, const struct cudaResourceDesc *pResDesc) = NULL;

__host__ cudaError_t CUDARTAPI cudaCreateSurfaceObject(cudaSurfaceObject_t *pSurfObject, const struct cudaResourceDesc *pResDesc) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaCreateSurfaceObject.c file
	fprintf(stderr, ">>>>>>>> cudaCreateSurfaceObject called\n");
	ret = orig_cudaCreateSurfaceObject(pSurfObject, pResDesc);
	fprintf(stderr, ">>>>>>>> cudaCreateSurfaceObject returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDestroySurfaceObject)(cudaSurfaceObject_t surfObject) = NULL;

__host__ cudaError_t CUDARTAPI cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDestroySurfaceObject.c file
	fprintf(stderr, ">>>>>>>> cudaDestroySurfaceObject called\n");
	ret = orig_cudaDestroySurfaceObject(surfObject);
	fprintf(stderr, ">>>>>>>> cudaDestroySurfaceObject returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGetSurfaceObjectResourceDesc)(struct cudaResourceDesc *pResDesc, cudaSurfaceObject_t surfObject) = NULL;

__host__ cudaError_t CUDARTAPI cudaGetSurfaceObjectResourceDesc(struct cudaResourceDesc *pResDesc, cudaSurfaceObject_t surfObject) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetSurfaceObjectResourceDesc.c file
	fprintf(stderr, ">>>>>>>> cudaGetSurfaceObjectResourceDesc called\n");
	ret = orig_cudaGetSurfaceObjectResourceDesc(pResDesc, surfObject);
	fprintf(stderr, ">>>>>>>> cudaGetSurfaceObjectResourceDesc returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDriverGetVersion)(int *driverVersion) = NULL;

__host__ cudaError_t CUDARTAPI cudaDriverGetVersion(int *driverVersion) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDriverGetVersion.c file
	fprintf(stderr, ">>>>>>>> cudaDriverGetVersion called\n");
	ret = orig_cudaDriverGetVersion(driverVersion);
	fprintf(stderr, ">>>>>>>> cudaDriverGetVersion returned\n");
	return ret;

}

static __host__ __cudart_builtin__ cudaError_t CUDARTAPI (*orig_cudaRuntimeGetVersion)(int *runtimeVersion) = NULL;

__host__ __cudart_builtin__ cudaError_t CUDARTAPI cudaRuntimeGetVersion(int *runtimeVersion) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaRuntimeGetVersion.c file
	fprintf(stderr, ">>>>>>>> cudaRuntimeGetVersion called\n");
	ret = orig_cudaRuntimeGetVersion(runtimeVersion);
	fprintf(stderr, ">>>>>>>> cudaRuntimeGetVersion returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphCreate)(cudaGraph_t *pGraph, unsigned int flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphCreate(cudaGraph_t *pGraph, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphCreate.c file
	fprintf(stderr, ">>>>>>>> cudaGraphCreate called\n");
	ret = orig_cudaGraphCreate(pGraph, flags);
	fprintf(stderr, ">>>>>>>> cudaGraphCreate returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphAddKernelNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaKernelNodeParams *pNodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphAddKernelNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaKernelNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddKernelNode.c file
	fprintf(stderr, ">>>>>>>> cudaGraphAddKernelNode called\n");
	ret = orig_cudaGraphAddKernelNode(pGraphNode, graph, pDependencies, numDependencies, pNodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphAddKernelNode returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphKernelNodeGetParams)(cudaGraphNode_t node, struct cudaKernelNodeParams *pNodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphKernelNodeGetParams(cudaGraphNode_t node, struct cudaKernelNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphKernelNodeGetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeGetParams called\n");
	ret = orig_cudaGraphKernelNodeGetParams(node, pNodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeGetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphKernelNodeSetParams)(cudaGraphNode_t node, const struct cudaKernelNodeParams *pNodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphKernelNodeSetParams(cudaGraphNode_t node, const struct cudaKernelNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphKernelNodeSetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeSetParams called\n");
	ret = orig_cudaGraphKernelNodeSetParams(node, pNodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeSetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphKernelNodeCopyAttributes)(        cudaGraphNode_t hSrc,        cudaGraphNode_t hDst) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphKernelNodeCopyAttributes(        cudaGraphNode_t hSrc,        cudaGraphNode_t hDst) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphKernelNodeCopyAttributes.c file
	fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeCopyAttributes called\n");
	ret = orig_cudaGraphKernelNodeCopyAttributes(hSrc, hDst);
	fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeCopyAttributes returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphKernelNodeGetAttribute)(    cudaGraphNode_t hNode,    cudaKernelNodeAttrID attr,    cudaKernelNodeAttrValue *value_out) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphKernelNodeGetAttribute(    cudaGraphNode_t hNode,    cudaKernelNodeAttrID attr,    cudaKernelNodeAttrValue *value_out) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphKernelNodeGetAttribute.c file
	fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeGetAttribute called\n");
	ret = orig_cudaGraphKernelNodeGetAttribute(hNode, attr, value_out);
	fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeGetAttribute returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphKernelNodeSetAttribute)(    cudaGraphNode_t hNode,    cudaKernelNodeAttrID attr,    const cudaKernelNodeAttrValue *value) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphKernelNodeSetAttribute(    cudaGraphNode_t hNode,    cudaKernelNodeAttrID attr,    const cudaKernelNodeAttrValue *value) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphKernelNodeSetAttribute.c file
	fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeSetAttribute called\n");
	ret = orig_cudaGraphKernelNodeSetAttribute(hNode, attr, value);
	fprintf(stderr, ">>>>>>>> cudaGraphKernelNodeSetAttribute returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphAddMemcpyNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaMemcpy3DParms *pCopyParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphAddMemcpyNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaMemcpy3DParms *pCopyParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddMemcpyNode.c file
	fprintf(stderr, ">>>>>>>> cudaGraphAddMemcpyNode called\n");
	ret = orig_cudaGraphAddMemcpyNode(pGraphNode, graph, pDependencies, numDependencies, pCopyParams);
	fprintf(stderr, ">>>>>>>> cudaGraphAddMemcpyNode returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphMemcpyNodeGetParams)(cudaGraphNode_t node, struct cudaMemcpy3DParms *pNodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node, struct cudaMemcpy3DParms *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphMemcpyNodeGetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphMemcpyNodeGetParams called\n");
	ret = orig_cudaGraphMemcpyNodeGetParams(node, pNodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphMemcpyNodeGetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphMemcpyNodeSetParams)(cudaGraphNode_t node, const struct cudaMemcpy3DParms *pNodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node, const struct cudaMemcpy3DParms *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphMemcpyNodeSetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphMemcpyNodeSetParams called\n");
	ret = orig_cudaGraphMemcpyNodeSetParams(node, pNodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphMemcpyNodeSetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphAddMemsetNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaMemsetParams *pMemsetParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphAddMemsetNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaMemsetParams *pMemsetParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddMemsetNode.c file
	fprintf(stderr, ">>>>>>>> cudaGraphAddMemsetNode called\n");
	ret = orig_cudaGraphAddMemsetNode(pGraphNode, graph, pDependencies, numDependencies, pMemsetParams);
	fprintf(stderr, ">>>>>>>> cudaGraphAddMemsetNode returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphMemsetNodeGetParams)(cudaGraphNode_t node, struct cudaMemsetParams *pNodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphMemsetNodeGetParams(cudaGraphNode_t node, struct cudaMemsetParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphMemsetNodeGetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphMemsetNodeGetParams called\n");
	ret = orig_cudaGraphMemsetNodeGetParams(node, pNodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphMemsetNodeGetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphMemsetNodeSetParams)(cudaGraphNode_t node, const struct cudaMemsetParams *pNodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphMemsetNodeSetParams(cudaGraphNode_t node, const struct cudaMemsetParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphMemsetNodeSetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphMemsetNodeSetParams called\n");
	ret = orig_cudaGraphMemsetNodeSetParams(node, pNodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphMemsetNodeSetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphAddHostNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaHostNodeParams *pNodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphAddHostNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaHostNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddHostNode.c file
	fprintf(stderr, ">>>>>>>> cudaGraphAddHostNode called\n");
	ret = orig_cudaGraphAddHostNode(pGraphNode, graph, pDependencies, numDependencies, pNodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphAddHostNode returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphHostNodeGetParams)(cudaGraphNode_t node, struct cudaHostNodeParams *pNodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphHostNodeGetParams(cudaGraphNode_t node, struct cudaHostNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphHostNodeGetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphHostNodeGetParams called\n");
	ret = orig_cudaGraphHostNodeGetParams(node, pNodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphHostNodeGetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphHostNodeSetParams)(cudaGraphNode_t node, const struct cudaHostNodeParams *pNodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphHostNodeSetParams(cudaGraphNode_t node, const struct cudaHostNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphHostNodeSetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphHostNodeSetParams called\n");
	ret = orig_cudaGraphHostNodeSetParams(node, pNodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphHostNodeSetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphAddChildGraphNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, cudaGraph_t childGraph) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphAddChildGraphNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, cudaGraph_t childGraph) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddChildGraphNode.c file
	fprintf(stderr, ">>>>>>>> cudaGraphAddChildGraphNode called\n");
	ret = orig_cudaGraphAddChildGraphNode(pGraphNode, graph, pDependencies, numDependencies, childGraph);
	fprintf(stderr, ">>>>>>>> cudaGraphAddChildGraphNode returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphChildGraphNodeGetGraph)(cudaGraphNode_t node, cudaGraph_t *pGraph) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t *pGraph) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphChildGraphNodeGetGraph.c file
	fprintf(stderr, ">>>>>>>> cudaGraphChildGraphNodeGetGraph called\n");
	ret = orig_cudaGraphChildGraphNodeGetGraph(node, pGraph);
	fprintf(stderr, ">>>>>>>> cudaGraphChildGraphNodeGetGraph returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphAddEmptyNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphAddEmptyNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddEmptyNode.c file
	fprintf(stderr, ">>>>>>>> cudaGraphAddEmptyNode called\n");
	ret = orig_cudaGraphAddEmptyNode(pGraphNode, graph, pDependencies, numDependencies);
	fprintf(stderr, ">>>>>>>> cudaGraphAddEmptyNode returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphAddExternalSemaphoresSignalNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphAddExternalSemaphoresSignalNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddExternalSemaphoresSignalNode.c file
	fprintf(stderr, ">>>>>>>> cudaGraphAddExternalSemaphoresSignalNode called\n");
	ret = orig_cudaGraphAddExternalSemaphoresSignalNode(pGraphNode, graph, pDependencies, numDependencies, nodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphAddExternalSemaphoresSignalNode returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphExternalSemaphoresSignalNodeGetParams)(cudaGraphNode_t hNode, struct cudaExternalSemaphoreSignalNodeParams *params_out) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphExternalSemaphoresSignalNodeGetParams(cudaGraphNode_t hNode, struct cudaExternalSemaphoreSignalNodeParams *params_out) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExternalSemaphoresSignalNodeGetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeGetParams called\n");
	ret = orig_cudaGraphExternalSemaphoresSignalNodeGetParams(hNode, params_out);
	fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeGetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphExternalSemaphoresSignalNodeSetParams)(cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphExternalSemaphoresSignalNodeSetParams(cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExternalSemaphoresSignalNodeSetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeSetParams called\n");
	ret = orig_cudaGraphExternalSemaphoresSignalNodeSetParams(hNode, nodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresSignalNodeSetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphAddExternalSemaphoresWaitNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphAddExternalSemaphoresWaitNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddExternalSemaphoresWaitNode.c file
	fprintf(stderr, ">>>>>>>> cudaGraphAddExternalSemaphoresWaitNode called\n");
	ret = orig_cudaGraphAddExternalSemaphoresWaitNode(pGraphNode, graph, pDependencies, numDependencies, nodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphAddExternalSemaphoresWaitNode returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphExternalSemaphoresWaitNodeGetParams)(cudaGraphNode_t hNode, struct cudaExternalSemaphoreWaitNodeParams *params_out) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphExternalSemaphoresWaitNodeGetParams(cudaGraphNode_t hNode, struct cudaExternalSemaphoreWaitNodeParams *params_out) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExternalSemaphoresWaitNodeGetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeGetParams called\n");
	ret = orig_cudaGraphExternalSemaphoresWaitNodeGetParams(hNode, params_out);
	fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeGetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphExternalSemaphoresWaitNodeSetParams)(cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphExternalSemaphoresWaitNodeSetParams(cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExternalSemaphoresWaitNodeSetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeSetParams called\n");
	ret = orig_cudaGraphExternalSemaphoresWaitNodeSetParams(hNode, nodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphExternalSemaphoresWaitNodeSetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphAddMemAllocNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, struct cudaMemAllocNodeParams *nodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphAddMemAllocNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, struct cudaMemAllocNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddMemAllocNode.c file
	fprintf(stderr, ">>>>>>>> cudaGraphAddMemAllocNode called\n");
	ret = orig_cudaGraphAddMemAllocNode(pGraphNode, graph, pDependencies, numDependencies, nodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphAddMemAllocNode returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphMemAllocNodeGetParams)(cudaGraphNode_t node, struct cudaMemAllocNodeParams *params_out) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphMemAllocNodeGetParams(cudaGraphNode_t node, struct cudaMemAllocNodeParams *params_out) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphMemAllocNodeGetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphMemAllocNodeGetParams called\n");
	ret = orig_cudaGraphMemAllocNodeGetParams(node, params_out);
	fprintf(stderr, ">>>>>>>> cudaGraphMemAllocNodeGetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphAddMemFreeNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, void *dptr) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphAddMemFreeNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, void *dptr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddMemFreeNode.c file
	fprintf(stderr, ">>>>>>>> cudaGraphAddMemFreeNode called\n");
	ret = orig_cudaGraphAddMemFreeNode(pGraphNode, graph, pDependencies, numDependencies, dptr);
	fprintf(stderr, ">>>>>>>> cudaGraphAddMemFreeNode returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphMemFreeNodeGetParams)(cudaGraphNode_t node, void *dptr_out) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphMemFreeNodeGetParams(cudaGraphNode_t node, void *dptr_out) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphMemFreeNodeGetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphMemFreeNodeGetParams called\n");
	ret = orig_cudaGraphMemFreeNodeGetParams(node, dptr_out);
	fprintf(stderr, ">>>>>>>> cudaGraphMemFreeNodeGetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceGraphMemTrim)(int device) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceGraphMemTrim(int device) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGraphMemTrim.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceGraphMemTrim called\n");
	ret = orig_cudaDeviceGraphMemTrim(device);
	fprintf(stderr, ">>>>>>>> cudaDeviceGraphMemTrim returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceGetGraphMemAttribute)(int device, enum cudaGraphMemAttributeType attr, void* value) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceGetGraphMemAttribute(int device, enum cudaGraphMemAttributeType attr, void* value) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceGetGraphMemAttribute.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceGetGraphMemAttribute called\n");
	ret = orig_cudaDeviceGetGraphMemAttribute(device, attr, value);
	fprintf(stderr, ">>>>>>>> cudaDeviceGetGraphMemAttribute returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaDeviceSetGraphMemAttribute)(int device, enum cudaGraphMemAttributeType attr, void* value) = NULL;

__host__ cudaError_t CUDARTAPI cudaDeviceSetGraphMemAttribute(int device, enum cudaGraphMemAttributeType attr, void* value) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaDeviceSetGraphMemAttribute.c file
	fprintf(stderr, ">>>>>>>> cudaDeviceSetGraphMemAttribute called\n");
	ret = orig_cudaDeviceSetGraphMemAttribute(device, attr, value);
	fprintf(stderr, ">>>>>>>> cudaDeviceSetGraphMemAttribute returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphClone)(cudaGraph_t *pGraphClone, cudaGraph_t originalGraph) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphClone(cudaGraph_t *pGraphClone, cudaGraph_t originalGraph) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphClone.c file
	fprintf(stderr, ">>>>>>>> cudaGraphClone called\n");
	ret = orig_cudaGraphClone(pGraphClone, originalGraph);
	fprintf(stderr, ">>>>>>>> cudaGraphClone returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphNodeFindInClone)(cudaGraphNode_t *pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphNodeFindInClone(cudaGraphNode_t *pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeFindInClone.c file
	fprintf(stderr, ">>>>>>>> cudaGraphNodeFindInClone called\n");
	ret = orig_cudaGraphNodeFindInClone(pNode, originalNode, clonedGraph);
	fprintf(stderr, ">>>>>>>> cudaGraphNodeFindInClone returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphNodeGetType)(cudaGraphNode_t node, enum cudaGraphNodeType *pType) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphNodeGetType(cudaGraphNode_t node, enum cudaGraphNodeType *pType) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeGetType.c file
	fprintf(stderr, ">>>>>>>> cudaGraphNodeGetType called\n");
	ret = orig_cudaGraphNodeGetType(node, pType);
	fprintf(stderr, ">>>>>>>> cudaGraphNodeGetType returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphGetNodes)(cudaGraph_t graph, cudaGraphNode_t *nodes, size_t *numNodes) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t *nodes, size_t *numNodes) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphGetNodes.c file
	fprintf(stderr, ">>>>>>>> cudaGraphGetNodes called\n");
	ret = orig_cudaGraphGetNodes(graph, nodes, numNodes);
	fprintf(stderr, ">>>>>>>> cudaGraphGetNodes returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphGetRootNodes)(cudaGraph_t graph, cudaGraphNode_t *pRootNodes, size_t *pNumRootNodes) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t *pRootNodes, size_t *pNumRootNodes) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphGetRootNodes.c file
	fprintf(stderr, ">>>>>>>> cudaGraphGetRootNodes called\n");
	ret = orig_cudaGraphGetRootNodes(graph, pRootNodes, pNumRootNodes);
	fprintf(stderr, ">>>>>>>> cudaGraphGetRootNodes returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphGetEdges)(cudaGraph_t graph, cudaGraphNode_t *from, cudaGraphNode_t *to, size_t *numEdges) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t *from, cudaGraphNode_t *to, size_t *numEdges) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphGetEdges.c file
	fprintf(stderr, ">>>>>>>> cudaGraphGetEdges called\n");
	ret = orig_cudaGraphGetEdges(graph, from, to, numEdges);
	fprintf(stderr, ">>>>>>>> cudaGraphGetEdges returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphGetEdges_v2)(cudaGraph_t graph, cudaGraphNode_t *from, cudaGraphNode_t *to, cudaGraphEdgeData *edgeData, size_t *numEdges) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphGetEdges_v2(cudaGraph_t graph, cudaGraphNode_t *from, cudaGraphNode_t *to, cudaGraphEdgeData *edgeData, size_t *numEdges) {
    	cudaError_t  cudaGraphGetEdges_ ret;
	// Write your own custom c code in the cudaGraphGetEdges_v2.c file
	fprintf(stderr, ">>>>>>>> cudaGraphGetEdges_v2 called\n");
	ret = orig_cudaGraphGetEdges_v2(graph, from, to, edgeData, numEdges);
	fprintf(stderr, ">>>>>>>> cudaGraphGetEdges_v2 returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphNodeGetDependencies)(cudaGraphNode_t node, cudaGraphNode_t *pDependencies, size_t *pNumDependencies) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphNodeGetDependencies(cudaGraphNode_t node, cudaGraphNode_t *pDependencies, size_t *pNumDependencies) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeGetDependencies.c file
	fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependencies called\n");
	ret = orig_cudaGraphNodeGetDependencies(node, pDependencies, pNumDependencies);
	fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependencies returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphNodeGetDependencies_v2)(cudaGraphNode_t node, cudaGraphNode_t *pDependencies, cudaGraphEdgeData *edgeData, size_t *pNumDependencies) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphNodeGetDependencies_v2(cudaGraphNode_t node, cudaGraphNode_t *pDependencies, cudaGraphEdgeData *edgeData, size_t *pNumDependencies) {
    	cudaError_t  cudaGraphNodeGetDependencies_ ret;
	// Write your own custom c code in the cudaGraphNodeGetDependencies_v2.c file
	fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependencies_v2 called\n");
	ret = orig_cudaGraphNodeGetDependencies_v2(node, pDependencies, edgeData, pNumDependencies);
	fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependencies_v2 returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphNodeGetDependentNodes)(cudaGraphNode_t node, cudaGraphNode_t *pDependentNodes, size_t *pNumDependentNodes) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphNodeGetDependentNodes(cudaGraphNode_t node, cudaGraphNode_t *pDependentNodes, size_t *pNumDependentNodes) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeGetDependentNodes.c file
	fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependentNodes called\n");
	ret = orig_cudaGraphNodeGetDependentNodes(node, pDependentNodes, pNumDependentNodes);
	fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependentNodes returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphNodeGetDependentNodes_v2)(cudaGraphNode_t node, cudaGraphNode_t *pDependentNodes, cudaGraphEdgeData *edgeData, size_t *pNumDependentNodes) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphNodeGetDependentNodes_v2(cudaGraphNode_t node, cudaGraphNode_t *pDependentNodes, cudaGraphEdgeData *edgeData, size_t *pNumDependentNodes) {
    	cudaError_t  cudaGraphNodeGetDependentNodes_ ret;
	// Write your own custom c code in the cudaGraphNodeGetDependentNodes_v2.c file
	fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependentNodes_v2 called\n");
	ret = orig_cudaGraphNodeGetDependentNodes_v2(node, pDependentNodes, edgeData, pNumDependentNodes);
	fprintf(stderr, ">>>>>>>> cudaGraphNodeGetDependentNodes_v2 returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphAddDependencies)(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, size_t numDependencies) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, size_t numDependencies) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddDependencies.c file
	fprintf(stderr, ">>>>>>>> cudaGraphAddDependencies called\n");
	ret = orig_cudaGraphAddDependencies(graph, from, to, numDependencies);
	fprintf(stderr, ">>>>>>>> cudaGraphAddDependencies returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphAddDependencies_v2)(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, const cudaGraphEdgeData *edgeData, size_t numDependencies) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphAddDependencies_v2(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, const cudaGraphEdgeData *edgeData, size_t numDependencies) {
    	cudaError_t  cudaGraphAddDependencies_ ret;
	// Write your own custom c code in the cudaGraphAddDependencies_v2.c file
	fprintf(stderr, ">>>>>>>> cudaGraphAddDependencies_v2 called\n");
	ret = orig_cudaGraphAddDependencies_v2(graph, from, to, edgeData, numDependencies);
	fprintf(stderr, ">>>>>>>> cudaGraphAddDependencies_v2 returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphRemoveDependencies)(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, size_t numDependencies) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, size_t numDependencies) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphRemoveDependencies.c file
	fprintf(stderr, ">>>>>>>> cudaGraphRemoveDependencies called\n");
	ret = orig_cudaGraphRemoveDependencies(graph, from, to, numDependencies);
	fprintf(stderr, ">>>>>>>> cudaGraphRemoveDependencies returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphRemoveDependencies_v2)(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, const cudaGraphEdgeData *edgeData, size_t numDependencies) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphRemoveDependencies_v2(cudaGraph_t graph, const cudaGraphNode_t *from, const cudaGraphNode_t *to, const cudaGraphEdgeData *edgeData, size_t numDependencies) {
    	cudaError_t  cudaGraphRemoveDependencies_ ret;
	// Write your own custom c code in the cudaGraphRemoveDependencies_v2.c file
	fprintf(stderr, ">>>>>>>> cudaGraphRemoveDependencies_v2 called\n");
	ret = orig_cudaGraphRemoveDependencies_v2(graph, from, to, edgeData, numDependencies);
	fprintf(stderr, ">>>>>>>> cudaGraphRemoveDependencies_v2 returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphDestroyNode)(cudaGraphNode_t node) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphDestroyNode(cudaGraphNode_t node) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphDestroyNode.c file
	fprintf(stderr, ">>>>>>>> cudaGraphDestroyNode called\n");
	ret = orig_cudaGraphDestroyNode(node);
	fprintf(stderr, ">>>>>>>> cudaGraphDestroyNode returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphInstantiate)(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, unsigned long long flags ) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphInstantiate(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, unsigned long long flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphInstantiate.c file
	fprintf(stderr, ">>>>>>>> cudaGraphInstantiate called\n");
	ret = orig_cudaGraphInstantiate(pGraphExec, graph, flags);
	fprintf(stderr, ">>>>>>>> cudaGraphInstantiate returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphInstantiateWithFlags)(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, unsigned long long flags ) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphInstantiateWithFlags(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, unsigned long long flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphInstantiateWithFlags.c file
	fprintf(stderr, ">>>>>>>> cudaGraphInstantiateWithFlags called\n");
	ret = orig_cudaGraphInstantiateWithFlags(pGraphExec, graph, flags);
	fprintf(stderr, ">>>>>>>> cudaGraphInstantiateWithFlags returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphInstantiateWithParams)(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, cudaGraphInstantiateParams *instantiateParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphInstantiateWithParams(cudaGraphExec_t *pGraphExec, cudaGraph_t graph, cudaGraphInstantiateParams *instantiateParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphInstantiateWithParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphInstantiateWithParams called\n");
	ret = orig_cudaGraphInstantiateWithParams(pGraphExec, graph, instantiateParams);
	fprintf(stderr, ">>>>>>>> cudaGraphInstantiateWithParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphExecGetFlags)(cudaGraphExec_t graphExec, unsigned long long *flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphExecGetFlags(cudaGraphExec_t graphExec, unsigned long long *flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecGetFlags.c file
	fprintf(stderr, ">>>>>>>> cudaGraphExecGetFlags called\n");
	ret = orig_cudaGraphExecGetFlags(graphExec, flags);
	fprintf(stderr, ">>>>>>>> cudaGraphExecGetFlags returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphExecKernelNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaKernelNodeParams *pNodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphExecKernelNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaKernelNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecKernelNodeSetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphExecKernelNodeSetParams called\n");
	ret = orig_cudaGraphExecKernelNodeSetParams(hGraphExec, node, pNodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphExecKernelNodeSetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphExecMemcpyNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaMemcpy3DParms *pNodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphExecMemcpyNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaMemcpy3DParms *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecMemcpyNodeSetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphExecMemcpyNodeSetParams called\n");
	ret = orig_cudaGraphExecMemcpyNodeSetParams(hGraphExec, node, pNodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphExecMemcpyNodeSetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphExecMemsetNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaMemsetParams *pNodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphExecMemsetNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaMemsetParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecMemsetNodeSetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphExecMemsetNodeSetParams called\n");
	ret = orig_cudaGraphExecMemsetNodeSetParams(hGraphExec, node, pNodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphExecMemsetNodeSetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphExecHostNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaHostNodeParams *pNodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphExecHostNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const struct cudaHostNodeParams *pNodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecHostNodeSetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphExecHostNodeSetParams called\n");
	ret = orig_cudaGraphExecHostNodeSetParams(hGraphExec, node, pNodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphExecHostNodeSetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphExecExternalSemaphoresSignalNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphExecExternalSemaphoresSignalNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreSignalNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecExternalSemaphoresSignalNodeSetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphExecExternalSemaphoresSignalNodeSetParams called\n");
	ret = orig_cudaGraphExecExternalSemaphoresSignalNodeSetParams(hGraphExec, hNode, nodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphExecExternalSemaphoresSignalNodeSetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphExecExternalSemaphoresWaitNodeSetParams)(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphExecExternalSemaphoresWaitNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const struct cudaExternalSemaphoreWaitNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecExternalSemaphoresWaitNodeSetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphExecExternalSemaphoresWaitNodeSetParams called\n");
	ret = orig_cudaGraphExecExternalSemaphoresWaitNodeSetParams(hGraphExec, hNode, nodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphExecExternalSemaphoresWaitNodeSetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphNodeSetEnabled)(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned int isEnabled) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphNodeSetEnabled(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned int isEnabled) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeSetEnabled.c file
	fprintf(stderr, ">>>>>>>> cudaGraphNodeSetEnabled called\n");
	ret = orig_cudaGraphNodeSetEnabled(hGraphExec, hNode, isEnabled);
	fprintf(stderr, ">>>>>>>> cudaGraphNodeSetEnabled returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphNodeGetEnabled)(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned int *isEnabled) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphNodeGetEnabled(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, unsigned int *isEnabled) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeGetEnabled.c file
	fprintf(stderr, ">>>>>>>> cudaGraphNodeGetEnabled called\n");
	ret = orig_cudaGraphNodeGetEnabled(hGraphExec, hNode, isEnabled);
	fprintf(stderr, ">>>>>>>> cudaGraphNodeGetEnabled returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphExecUpdate)(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphExecUpdateResultInfo *resultInfo) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphExecUpdateResultInfo *resultInfo) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecUpdate.c file
	fprintf(stderr, ">>>>>>>> cudaGraphExecUpdate called\n");
	ret = orig_cudaGraphExecUpdate(hGraphExec, hGraph, resultInfo);
	fprintf(stderr, ">>>>>>>> cudaGraphExecUpdate returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphLaunch)(cudaGraphExec_t graphExec, cudaStream_t stream) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphLaunch.c file
	fprintf(stderr, ">>>>>>>> cudaGraphLaunch called\n");
	ret = orig_cudaGraphLaunch(graphExec, stream);
	fprintf(stderr, ">>>>>>>> cudaGraphLaunch returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphExecDestroy)(cudaGraphExec_t graphExec) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphExecDestroy(cudaGraphExec_t graphExec) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecDestroy.c file
	fprintf(stderr, ">>>>>>>> cudaGraphExecDestroy called\n");
	ret = orig_cudaGraphExecDestroy(graphExec);
	fprintf(stderr, ">>>>>>>> cudaGraphExecDestroy returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphDestroy)(cudaGraph_t graph) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphDestroy(cudaGraph_t graph) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphDestroy.c file
	fprintf(stderr, ">>>>>>>> cudaGraphDestroy called\n");
	ret = orig_cudaGraphDestroy(graph);
	fprintf(stderr, ">>>>>>>> cudaGraphDestroy returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphDebugDotPrint)(cudaGraph_t graph, const char *path, unsigned int flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphDebugDotPrint(cudaGraph_t graph, const char *path, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphDebugDotPrint.c file
	fprintf(stderr, ">>>>>>>> cudaGraphDebugDotPrint called\n");
	ret = orig_cudaGraphDebugDotPrint(graph, path, flags);
	fprintf(stderr, ">>>>>>>> cudaGraphDebugDotPrint returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaUserObjectCreate)(cudaUserObject_t *object_out, void *ptr, cudaHostFn_t destroy, unsigned int initialRefcount, unsigned int flags) = NULL;

__host__ cudaError_t CUDARTAPI cudaUserObjectCreate(cudaUserObject_t *object_out, void *ptr, cudaHostFn_t destroy, unsigned int initialRefcount, unsigned int flags) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaUserObjectCreate.c file
	fprintf(stderr, ">>>>>>>> cudaUserObjectCreate called\n");
	ret = orig_cudaUserObjectCreate(object_out, ptr, destroy, initialRefcount, flags);
	fprintf(stderr, ">>>>>>>> cudaUserObjectCreate returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaUserObjectRetain)(cudaUserObject_t object, unsigned int count ) = NULL;

__host__ cudaError_t CUDARTAPI cudaUserObjectRetain(cudaUserObject_t object, unsigned int count ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaUserObjectRetain.c file
	fprintf(stderr, ">>>>>>>> cudaUserObjectRetain called\n");
	ret = orig_cudaUserObjectRetain(object, count);
	fprintf(stderr, ">>>>>>>> cudaUserObjectRetain returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaUserObjectRelease)(cudaUserObject_t object, unsigned int count ) = NULL;

__host__ cudaError_t CUDARTAPI cudaUserObjectRelease(cudaUserObject_t object, unsigned int count ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaUserObjectRelease.c file
	fprintf(stderr, ">>>>>>>> cudaUserObjectRelease called\n");
	ret = orig_cudaUserObjectRelease(object, count);
	fprintf(stderr, ">>>>>>>> cudaUserObjectRelease returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphRetainUserObject)(cudaGraph_t graph, cudaUserObject_t object, unsigned int count , unsigned int flags ) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphRetainUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned int count , unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphRetainUserObject.c file
	fprintf(stderr, ">>>>>>>> cudaGraphRetainUserObject called\n");
	ret = orig_cudaGraphRetainUserObject(graph, object, count, flags);
	fprintf(stderr, ">>>>>>>> cudaGraphRetainUserObject returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphReleaseUserObject)(cudaGraph_t graph, cudaUserObject_t object, unsigned int count ) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphReleaseUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned int count ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphReleaseUserObject.c file
	fprintf(stderr, ">>>>>>>> cudaGraphReleaseUserObject called\n");
	ret = orig_cudaGraphReleaseUserObject(graph, object, count);
	fprintf(stderr, ">>>>>>>> cudaGraphReleaseUserObject returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphAddNode)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, struct cudaGraphNodeParams *nodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphAddNode(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, size_t numDependencies, struct cudaGraphNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphAddNode.c file
	fprintf(stderr, ">>>>>>>> cudaGraphAddNode called\n");
	ret = orig_cudaGraphAddNode(pGraphNode, graph, pDependencies, numDependencies, nodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphAddNode returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphAddNode_v2)(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, struct cudaGraphNodeParams *nodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphAddNode_v2(cudaGraphNode_t *pGraphNode, cudaGraph_t graph, const cudaGraphNode_t *pDependencies, const cudaGraphEdgeData *dependencyData, size_t numDependencies, struct cudaGraphNodeParams *nodeParams) {
    	cudaError_t  cudaGraphAddNode_ ret;
	// Write your own custom c code in the cudaGraphAddNode_v2.c file
	fprintf(stderr, ">>>>>>>> cudaGraphAddNode_v2 called\n");
	ret = orig_cudaGraphAddNode_v2(pGraphNode, graph, pDependencies, dependencyData, numDependencies, nodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphAddNode_v2 returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphNodeSetParams)(cudaGraphNode_t node, struct cudaGraphNodeParams *nodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphNodeSetParams(cudaGraphNode_t node, struct cudaGraphNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphNodeSetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphNodeSetParams called\n");
	ret = orig_cudaGraphNodeSetParams(node, nodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphNodeSetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphExecNodeSetParams)(cudaGraphExec_t graphExec, cudaGraphNode_t node, struct cudaGraphNodeParams *nodeParams) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphExecNodeSetParams(cudaGraphExec_t graphExec, cudaGraphNode_t node, struct cudaGraphNodeParams *nodeParams) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphExecNodeSetParams.c file
	fprintf(stderr, ">>>>>>>> cudaGraphExecNodeSetParams called\n");
	ret = orig_cudaGraphExecNodeSetParams(graphExec, node, nodeParams);
	fprintf(stderr, ">>>>>>>> cudaGraphExecNodeSetParams returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGraphConditionalHandleCreate)(cudaGraphConditionalHandle *pHandle_out, cudaGraph_t graph, unsigned int defaultLaunchValue , unsigned int flags ) = NULL;

__host__ cudaError_t CUDARTAPI cudaGraphConditionalHandleCreate(cudaGraphConditionalHandle *pHandle_out, cudaGraph_t graph, unsigned int defaultLaunchValue , unsigned int flags ) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGraphConditionalHandleCreate.c file
	fprintf(stderr, ">>>>>>>> cudaGraphConditionalHandleCreate called\n");
	ret = orig_cudaGraphConditionalHandleCreate(pHandle_out, graph, defaultLaunchValue, flags);
	fprintf(stderr, ">>>>>>>> cudaGraphConditionalHandleCreate returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGetDriverEntryPoint)(const char *symbol, void **funcPtr, unsigned long long flags, enum cudaDriverEntryPointQueryResult *driverStatus = NULL) = NULL;

__host__ cudaError_t CUDARTAPI cudaGetDriverEntryPoint(const char *symbol, void **funcPtr, unsigned long long flags, enum cudaDriverEntryPointQueryResult *driverStatus = NULL) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetDriverEntryPoint.c file
	fprintf(stderr, ">>>>>>>> cudaGetDriverEntryPoint called\n");
	ret = orig_cudaGetDriverEntryPoint(symbol, funcPtr, flags, driverStatus);
	fprintf(stderr, ">>>>>>>> cudaGetDriverEntryPoint returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGetDriverEntryPoint)(const char *symbol, void **funcPtr, unsigned long long flags, enum cudaDriverEntryPointQueryResult *driverStatus) = NULL;

__host__ cudaError_t CUDARTAPI cudaGetDriverEntryPoint(const char *symbol, void **funcPtr, unsigned long long flags, enum cudaDriverEntryPointQueryResult *driverStatus) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetDriverEntryPoint.c file
	fprintf(stderr, ">>>>>>>> cudaGetDriverEntryPoint called\n");
	ret = orig_cudaGetDriverEntryPoint(symbol, funcPtr, flags, driverStatus);
	fprintf(stderr, ">>>>>>>> cudaGetDriverEntryPoint returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGetExportTable)(const void **ppExportTable, const cudaUUID_t *pExportTableId) = NULL;

__host__ cudaError_t CUDARTAPI cudaGetExportTable(const void **ppExportTable, const cudaUUID_t *pExportTableId) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetExportTable.c file
	fprintf(stderr, ">>>>>>>> cudaGetExportTable called\n");
	ret = orig_cudaGetExportTable(ppExportTable, pExportTableId);
	fprintf(stderr, ">>>>>>>> cudaGetExportTable returned\n");
	return ret;

}

static __host__ cudaError_t (*orig_cudaGetFuncBySymbol)(cudaFunction_t* functionPtr, const void* symbolPtr) = NULL;

__host__ cudaError_t cudaGetFuncBySymbol(cudaFunction_t* functionPtr, const void* symbolPtr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetFuncBySymbol.c file
	fprintf(stderr, ">>>>>>>> cudaGetFuncBySymbol called\n");
	ret = orig_cudaGetFuncBySymbol(functionPtr, symbolPtr);
	fprintf(stderr, ">>>>>>>> cudaGetFuncBySymbol returned\n");
	return ret;

}

static __host__ cudaError_t CUDARTAPI (*orig_cudaGetKernel)(cudaKernel_t *kernelPtr, const void *entryFuncAddr) = NULL;

__host__ cudaError_t CUDARTAPI cudaGetKernel(cudaKernel_t *kernelPtr, const void *entryFuncAddr) {
    	cudaError_t ret;
	// Write your own custom c code in the cudaGetKernel.c file
	fprintf(stderr, ">>>>>>>> cudaGetKernel called\n");
	ret = orig_cudaGetKernel(kernelPtr, entryFuncAddr);
	fprintf(stderr, ">>>>>>>> cudaGetKernel returned\n");
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