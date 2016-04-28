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

// UnityEngine.Component
struct Component_t434;
// UnityEngine.Transform
struct Transform_t4;
// UnityEngine.GameObject
struct GameObject_t88;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t820;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m3326 (Component_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t4 * Component_get_transform_m1689 (Component_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t88 * Component_get_gameObject_m1967 (Component_t434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t434 * Component_GetComponent_m1968 (Component_t434 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void Component_GetComponentFastPath_m3327 (Component_t434 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C" Component_t434 * Component_GetComponentInChildren_m3328 (Component_t434 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m3329 (Component_t434 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m3330 (Component_t434 * __this, Type_t * ___type, List_1_t820 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
extern "C" bool Component_CompareTag_m2251 (Component_t434 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void Component_SendMessage_m3331 (Component_t434 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String)
extern "C" void Component_SendMessage_m2404 (Component_t434 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m3332 (Component_t434 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void Component_BroadcastMessage_m2410 (Component_t434 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
