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

// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t1214;
// UnityEngine.UI.Toggle
struct Toggle_t1213;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t1275;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ToggleGroup::.ctor()
extern "C" void ToggleGroup__ctor_m6164 (ToggleGroup_t1214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::get_allowSwitchOff()
extern "C" bool ToggleGroup_get_allowSwitchOff_m6165 (ToggleGroup_t1214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::set_allowSwitchOff(System.Boolean)
extern "C" void ToggleGroup_set_allowSwitchOff_m6166 (ToggleGroup_t1214 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::ValidateToggleIsInGroup(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_ValidateToggleIsInGroup_m6167 (ToggleGroup_t1214 * __this, Toggle_t1213 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::NotifyToggleOn(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_NotifyToggleOn_m6168 (ToggleGroup_t1214 * __this, Toggle_t1213 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::UnregisterToggle(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_UnregisterToggle_m6169 (ToggleGroup_t1214 * __this, Toggle_t1213 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::RegisterToggle(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_RegisterToggle_m6170 (ToggleGroup_t1214 * __this, Toggle_t1213 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::AnyTogglesOn()
extern "C" bool ToggleGroup_AnyTogglesOn_m6171 (ToggleGroup_t1214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::ActiveToggles()
extern "C" Object_t* ToggleGroup_ActiveToggles_m6172 (ToggleGroup_t1214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::SetAllTogglesOff()
extern "C" void ToggleGroup_SetAllTogglesOff_m6173 (ToggleGroup_t1214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::<AnyTogglesOn>m__7(UnityEngine.UI.Toggle)
extern "C" bool ToggleGroup_U3CAnyTogglesOnU3Em__7_m6174 (Object_t * __this /* static, unused */, Toggle_t1213 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::<ActiveToggles>m__8(UnityEngine.UI.Toggle)
extern "C" bool ToggleGroup_U3CActiveTogglesU3Em__8_m6175 (Object_t * __this /* static, unused */, Toggle_t1213 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
