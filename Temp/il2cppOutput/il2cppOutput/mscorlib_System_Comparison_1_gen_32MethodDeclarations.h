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

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2925;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m20892_gshared (Comparison_1_t2925 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m20892(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2925 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m20892_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m20893_gshared (Comparison_1_t2925 * __this, UICharInfo_t671  ___x, UICharInfo_t671  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m20893(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2925 *, UICharInfo_t671 , UICharInfo_t671 , const MethodInfo*))Comparison_1_Invoke_m20893_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m20894_gshared (Comparison_1_t2925 * __this, UICharInfo_t671  ___x, UICharInfo_t671  ___y, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m20894(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2925 *, UICharInfo_t671 , UICharInfo_t671 , AsyncCallback_t380 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m20894_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m20895_gshared (Comparison_1_t2925 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m20895(__this, ___result, method) (( int32_t (*) (Comparison_1_t2925 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m20895_gshared)(__this, ___result, method)
