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

// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t46;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m1817_gshared (Func_2_t46 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m1817(__this, ___object, ___method, method) (( void (*) (Func_2_t46 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1817_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.Boolean>::Invoke(T)
extern "C" bool Func_2_Invoke_m1814_gshared (Func_2_t46 * __this, bool ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m1814(__this, ___arg1, method) (( bool (*) (Func_2_t46 *, bool, const MethodInfo*))Func_2_Invoke_m1814_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m15166_gshared (Func_2_t46 * __this, bool ___arg1, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m15166(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t46 *, bool, AsyncCallback_t380 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m15166_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" bool Func_2_EndInvoke_m15167_gshared (Func_2_t46 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m15167(__this, ___result, method) (( bool (*) (Func_2_t46 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m15167_gshared)(__this, ___result, method)
