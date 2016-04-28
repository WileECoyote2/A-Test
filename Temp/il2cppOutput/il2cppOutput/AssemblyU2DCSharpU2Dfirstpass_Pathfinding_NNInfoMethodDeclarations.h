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

// Pathfinding.GraphNode
struct GraphNode_t61;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_NNInfo.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Pathfinding.NNInfo::.ctor(Pathfinding.GraphNode)
extern "C" void NNInfo__ctor_m790 (NNInfo_t169 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NNInfo::SetConstrained(Pathfinding.GraphNode,UnityEngine.Vector3)
extern "C" void NNInfo_SetConstrained_m791 (NNInfo_t169 * __this, GraphNode_t61 * ___constrainedNode, Vector3_t7  ___clampedPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NNInfo::UpdateInfo()
extern "C" void NNInfo_UpdateInfo_m792 (NNInfo_t169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.NNInfo::op_Explicit(Pathfinding.NNInfo)
extern "C" Vector3_t7  NNInfo_op_Explicit_m793 (Object_t * __this /* static, unused */, NNInfo_t169  ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.NNInfo::op_Explicit(Pathfinding.NNInfo)
extern "C" GraphNode_t61 * NNInfo_op_Explicit_m794 (Object_t * __this /* static, unused */, NNInfo_t169  ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NNInfo::op_Explicit(Pathfinding.GraphNode)
extern "C" NNInfo_t169  NNInfo_op_Explicit_m795 (Object_t * __this /* static, unused */, GraphNode_t61 * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
