﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t2423;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Predicate`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14325_gshared (Predicate_1_t2423 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14325(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2423 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14325_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14326_gshared (Predicate_1_t2423 * __this, Vector3_t7  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14326(__this, ___obj, method) (( bool (*) (Predicate_1_t2423 *, Vector3_t7 , const MethodInfo*))Predicate_1_Invoke_m14326_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14327_gshared (Predicate_1_t2423 * __this, Vector3_t7  ___obj, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14327(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2423 *, Vector3_t7 , AsyncCallback_t380 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14327_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14328_gshared (Predicate_1_t2423 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14328(__this, ___result, method) (( bool (*) (Predicate_1_t2423 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14328_gshared)(__this, ___result, method)
