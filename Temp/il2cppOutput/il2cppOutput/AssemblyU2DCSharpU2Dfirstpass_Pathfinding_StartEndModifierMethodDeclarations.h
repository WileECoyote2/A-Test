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

// Pathfinding.StartEndModifier
struct StartEndModifier_t14;
// Pathfinding.Path
struct Path_t10;
// Pathfinding.ABPath
struct ABPath_t6;
// Pathfinding.GraphNode
struct GraphNode_t61;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_StartEndModifier_E.h"

// System.Void Pathfinding.StartEndModifier::.ctor()
extern "C" void StartEndModifier__ctor_m1173 (StartEndModifier_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.StartEndModifier::get_Order()
extern "C" int32_t StartEndModifier_get_Order_m1174 (StartEndModifier_t14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.StartEndModifier::Apply(Pathfinding.Path)
extern "C" void StartEndModifier_Apply_m1175 (StartEndModifier_t14 * __this, Path_t10 * ____p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.StartEndModifier::Snap(Pathfinding.ABPath,Pathfinding.StartEndModifier/Exactness,System.Boolean,System.Boolean&)
extern "C" Vector3_t7  StartEndModifier_Snap_m1176 (StartEndModifier_t14 * __this, ABPath_t6 * ___path, int32_t ___mode, bool ___start, bool* ___forceAddPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.StartEndModifier::GetClampedPoint(UnityEngine.Vector3,UnityEngine.Vector3,Pathfinding.GraphNode)
extern "C" Vector3_t7  StartEndModifier_GetClampedPoint_m1177 (StartEndModifier_t14 * __this, Vector3_t7  ___from, Vector3_t7  ___to, GraphNode_t61 * ___hint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
