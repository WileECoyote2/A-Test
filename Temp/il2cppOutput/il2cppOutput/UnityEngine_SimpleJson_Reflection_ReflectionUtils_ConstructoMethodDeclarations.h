#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t721;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t408;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ConstructorDelegate__ctor_m3862 (ConstructorDelegate_t721 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern "C" Object_t * ConstructorDelegate_Invoke_m3863 (ConstructorDelegate_t721 * __this, ObjectU5BU5D_t408* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_ConstructorDelegate_t721(Il2CppObject* delegate, ObjectU5BU5D_t408* ___args);
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern "C" Object_t * ConstructorDelegate_BeginInvoke_m3864 (ConstructorDelegate_t721 * __this, ObjectU5BU5D_t408* ___args, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ConstructorDelegate_EndInvoke_m3865 (ConstructorDelegate_t721 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
