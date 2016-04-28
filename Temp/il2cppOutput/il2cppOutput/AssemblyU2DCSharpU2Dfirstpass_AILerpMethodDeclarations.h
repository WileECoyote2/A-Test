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

// AILerp
struct AILerp_t2;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// Pathfinding.Path
struct Path_t10;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void AILerp::.ctor()
extern "C" void AILerp__ctor_m6 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AILerp::get_targetReached()
extern "C" bool AILerp_get_targetReached_m7 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::set_targetReached(System.Boolean)
extern "C" void AILerp_set_targetReached_m8 (AILerp_t2 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::Awake()
extern "C" void AILerp_Awake_m9 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::Start()
extern "C" void AILerp_Start_m10 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::OnEnable()
extern "C" void AILerp_OnEnable_m11 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::OnDisable()
extern "C" void AILerp_OnDisable_m12 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AILerp::RepeatTrySearchPath()
extern "C" Object_t * AILerp_RepeatTrySearchPath_m13 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AILerp::TrySearchPath()
extern "C" float AILerp_TrySearchPath_m14 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::SearchPath()
extern "C" void AILerp_SearchPath_m15 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::ForceSearchPath()
extern "C" void AILerp_ForceSearchPath_m16 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::OnTargetReached()
extern "C" void AILerp_OnTargetReached_m17 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::OnPathComplete(Pathfinding.Path)
extern "C" void AILerp_OnPathComplete_m18 (AILerp_t2 * __this, Path_t10 * ____p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::ConfigurePathSwitchInterpolation()
extern "C" void AILerp_ConfigurePathSwitchInterpolation_m19 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AILerp::GetFeetPosition()
extern "C" Vector3_t7  AILerp_GetFeetPosition_m20 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::ConfigureNewPath()
extern "C" void AILerp_ConfigureNewPath_m21 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AILerp::Update()
extern "C" void AILerp_Update_m22 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AILerp::CalculateNextPosition(UnityEngine.Vector3&)
extern "C" Vector3_t7  AILerp_CalculateNextPosition_m23 (AILerp_t2 * __this, Vector3_t7 * ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AILerp::<Awake>m__0()
extern "C" Vector3_t7  AILerp_U3CAwakeU3Em__0_m24 (AILerp_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
