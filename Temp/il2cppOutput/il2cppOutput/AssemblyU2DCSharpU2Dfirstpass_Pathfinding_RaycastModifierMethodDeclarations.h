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

// Pathfinding.RaycastModifier
struct RaycastModifier_t244;
// Pathfinding.Path
struct Path_t10;
// Pathfinding.GraphNode
struct GraphNode_t61;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Pathfinding.RaycastModifier::.ctor()
extern "C" void RaycastModifier__ctor_m1161 (RaycastModifier_t244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.RaycastModifier::get_Order()
extern "C" int32_t RaycastModifier_get_Order_m1162 (RaycastModifier_t244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.RaycastModifier::Apply(Pathfinding.Path)
extern "C" void RaycastModifier_Apply_m1163 (RaycastModifier_t244 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.RaycastModifier::ValidateLine(Pathfinding.GraphNode,Pathfinding.GraphNode,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool RaycastModifier_ValidateLine_m1164 (RaycastModifier_t244 * __this, GraphNode_t61 * ___n1, GraphNode_t61 * ___n2, Vector3_t7  ___v1, Vector3_t7  ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
