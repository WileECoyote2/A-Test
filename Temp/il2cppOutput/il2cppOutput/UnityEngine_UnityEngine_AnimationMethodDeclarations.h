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

// UnityEngine.Animation
struct Animation_t208;
// UnityEngine.AnimationState
struct AnimationState_t425;
// System.String
struct String_t;
// UnityEngine.AnimationClip
struct AnimationClip_t85;
// System.Collections.IEnumerator
struct IEnumerator_t79;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_PlayMode.h"

// System.Void UnityEngine.Animation::Sample()
extern "C" void Animation_Sample_m1889 (Animation_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)
extern "C" void Animation_INTERNAL_CALL_Sample_m3514 (Object_t * __this /* static, unused */, Animation_t208 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C" AnimationState_t425 * Animation_get_Item_m1885 (Animation_t208 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play()
extern "C" bool Animation_Play_m2358 (Animation_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C" bool Animation_Play_m3515 (Animation_t208 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C" bool Animation_Play_m3516 (Animation_t208 * __this, String_t* ___animation, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C" bool Animation_Play_m2077 (Animation_t208 * __this, String_t* ___animation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::Blend(System.String,System.Single,System.Single)
extern "C" void Animation_Blend_m2091 (Animation_t208 * __this, String_t* ___animation, float ___targetWeight, float ___fadeLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String)
extern "C" void Animation_AddClip_m1884 (Animation_t208 * __this, AnimationClip_t85 * ___clip, String_t* ___newName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
extern "C" void Animation_AddClip_m3517 (Animation_t208 * __this, AnimationClip_t85 * ___clip, String_t* ___newName, int32_t ___firstFrame, int32_t ___lastFrame, bool ___addLoopFrame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
extern "C" void Animation_AddClip_m3518 (Animation_t208 * __this, AnimationClip_t85 * ___clip, String_t* ___newName, int32_t ___firstFrame, int32_t ___lastFrame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" bool Animation_PlayDefaultAnimation_m3519 (Animation_t208 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C" Object_t * Animation_GetEnumerator_m3520 (Animation_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C" AnimationState_t425 * Animation_GetState_m3521 (Animation_t208 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" AnimationState_t425 * Animation_GetStateAtIndex_m3522 (Animation_t208 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" int32_t Animation_GetStateCount_m3523 (Animation_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
