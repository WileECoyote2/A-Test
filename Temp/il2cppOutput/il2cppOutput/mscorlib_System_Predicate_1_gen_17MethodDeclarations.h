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

// System.Predicate`1<UnityEngine.RaycastHit>
struct Predicate_1_t2714;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Predicate`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m17741_gshared (Predicate_1_t2714 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m17741(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2714 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m17741_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.RaycastHit>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m17742_gshared (Predicate_1_t2714 * __this, RaycastHit_t279  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m17742(__this, ___obj, method) (( bool (*) (Predicate_1_t2714 *, RaycastHit_t279 , const MethodInfo*))Predicate_1_Invoke_m17742_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.RaycastHit>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m17743_gshared (Predicate_1_t2714 * __this, RaycastHit_t279  ___obj, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m17743(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2714 *, RaycastHit_t279 , AsyncCallback_t380 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m17743_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m17744_gshared (Predicate_1_t2714 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m17744(__this, ___result, method) (( bool (*) (Predicate_1_t2714 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m17744_gshared)(__this, ___result, method)
