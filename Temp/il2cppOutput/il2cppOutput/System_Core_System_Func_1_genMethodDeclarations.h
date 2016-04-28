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

// System.Func`1<UnityEngine.Vector3>
struct Func_1_t248;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Func`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m1691_gshared (Func_1_t248 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m1691(__this, ___object, ___method, method) (( void (*) (Func_1_t248 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m1691_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<UnityEngine.Vector3>::Invoke()
extern "C" Vector3_t7  Func_1_Invoke_m2184_gshared (Func_1_t248 * __this, const MethodInfo* method);
#define Func_1_Invoke_m2184(__this, method) (( Vector3_t7  (*) (Func_1_t248 *, const MethodInfo*))Func_1_Invoke_m2184_gshared)(__this, method)
// System.IAsyncResult System.Func`1<UnityEngine.Vector3>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m14176_gshared (Func_1_t248 * __this, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m14176(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t248 *, AsyncCallback_t380 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m14176_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" Vector3_t7  Func_1_EndInvoke_m14177_gshared (Func_1_t248 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m14177(__this, ___result, method) (( Vector3_t7  (*) (Func_1_t248 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m14177_gshared)(__this, ___result, method)
