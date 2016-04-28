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

// UnityEngine.Animator
struct Animator_t300;
// System.String
struct String_t;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t664;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C" void Animator_SetFloat_m2317 (Animator_t300 * __this, String_t* ___name, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
extern "C" void Animator_SetFloat_m2315 (Animator_t300 * __this, String_t* ___name, float ___value, float ___dampTime, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C" void Animator_SetBool_m2316 (Animator_t300 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" void Animator_SetTrigger_m2516 (Animator_t300 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m3540 (Animator_t300 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
extern "C" Vector3_t7  Animator_get_deltaPosition_m2324 (Animator_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::INTERNAL_get_deltaPosition(UnityEngine.Vector3&)
extern "C" void Animator_INTERNAL_get_deltaPosition_m3541 (Animator_t300 * __this, Vector3_t7 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
extern "C" void Animator_set_applyRootMotion_m2323 (Animator_t300 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C" AnimatorStateInfo_t488  Animator_GetCurrentAnimatorStateInfo_m2318 (Animator_t300 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_speed(System.Single)
extern "C" void Animator_set_speed_m2321 (Animator_t300 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t664 * Animator_get_runtimeAnimatorController_m3542 (Animator_t300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m3543 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C" void Animator_SetFloatString_m3544 (Animator_t300 * __this, String_t* ___name, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C" void Animator_SetBoolString_m3545 (Animator_t300 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m3546 (Animator_t300 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m3547 (Animator_t300 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
extern "C" void Animator_SetFloatStringDamp_m3548 (Animator_t300 * __this, String_t* ___name, float ___value, float ___dampTime, float ___deltaTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
