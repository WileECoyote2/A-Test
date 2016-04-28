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

// UnityEngine.Event
struct Event_t458;
struct Event_t458_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_EventType.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_EventModifiers.h"
#include "UnityEngine_UnityEngine_KeyCode.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Event::.ctor()
extern "C" void Event__ctor_m2923 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m2924 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
extern "C" void Event_Finalize_m2925 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m2926 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C" int32_t Event_get_rawType_m2927 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m2104 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t189  Event_get_mousePosition_m2928 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m2929 (Event_t458 * __this, Vector2_t189 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m2930 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::get_clickCount()
extern "C" int32_t Event_get_clickCount_m2105 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m2931 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m2932 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m2933 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C" Event_t458 * Event_get_current_m2103 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m2934 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern "C" void Event_Internal_MakeMasterEventCurrent_m2935 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern "C" bool Event_PopEvent_m2936 (Object_t * __this /* static, unused */, Event_t458 * ___outEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m2937 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m2938 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C" int32_t Event_GetHashCode_m2939 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern "C" bool Event_Equals_m2940 (Event_t458 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
extern "C" String_t* Event_ToString_m2941 (Event_t458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Event_t458_marshal(const Event_t458& unmarshaled, Event_t458_marshaled& marshaled);
extern "C" void Event_t458_marshal_back(const Event_t458_marshaled& marshaled, Event_t458& unmarshaled);
extern "C" void Event_t458_marshal_cleanup(Event_t458_marshaled& marshaled);
