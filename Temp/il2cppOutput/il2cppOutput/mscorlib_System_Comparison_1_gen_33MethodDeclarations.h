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

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2935;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m21041_gshared (Comparison_1_t2935 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m21041(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2935 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21041_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21042_gshared (Comparison_1_t2935 * __this, UILineInfo_t672  ___x, UILineInfo_t672  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m21042(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2935 *, UILineInfo_t672 , UILineInfo_t672 , const MethodInfo*))Comparison_1_Invoke_m21042_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m21043_gshared (Comparison_1_t2935 * __this, UILineInfo_t672  ___x, UILineInfo_t672  ___y, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m21043(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2935 *, UILineInfo_t672 , UILineInfo_t672 , AsyncCallback_t380 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21043_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21044_gshared (Comparison_1_t2935 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m21044(__this, ___result, method) (( int32_t (*) (Comparison_1_t2935 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21044_gshared)(__this, ___result, method)
