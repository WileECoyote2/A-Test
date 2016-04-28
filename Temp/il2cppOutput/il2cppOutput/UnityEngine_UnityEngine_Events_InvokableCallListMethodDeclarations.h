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

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t792;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t785;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t408;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern "C" void InvokableCallList__ctor_m4061 (InvokableCallList_t792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m4062 (InvokableCallList_t792 * __this, BaseInvokableCall_t785 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m4063 (InvokableCallList_t792 * __this, BaseInvokableCall_t785 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCallList_RemoveListener_m4064 (InvokableCallList_t792 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m4065 (InvokableCallList_t792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern "C" void InvokableCallList_Invoke_m4066 (InvokableCallList_t792 * __this, ObjectU5BU5D_t408* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
