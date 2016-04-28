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

// System.Comparison`1<System.UInt32>
struct Comparison_1_t2643;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16925_gshared (Comparison_1_t2643 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16925(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2643 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16925_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.UInt32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16926_gshared (Comparison_1_t2643 * __this, uint32_t ___x, uint32_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16926(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2643 *, uint32_t, uint32_t, const MethodInfo*))Comparison_1_Invoke_m16926_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.UInt32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16927_gshared (Comparison_1_t2643 * __this, uint32_t ___x, uint32_t ___y, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16927(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2643 *, uint32_t, uint32_t, AsyncCallback_t380 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16927_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.UInt32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16928_gshared (Comparison_1_t2643 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16928(__this, ___result, method) (( int32_t (*) (Comparison_1_t2643 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16928_gshared)(__this, ___result, method)
