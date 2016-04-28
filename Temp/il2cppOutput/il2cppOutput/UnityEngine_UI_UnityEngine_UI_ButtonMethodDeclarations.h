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

// UnityEngine.UI.Button
struct Button_t1148;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t1146;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t397;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t1094;
// System.Collections.IEnumerator
struct IEnumerator_t79;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m5533 (Button_t1148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t1146 * Button_get_onClick_m5534 (Button_t1148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m5535 (Button_t1148 * __this, ButtonClickedEvent_t1146 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m5536 (Button_t1148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m5537 (Button_t1148 * __this, PointerEventData_t397 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m5538 (Button_t1148 * __this, BaseEventData_t1094 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m5539 (Button_t1148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
