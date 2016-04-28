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

// System.Func`1<System.Object>
struct Func_1_t3127;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m23322_gshared (Func_1_t3127 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m23322(__this, ___object, ___method, method) (( void (*) (Func_1_t3127 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m23322_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Object>::Invoke()
extern "C" Object_t * Func_1_Invoke_m23323_gshared (Func_1_t3127 * __this, const MethodInfo* method);
#define Func_1_Invoke_m23323(__this, method) (( Object_t * (*) (Func_1_t3127 *, const MethodInfo*))Func_1_Invoke_m23323_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m23324_gshared (Func_1_t3127 * __this, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m23324(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t3127 *, AsyncCallback_t380 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m23324_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_1_EndInvoke_m23325_gshared (Func_1_t3127 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m23325(__this, ___result, method) (( Object_t * (*) (Func_1_t3127 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m23325_gshared)(__this, ___result, method)
