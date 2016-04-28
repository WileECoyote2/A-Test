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

// Pathfinding.GridGraph
struct GridGraph_t32;
// Pathfinding.GraphNodeDelegateCancelable
struct GraphNodeDelegateCancelable_t78;
// Pathfinding.GridNode
struct GridNode_t185;
// Pathfinding.NNConstraint
struct NNConstraint_t132;
// Pathfinding.GraphNode
struct GraphNode_t61;
// OnScanStatus
struct OnScanStatus_t57;
// Pathfinding.GridNode[]
struct GridNodeU5BU5D_t184;
// AstarPath
struct AstarPath_t48;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t19;
// Pathfinding.GraphUpdateShape
struct GraphUpdateShape_t83;
// Pathfinding.GraphUpdateObject
struct GraphUpdateObject_t42;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_NNInfo.h"
#include "UnityEngine_UnityEngine_Bounds.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GraphUpdateThreading.h"

// System.Void Pathfinding.GridGraph::.ctor()
extern "C" void GridGraph__ctor_m961 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::.cctor()
extern "C" void GridGraph__cctor_m962 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::OnDestroy()
extern "C" void GridGraph_OnDestroy_m963 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::RemoveGridGraphFromStatic()
extern "C" void GridGraph_RemoveGridGraphFromStatic_m964 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridGraph::get_uniformWidthDepthGrid()
extern "C" bool GridGraph_get_uniformWidthDepthGrid_m965 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.GridGraph::CountNodes()
extern "C" int32_t GridGraph_CountNodes_m966 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::GetNodes(Pathfinding.GraphNodeDelegateCancelable)
extern "C" void GridGraph_GetNodes_m967 (GridGraph_t32 * __this, GraphNodeDelegateCancelable_t78 * ___del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridGraph::get_useRaycastNormal()
extern "C" bool GridGraph_get_useRaycastNormal_m968 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Pathfinding.GridGraph::get_size()
extern "C" Vector2_t189  GridGraph_get_size_m969 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::set_size(UnityEngine.Vector2)
extern "C" void GridGraph_set_size_m970 (GridGraph_t32 * __this, Vector2_t189  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Pathfinding.GridGraph::get_boundsMatrix()
extern "C" Matrix4x4_t216  GridGraph_get_boundsMatrix_m971 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::set_boundsMatrix(UnityEngine.Matrix4x4)
extern "C" void GridGraph_set_boundsMatrix_m972 (GridGraph_t32 * __this, Matrix4x4_t216  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::RelocateNodes(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,System.Single,System.Single)
extern "C" void GridGraph_RelocateNodes_m973 (GridGraph_t32 * __this, Vector3_t7  ___center, Quaternion_t206  ___rotation, float ___nodeSize, float ___aspectRatio, float ___isometricAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.GridGraph::GraphPointToWorld(System.Int32,System.Int32,System.Single)
extern "C" Int3_t111  GridGraph_GraphPointToWorld_m974 (GridGraph_t32 * __this, int32_t ___x, int32_t ___z, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.GridGraph::get_Width()
extern "C" int32_t GridGraph_get_Width_m975 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::set_Width(System.Int32)
extern "C" void GridGraph_set_Width_m976 (GridGraph_t32 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.GridGraph::get_Depth()
extern "C" int32_t GridGraph_get_Depth_m977 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::set_Depth(System.Int32)
extern "C" void GridGraph_set_Depth_m978 (GridGraph_t32 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.GridGraph::GetConnectionCost(System.Int32)
extern "C" uint32_t GridGraph_GetConnectionCost_m979 (GridGraph_t32 * __this, int32_t ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GridNode Pathfinding.GridGraph::GetNodeConnection(Pathfinding.GridNode,System.Int32)
extern "C" GridNode_t185 * GridGraph_GetNodeConnection_m980 (GridGraph_t32 * __this, GridNode_t185 * ___node, int32_t ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridGraph::HasNodeConnection(Pathfinding.GridNode,System.Int32)
extern "C" bool GridGraph_HasNodeConnection_m981 (GridGraph_t32 * __this, GridNode_t185 * ___node, int32_t ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::SetNodeConnection(Pathfinding.GridNode,System.Int32,System.Boolean)
extern "C" void GridGraph_SetNodeConnection_m982 (GridGraph_t32 * __this, GridNode_t185 * ___node, int32_t ___dir, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GridNode Pathfinding.GridGraph::GetNodeConnection(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" GridNode_t185 * GridGraph_GetNodeConnection_m983 (GridGraph_t32 * __this, int32_t ___index, int32_t ___x, int32_t ___z, int32_t ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::SetNodeConnection(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C" void GridGraph_SetNodeConnection_m984 (GridGraph_t32 * __this, int32_t ___index, int32_t ___x, int32_t ___z, int32_t ___dir, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridGraph::HasNodeConnection(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool GridGraph_HasNodeConnection_m985 (GridGraph_t32 * __this, int32_t ___index, int32_t ___x, int32_t ___z, int32_t ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::UpdateSizeFromWidthDepth()
extern "C" void GridGraph_UpdateSizeFromWidthDepth_m986 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::GenerateMatrix()
extern "C" void GridGraph_GenerateMatrix_m987 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.GridGraph::GetNearest(UnityEngine.Vector3,Pathfinding.NNConstraint,Pathfinding.GraphNode)
extern "C" NNInfo_t169  GridGraph_GetNearest_m988 (GridGraph_t32 * __this, Vector3_t7  ___position, NNConstraint_t132 * ___constraint, GraphNode_t61 * ___hint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.GridGraph::GetNearestForce(UnityEngine.Vector3,Pathfinding.NNConstraint)
extern "C" NNInfo_t169  GridGraph_GetNearestForce_m989 (GridGraph_t32 * __this, Vector3_t7  ___position, NNConstraint_t132 * ___constraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::SetUpOffsetsAndCosts()
extern "C" void GridGraph_SetUpOffsetsAndCosts_m990 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::ScanInternal(OnScanStatus)
extern "C" void GridGraph_ScanInternal_m991 (GridGraph_t32 * __this, OnScanStatus_t57 * ___statusCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::UpdateNodePositionCollision(Pathfinding.GridNode,System.Int32,System.Int32,System.Boolean)
extern "C" void GridGraph_UpdateNodePositionCollision_m992 (GridGraph_t32 * __this, GridNode_t185 * ___node, int32_t ___x, int32_t ___z, bool ___resetPenalty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::ErodeWalkableArea()
extern "C" void GridGraph_ErodeWalkableArea_m993 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridGraph::ErosionAnyFalseConnections(Pathfinding.GridNode)
extern "C" bool GridGraph_ErosionAnyFalseConnections_m994 (GridGraph_t32 * __this, GridNode_t185 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::ErodeWalkableArea(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void GridGraph_ErodeWalkableArea_m995 (GridGraph_t32 * __this, int32_t ___xmin, int32_t ___zmin, int32_t ___xmax, int32_t ___zmax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridGraph::IsValidConnection(Pathfinding.GridNode,Pathfinding.GridNode)
extern "C" bool GridGraph_IsValidConnection_m996 (GridGraph_t32 * __this, GridNode_t185 * ___n1, GridNode_t185 * ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::CalculateConnections(Pathfinding.GridNode)
extern "C" void GridGraph_CalculateConnections_m997 (Object_t * __this /* static, unused */, GridNode_t185 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::CalculateConnections(Pathfinding.GridNode[],System.Int32,System.Int32,Pathfinding.GridNode)
extern "C" void GridGraph_CalculateConnections_m998 (GridGraph_t32 * __this, GridNodeU5BU5D_t184* ___nodes, int32_t ___x, int32_t ___z, GridNode_t185 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::CalculateConnections(System.Int32,System.Int32,Pathfinding.GridNode)
extern "C" void GridGraph_CalculateConnections_m999 (GridGraph_t32 * __this, int32_t ___x, int32_t ___z, GridNode_t185 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::OnPostScan(AstarPath)
extern "C" void GridGraph_OnPostScan_m1000 (GridGraph_t32 * __this, AstarPath_t48 * ___script, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::OnDrawGizmos(System.Boolean)
extern "C" void GridGraph_OnDrawGizmos_m1001 (GridGraph_t32 * __this, bool ___drawNodes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::GetBoundsMinMax(UnityEngine.Bounds,UnityEngine.Matrix4x4,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void GridGraph_GetBoundsMinMax_m1002 (Object_t * __this /* static, unused */, Bounds_t171  ___b, Matrix4x4_t216  ___matrix, Vector3_t7 * ___min, Vector3_t7 * ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.GridGraph::GetNodesInArea(UnityEngine.Bounds)
extern "C" List_1_t19 * GridGraph_GetNodesInArea_m1003 (GridGraph_t32 * __this, Bounds_t171  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.GridGraph::GetNodesInArea(Pathfinding.GraphUpdateShape)
extern "C" List_1_t19 * GridGraph_GetNodesInArea_m1004 (GridGraph_t32 * __this, GraphUpdateShape_t83 * ___shape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.GridGraph::GetNodesInArea(UnityEngine.Bounds,Pathfinding.GraphUpdateShape)
extern "C" List_1_t19 * GridGraph_GetNodesInArea_m1005 (GridGraph_t32 * __this, Bounds_t171  ___b, GraphUpdateShape_t83 * ___shape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GraphUpdateThreading Pathfinding.GridGraph::CanUpdateAsync(Pathfinding.GraphUpdateObject)
extern "C" int32_t GridGraph_CanUpdateAsync_m1006 (GridGraph_t32 * __this, GraphUpdateObject_t42 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::UpdateAreaInit(Pathfinding.GraphUpdateObject)
extern "C" void GridGraph_UpdateAreaInit_m1007 (GridGraph_t32 * __this, GraphUpdateObject_t42 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::UpdateArea(Pathfinding.GraphUpdateObject)
extern "C" void GridGraph_UpdateArea_m1008 (GridGraph_t32 * __this, GraphUpdateObject_t42 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridGraph::CheckConnection(Pathfinding.GridNode,System.Int32)
extern "C" bool GridGraph_CheckConnection_m1009 (GridGraph_t32 * __this, GridNode_t185 * ___node, int32_t ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::SerializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void GridGraph_SerializeExtraInfo_m1010 (GridGraph_t32 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::DeserializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void GridGraph_DeserializeExtraInfo_m1011 (GridGraph_t32 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridGraph::PostDeserialization()
extern "C" void GridGraph_PostDeserialization_m1012 (GridGraph_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
