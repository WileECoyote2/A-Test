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

// AIPath
struct AIPath_t9;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// Pathfinding.Path
struct Path_t10;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void AIPath::.ctor()
extern "C" void AIPath__ctor_m31 (AIPath_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AIPath::get_TargetReached()
extern "C" bool AIPath_get_TargetReached_m32 (AIPath_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::Awake()
extern "C" void AIPath_Awake_m33 (AIPath_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::Start()
extern "C" void AIPath_Start_m34 (AIPath_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::OnEnable()
extern "C" void AIPath_OnEnable_m35 (AIPath_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::OnDisable()
extern "C" void AIPath_OnDisable_m36 (AIPath_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AIPath::RepeatTrySearchPath()
extern "C" Object_t * AIPath_RepeatTrySearchPath_m37 (AIPath_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AIPath::TrySearchPath()
extern "C" float AIPath_TrySearchPath_m38 (AIPath_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::SearchPath()
extern "C" void AIPath_SearchPath_m39 (AIPath_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::OnTargetReached()
extern "C" void AIPath_OnTargetReached_m40 (AIPath_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::OnPathComplete(Pathfinding.Path)
extern "C" void AIPath_OnPathComplete_m41 (AIPath_t9 * __this, Path_t10 * ____p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AIPath::GetFeetPosition()
extern "C" Vector3_t7  AIPath_GetFeetPosition_m42 (AIPath_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::Update()
extern "C" void AIPath_Update_m43 (AIPath_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AIPath::XZSqrMagnitude(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float AIPath_XZSqrMagnitude_m44 (AIPath_t9 * __this, Vector3_t7  ___a, Vector3_t7  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AIPath::CalculateVelocity(UnityEngine.Vector3)
extern "C" Vector3_t7  AIPath_CalculateVelocity_m45 (AIPath_t9 * __this, Vector3_t7  ___currentPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AIPath::RotateTowards(UnityEngine.Vector3)
extern "C" void AIPath_RotateTowards_m46 (AIPath_t9 * __this, Vector3_t7  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 AIPath::CalculateTargetPoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t7  AIPath_CalculateTargetPoint_m47 (AIPath_t9 * __this, Vector3_t7  ___p, Vector3_t7  ___a, Vector3_t7  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
