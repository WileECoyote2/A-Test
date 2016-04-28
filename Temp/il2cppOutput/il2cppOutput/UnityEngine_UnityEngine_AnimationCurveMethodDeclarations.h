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

// UnityEngine.AnimationCurve
struct AnimationCurve_t292;
struct AnimationCurve_t292_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t486;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Keyframe.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2284 (AnimationCurve_t292 * __this, KeyframeU5BU5D_t486* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m3506 (AnimationCurve_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3507 (AnimationCurve_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3508 (AnimationCurve_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" float AnimationCurve_Evaluate_m2292 (AnimationCurve_t292 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C" Keyframe_t487  AnimationCurve_get_Item_m2371 (AnimationCurve_t292 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C" int32_t AnimationCurve_get_length_m2370 (AnimationCurve_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C" Keyframe_t487  AnimationCurve_GetKey_Internal_m3509 (AnimationCurve_t292 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3510 (AnimationCurve_t292 * __this, KeyframeU5BU5D_t486* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t292_marshal(const AnimationCurve_t292& unmarshaled, AnimationCurve_t292_marshaled& marshaled);
extern "C" void AnimationCurve_t292_marshal_back(const AnimationCurve_t292_marshaled& marshaled, AnimationCurve_t292& unmarshaled);
extern "C" void AnimationCurve_t292_marshal_cleanup(AnimationCurve_t292_marshaled& marshaled);
