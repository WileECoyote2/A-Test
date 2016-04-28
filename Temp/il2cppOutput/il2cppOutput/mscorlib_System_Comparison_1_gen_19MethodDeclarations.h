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

// System.Comparison`1<System.Int32>
struct Comparison_1_t2757;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m18413_gshared (Comparison_1_t2757 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m18413(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2757 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m18413_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Int32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m18414_gshared (Comparison_1_t2757 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m18414(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2757 *, int32_t, int32_t, const MethodInfo*))Comparison_1_Invoke_m18414_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Int32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m18415_gshared (Comparison_1_t2757 * __this, int32_t ___x, int32_t ___y, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m18415(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2757 *, int32_t, int32_t, AsyncCallback_t380 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m18415_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m18416_gshared (Comparison_1_t2757 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m18416(__this, ___result, method) (( int32_t (*) (Comparison_1_t2757 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m18416_gshared)(__this, ___result, method)
