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

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t490;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t1093;
// UnityEngine.GameObject
struct GameObject_t88;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t1094;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t397;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t1130;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void UnityEngine.EventSystems.EventSystem::.ctor()
extern "C" void EventSystem__ctor_m5248 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::.cctor()
extern "C" void EventSystem__cctor_m5249 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C" EventSystem_t490 * EventSystem_get_current_m5250 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_current(UnityEngine.EventSystems.EventSystem)
extern "C" void EventSystem_set_current_m5251 (Object_t * __this /* static, unused */, EventSystem_t490 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
extern "C" bool EventSystem_get_sendNavigationEvents_m5252 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_sendNavigationEvents(System.Boolean)
extern "C" void EventSystem_set_sendNavigationEvents_m5253 (EventSystem_t490 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
extern "C" int32_t EventSystem_get_pixelDragThreshold_m5254 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_pixelDragThreshold(System.Int32)
extern "C" void EventSystem_set_pixelDragThreshold_m5255 (EventSystem_t490 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
extern "C" BaseInputModule_t1093 * EventSystem_get_currentInputModule_m5256 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
extern "C" GameObject_t88 * EventSystem_get_firstSelectedGameObject_m5257 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_firstSelectedGameObject(UnityEngine.GameObject)
extern "C" void EventSystem_set_firstSelectedGameObject_m5258 (EventSystem_t490 * __this, GameObject_t88 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
extern "C" GameObject_t88 * EventSystem_get_currentSelectedGameObject_m5259 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_lastSelectedGameObject()
extern "C" GameObject_t88 * EventSystem_get_lastSelectedGameObject_m5260 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::UpdateModules()
extern "C" void EventSystem_UpdateModules_m5261 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
extern "C" bool EventSystem_get_alreadySelecting_m5262 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventSystem_SetSelectedGameObject_m5263 (EventSystem_t490 * __this, GameObject_t88 * ___selected, BaseEventData_t1094 * ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::get_baseEventDataCache()
extern "C" BaseEventData_t1094 * EventSystem_get_baseEventDataCache_m5264 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
extern "C" void EventSystem_SetSelectedGameObject_m5265 (EventSystem_t490 * __this, GameObject_t88 * ___selected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::RaycastComparer(UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult)
extern "C" int32_t EventSystem_RaycastComparer_m5266 (Object_t * __this /* static, unused */, RaycastResult_t1125  ___lhs, RaycastResult_t1125  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void EventSystem_RaycastAll_m5267 (EventSystem_t490 * __this, PointerEventData_t397 * ___eventData, List_1_t1130 * ___raycastResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
extern "C" bool EventSystem_IsPointerOverGameObject_m5268 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
extern "C" bool EventSystem_IsPointerOverGameObject_m5269 (EventSystem_t490 * __this, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnEnable()
extern "C" void EventSystem_OnEnable_m5270 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnDisable()
extern "C" void EventSystem_OnDisable_m5271 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::TickModules()
extern "C" void EventSystem_TickModules_m5272 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::Update()
extern "C" void EventSystem_Update_m5273 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::ChangeEventModule(UnityEngine.EventSystems.BaseInputModule)
extern "C" void EventSystem_ChangeEventModule_m5274 (EventSystem_t490 * __this, BaseInputModule_t1093 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.EventSystem::ToString()
extern "C" String_t* EventSystem_ToString_m5275 (EventSystem_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
