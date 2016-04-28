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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t1190;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t1294;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t785;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m6537_gshared (UnityEvent_1_t1190 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m6537(__this, method) (( void (*) (UnityEvent_1_t1190 *, const MethodInfo*))UnityEvent_1__ctor_m6537_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m6544_gshared (UnityEvent_1_t1190 * __this, UnityAction_1_t1294 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m6544(__this, ___call, method) (( void (*) (UnityEvent_1_t1190 *, UnityAction_1_t1294 *, const MethodInfo*))UnityEvent_1_AddListener_m6544_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m6543_gshared (UnityEvent_1_t1190 * __this, UnityAction_1_t1294 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m6543(__this, ___call, method) (( void (*) (UnityEvent_1_t1190 *, UnityAction_1_t1294 *, const MethodInfo*))UnityEvent_1_RemoveListener_m6543_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m25872_gshared (UnityEvent_1_t1190 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m25872(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t1190 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m25872_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t785 * UnityEvent_1_GetDelegate_m25873_gshared (UnityEvent_1_t1190 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m25873(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t785 * (*) (UnityEvent_1_t1190 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m25873_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t785 * UnityEvent_1_GetDelegate_m25874_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1294 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m25874(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t785 * (*) (Object_t * /* static, unused */, UnityAction_1_t1294 *, const MethodInfo*))UnityEvent_1_GetDelegate_m25874_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m6540_gshared (UnityEvent_1_t1190 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m6540(__this, ___arg0, method) (( void (*) (UnityEvent_1_t1190 *, float, const MethodInfo*))UnityEvent_1_Invoke_m6540_gshared)(__this, ___arg0, method)
