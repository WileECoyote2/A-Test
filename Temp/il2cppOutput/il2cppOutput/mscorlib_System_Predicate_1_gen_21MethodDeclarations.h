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

// System.Predicate`1<System.Single>
struct Predicate_1_t2782;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m18848_gshared (Predicate_1_t2782 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m18848(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2782 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m18848_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Single>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18849_gshared (Predicate_1_t2782 * __this, float ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m18849(__this, ___obj, method) (( bool (*) (Predicate_1_t2782 *, float, const MethodInfo*))Predicate_1_Invoke_m18849_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18850_gshared (Predicate_1_t2782 * __this, float ___obj, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m18850(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2782 *, float, AsyncCallback_t380 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m18850_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18851_gshared (Predicate_1_t2782 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m18851(__this, ___result, method) (( bool (*) (Predicate_1_t2782 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m18851_gshared)(__this, ___result, method)
