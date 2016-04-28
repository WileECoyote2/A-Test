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

// Pathfinding.PointGraph
struct PointGraph_t33;
// Pathfinding.GraphNodeDelegateCancelable
struct GraphNodeDelegateCancelable_t78;
// Pathfinding.NNConstraint
struct NNConstraint_t132;
// Pathfinding.GraphNode
struct GraphNode_t61;
// Pathfinding.PointNode
struct PointNode_t114;
// UnityEngine.Transform
struct Transform_t4;
// OnScanStatus
struct OnScanStatus_t57;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t147;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_NNInfo.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void Pathfinding.PointGraph::.ctor()
extern "C" void PointGraph__ctor_m1112 (PointGraph_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.PointGraph::CountNodes()
extern "C" int32_t PointGraph_CountNodes_m1113 (PointGraph_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::GetNodes(Pathfinding.GraphNodeDelegateCancelable)
extern "C" void PointGraph_GetNodes_m1114 (PointGraph_t33 * __this, GraphNodeDelegateCancelable_t78 * ___del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.PointGraph::GetNearest(UnityEngine.Vector3,Pathfinding.NNConstraint,Pathfinding.GraphNode)
extern "C" NNInfo_t169  PointGraph_GetNearest_m1115 (PointGraph_t33 * __this, Vector3_t7  ___position, NNConstraint_t132 * ___constraint, GraphNode_t61 * ___hint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.PointGraph::GetNearestForce(UnityEngine.Vector3,Pathfinding.NNConstraint)
extern "C" NNInfo_t169  PointGraph_GetNearestForce_m1116 (PointGraph_t33 * __this, Vector3_t7  ___position, NNConstraint_t132 * ___constraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PointNode Pathfinding.PointGraph::AddNode(Pathfinding.Int3)
extern "C" PointNode_t114 * PointGraph_AddNode_m1117 (PointGraph_t33 * __this, Int3_t111  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.PointGraph::CountChildren(UnityEngine.Transform)
extern "C" int32_t PointGraph_CountChildren_m1118 (Object_t * __this /* static, unused */, Transform_t4 * ___tr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::AddChildren(System.Int32&,UnityEngine.Transform)
extern "C" void PointGraph_AddChildren_m1119 (PointGraph_t33 * __this, int32_t* ___c, Transform_t4 * ___tr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::RebuildNodeLookup()
extern "C" void PointGraph_RebuildNodeLookup_m1120 (PointGraph_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::AddToLookup(Pathfinding.PointNode)
extern "C" void PointGraph_AddToLookup_m1121 (PointGraph_t33 * __this, PointNode_t114 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::ScanInternal(OnScanStatus)
extern "C" void PointGraph_ScanInternal_m1122 (PointGraph_t33 * __this, OnScanStatus_t57 * ___statusCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.PointGraph::IsValidConnection(Pathfinding.GraphNode,Pathfinding.GraphNode,System.Single&)
extern "C" bool PointGraph_IsValidConnection_m1123 (PointGraph_t33 * __this, GraphNode_t61 * ___a, GraphNode_t61 * ___b, float* ___dist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::PostDeserialization()
extern "C" void PointGraph_PostDeserialization_m1124 (PointGraph_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::RelocateNodes(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" void PointGraph_RelocateNodes_m1125 (PointGraph_t33 * __this, Matrix4x4_t216  ___oldMatrix, Matrix4x4_t216  ___newMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::SerializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void PointGraph_SerializeExtraInfo_m1126 (PointGraph_t33 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointGraph::DeserializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void PointGraph_DeserializeExtraInfo_m1127 (PointGraph_t33 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
