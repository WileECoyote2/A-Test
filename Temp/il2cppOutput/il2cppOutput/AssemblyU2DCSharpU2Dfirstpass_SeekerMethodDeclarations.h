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

// Seeker
struct Seeker_t5;
// Pathfinding.Path
struct Path_t10;
// Pathfinding.IPathModifier
struct IPathModifier_t387;
// Pathfinding.ABPath
struct ABPath_t6;
// OnPathDelegate
struct OnPathDelegate_t17;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Seeker_ModifierPass.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Seeker::.ctor()
extern "C" void Seeker__ctor_m48 (Seeker_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void Seeker_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m49 (Seeker_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void Seeker_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m50 (Seeker_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::Awake()
extern "C" void Seeker_Awake_m51 (Seeker_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Seeker::GetCurrentPath()
extern "C" Path_t10 * Seeker_GetCurrentPath_m52 (Seeker_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::OnDestroy()
extern "C" void Seeker_OnDestroy_m53 (Seeker_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::ReleaseClaimedPath()
extern "C" void Seeker_ReleaseClaimedPath_m54 (Seeker_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::RegisterModifier(Pathfinding.IPathModifier)
extern "C" void Seeker_RegisterModifier_m55 (Seeker_t5 * __this, Object_t * ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::DeregisterModifier(Pathfinding.IPathModifier)
extern "C" void Seeker_DeregisterModifier_m56 (Seeker_t5 * __this, Object_t * ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::PostProcess(Pathfinding.Path)
extern "C" void Seeker_PostProcess_m57 (Seeker_t5 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::RunModifiers(Seeker/ModifierPass,Pathfinding.Path)
extern "C" void Seeker_RunModifiers_m58 (Seeker_t5 * __this, int32_t ___pass, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Seeker::IsDone()
extern "C" bool Seeker_IsDone_m59 (Seeker_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::OnPathComplete(Pathfinding.Path)
extern "C" void Seeker_OnPathComplete_m60 (Seeker_t5 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::OnPathComplete(Pathfinding.Path,System.Boolean,System.Boolean)
extern "C" void Seeker_OnPathComplete_m61 (Seeker_t5 * __this, Path_t10 * ___p, bool ___runModifiers, bool ___sendCallbacks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.ABPath Seeker::GetNewPath(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" ABPath_t6 * Seeker_GetNewPath_m62 (Seeker_t5 * __this, Vector3_t7  ___start, Vector3_t7  ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Seeker::StartPath(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Path_t10 * Seeker_StartPath_m63 (Seeker_t5 * __this, Vector3_t7  ___start, Vector3_t7  ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Seeker::StartPath(UnityEngine.Vector3,UnityEngine.Vector3,OnPathDelegate)
extern "C" Path_t10 * Seeker_StartPath_m64 (Seeker_t5 * __this, Vector3_t7  ___start, Vector3_t7  ___end, OnPathDelegate_t17 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Seeker::StartPath(UnityEngine.Vector3,UnityEngine.Vector3,OnPathDelegate,System.Int32)
extern "C" Path_t10 * Seeker_StartPath_m65 (Seeker_t5 * __this, Vector3_t7  ___start, Vector3_t7  ___end, OnPathDelegate_t17 * ___callback, int32_t ___graphMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Path Seeker::StartPath(Pathfinding.Path,OnPathDelegate,System.Int32)
extern "C" Path_t10 * Seeker_StartPath_m66 (Seeker_t5 * __this, Path_t10 * ___p, OnPathDelegate_t17 * ___callback, int32_t ___graphMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::StartPathInternal(Pathfinding.Path,OnPathDelegate)
extern "C" void Seeker_StartPathInternal_m67 (Seeker_t5 * __this, Path_t10 * ___p, OnPathDelegate_t17 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Seeker::OnDrawGizmos()
extern "C" void Seeker_OnDrawGizmos_m68 (Seeker_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Seeker::<RegisterModifier>m__1(Pathfinding.IPathModifier,Pathfinding.IPathModifier)
extern "C" int32_t Seeker_U3CRegisterModifierU3Em__1_m69 (Object_t * __this /* static, unused */, Object_t * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
