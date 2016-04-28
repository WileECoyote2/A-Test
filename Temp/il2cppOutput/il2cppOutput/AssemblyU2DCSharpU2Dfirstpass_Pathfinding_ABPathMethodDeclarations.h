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

// Pathfinding.ABPath
struct ABPath_t6;
// OnPathDelegate
struct OnPathDelegate_t17;
// Pathfinding.GraphNode
struct GraphNode_t61;
// Pathfinding.Path
struct Path_t10;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PathLog.h"

// System.Void Pathfinding.ABPath::.ctor()
extern "C" void ABPath__ctor_m1190 (ABPath_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.ABPath::get_hasEndPoint()
extern "C" bool ABPath_get_hasEndPoint_m1191 (ABPath_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.ABPath Pathfinding.ABPath::Construct(UnityEngine.Vector3,UnityEngine.Vector3,OnPathDelegate)
extern "C" ABPath_t6 * ABPath_Construct_m1192 (Object_t * __this /* static, unused */, Vector3_t7  ___start, Vector3_t7  ___end, OnPathDelegate_t17 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::Setup(UnityEngine.Vector3,UnityEngine.Vector3,OnPathDelegate)
extern "C" void ABPath_Setup_m1193 (ABPath_t6 * __this, Vector3_t7  ___start, Vector3_t7  ___end, OnPathDelegate_t17 * ___callbackDelegate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::UpdateStartEnd(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void ABPath_UpdateStartEnd_m1194 (ABPath_t6 * __this, Vector3_t7  ___start, Vector3_t7  ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.ABPath::GetConnectionSpecialCost(Pathfinding.GraphNode,Pathfinding.GraphNode,System.UInt32)
extern "C" uint32_t ABPath_GetConnectionSpecialCost_m1195 (ABPath_t6 * __this, GraphNode_t61 * ___a, GraphNode_t61 * ___b, uint32_t ___currentCost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::Reset()
extern "C" void ABPath_Reset_m1196 (ABPath_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::Prepare()
extern "C" void ABPath_Prepare_m1197 (ABPath_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::CompletePathIfStartIsValidTarget()
extern "C" void ABPath_CompletePathIfStartIsValidTarget_m1198 (ABPath_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::Initialize()
extern "C" void ABPath_Initialize_m1199 (ABPath_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::Cleanup()
extern "C" void ABPath_Cleanup_m1200 (ABPath_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::CalculateStep(System.Int64)
extern "C" void ABPath_CalculateStep_m1201 (ABPath_t6 * __this, int64_t ___targetTick, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.ABPath::ResetCosts(Pathfinding.Path)
extern "C" void ABPath_ResetCosts_m1202 (ABPath_t6 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.ABPath::DebugString(PathLog)
extern "C" String_t* ABPath_DebugString_m1203 (ABPath_t6 * __this, int32_t ___logMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.ABPath::GetMovementVector(UnityEngine.Vector3)
extern "C" Vector3_t7  ABPath_GetMovementVector_m1204 (ABPath_t6 * __this, Vector3_t7  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
