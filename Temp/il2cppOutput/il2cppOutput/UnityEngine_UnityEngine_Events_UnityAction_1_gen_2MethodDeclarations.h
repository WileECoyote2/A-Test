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

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1294;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m6542_gshared (UnityAction_1_t1294 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m6542(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t1294 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m6542_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m22700_gshared (UnityAction_1_t1294 * __this, float ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m22700(__this, ___arg0, method) (( void (*) (UnityAction_1_t1294 *, float, const MethodInfo*))UnityAction_1_Invoke_m22700_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m22701_gshared (UnityAction_1_t1294 * __this, float ___arg0, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m22701(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t1294 *, float, AsyncCallback_t380 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m22701_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m22702_gshared (UnityAction_1_t1294 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m22702(__this, ___result, method) (( void (*) (UnityAction_1_t1294 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m22702_gshared)(__this, ___result, method)
