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

// System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>
struct Predicate_1_t3123;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_MeshSubsetCombineUtility_SubMeshInst.h"

// System.Void System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m23302_gshared (Predicate_1_t3123 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m23302(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3123 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m23302_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m23303_gshared (Predicate_1_t3123 * __this, SubMeshInstance_t804  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m23303(__this, ___obj, method) (( bool (*) (Predicate_1_t3123 *, SubMeshInstance_t804 , const MethodInfo*))Predicate_1_Invoke_m23303_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m23304_gshared (Predicate_1_t3123 * __this, SubMeshInstance_t804  ___obj, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m23304(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3123 *, SubMeshInstance_t804 , AsyncCallback_t380 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m23304_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m23305_gshared (Predicate_1_t3123 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m23305(__this, ___result, method) (( bool (*) (Predicate_1_t3123 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m23305_gshared)(__this, ___result, method)
