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

// Pathfinding.NavMeshGraph
struct NavMeshGraph_t31;
// Pathfinding.TriangleMeshNode[]
struct TriangleMeshNodeU5BU5D_t227;
// Pathfinding.GraphNodeDelegateCancelable
struct GraphNodeDelegateCancelable_t78;
// Pathfinding.BBTree
struct BBTree_t228;
// Pathfinding.Int3[]
struct Int3U5BU5D_t229;
// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t129;
// Pathfinding.NNConstraint
struct NNConstraint_t132;
// Pathfinding.GraphNode
struct GraphNode_t61;
// Pathfinding.NavGraph
struct NavGraph_t109;
// Pathfinding.INavmeshHolder
struct INavmeshHolder_t393;
// Pathfinding.GraphUpdateObject
struct GraphUpdateObject_t42;
// Pathfinding.INavmesh
struct INavmesh_t394;
// Pathfinding.TriangleMeshNode
struct TriangleMeshNode_t232;
// System.String
struct String_t;
// OnScanStatus
struct OnScanStatus_t57;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t82;
// System.Int32[]
struct Int32U5BU5D_t16;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t147;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_NNInfo.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharpU2Dfirstpass_GraphUpdateThreading.h"

// System.Void Pathfinding.NavMeshGraph::.ctor()
extern "C" void NavMeshGraph__ctor_m1017 (NavMeshGraph_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.TriangleMeshNode[] Pathfinding.NavMeshGraph::get_TriNodes()
extern "C" TriangleMeshNodeU5BU5D_t227* NavMeshGraph_get_TriNodes_m1018 (NavMeshGraph_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::GetNodes(Pathfinding.GraphNodeDelegateCancelable)
extern "C" void NavMeshGraph_GetNodes_m1019 (NavMeshGraph_t31 * __this, GraphNodeDelegateCancelable_t78 * ___del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::OnDestroy()
extern "C" void NavMeshGraph_OnDestroy_m1020 (NavMeshGraph_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.NavMeshGraph::GetVertex(System.Int32)
extern "C" Int3_t111  NavMeshGraph_GetVertex_m1021 (NavMeshGraph_t31 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.NavMeshGraph::GetVertexArrayIndex(System.Int32)
extern "C" int32_t NavMeshGraph_GetVertexArrayIndex_m1022 (NavMeshGraph_t31 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::GetTileCoordinates(System.Int32,System.Int32&,System.Int32&)
extern "C" void NavMeshGraph_GetTileCoordinates_m1023 (NavMeshGraph_t31 * __this, int32_t ___tileIndex, int32_t* ___x, int32_t* ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.BBTree Pathfinding.NavMeshGraph::get_bbTree()
extern "C" BBTree_t228 * NavMeshGraph_get_bbTree_m1024 (NavMeshGraph_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::set_bbTree(Pathfinding.BBTree)
extern "C" void NavMeshGraph_set_bbTree_m1025 (NavMeshGraph_t31 * __this, BBTree_t228 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3[] Pathfinding.NavMeshGraph::get_vertices()
extern "C" Int3U5BU5D_t229* NavMeshGraph_get_vertices_m1026 (NavMeshGraph_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::set_vertices(Pathfinding.Int3[])
extern "C" void NavMeshGraph_set_vertices_m1027 (NavMeshGraph_t31 * __this, Int3U5BU5D_t229* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::GenerateMatrix()
extern "C" void NavMeshGraph_GenerateMatrix_m1028 (NavMeshGraph_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::RelocateNodes(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" void NavMeshGraph_RelocateNodes_m1029 (NavMeshGraph_t31 * __this, Matrix4x4_t216  ___oldMatrix, Matrix4x4_t216  ___newMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavMeshGraph::GetNearest(Pathfinding.NavMeshGraph,Pathfinding.GraphNode[],UnityEngine.Vector3,Pathfinding.NNConstraint,System.Boolean)
extern "C" NNInfo_t169  NavMeshGraph_GetNearest_m1030 (Object_t * __this /* static, unused */, NavMeshGraph_t31 * ___graph, GraphNodeU5BU5D_t129* ___nodes, Vector3_t7  ___position, NNConstraint_t132 * ___constraint, bool ___accurateNearestNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavMeshGraph::GetNearest(UnityEngine.Vector3,Pathfinding.NNConstraint,Pathfinding.GraphNode)
extern "C" NNInfo_t169  NavMeshGraph_GetNearest_m1031 (NavMeshGraph_t31 * __this, Vector3_t7  ___position, NNConstraint_t132 * ___constraint, GraphNode_t61 * ___hint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavMeshGraph::GetNearestForce(UnityEngine.Vector3,Pathfinding.NNConstraint)
extern "C" NNInfo_t169  NavMeshGraph_GetNearestForce_m1032 (NavMeshGraph_t31 * __this, Vector3_t7  ___position, NNConstraint_t132 * ___constraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavMeshGraph::GetNearestForce(Pathfinding.NavGraph,Pathfinding.INavmeshHolder,UnityEngine.Vector3,Pathfinding.NNConstraint,System.Boolean)
extern "C" NNInfo_t169  NavMeshGraph_GetNearestForce_m1033 (Object_t * __this /* static, unused */, NavGraph_t109 * ___graph, Object_t * ___navmesh, Vector3_t7  ___position, NNConstraint_t132 * ___constraint, bool ___accurateNearestNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavMeshGraph::GetNearestForceBoth(Pathfinding.NavGraph,Pathfinding.INavmeshHolder,UnityEngine.Vector3,Pathfinding.NNConstraint,System.Boolean)
extern "C" NNInfo_t169  NavMeshGraph_GetNearestForceBoth_m1034 (Object_t * __this /* static, unused */, NavGraph_t109 * ___graph, Object_t * ___navmesh, Vector3_t7  ___position, NNConstraint_t132 * ___constraint, bool ___accurateNearestNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GraphUpdateThreading Pathfinding.NavMeshGraph::CanUpdateAsync(Pathfinding.GraphUpdateObject)
extern "C" int32_t NavMeshGraph_CanUpdateAsync_m1035 (NavMeshGraph_t31 * __this, GraphUpdateObject_t42 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::UpdateAreaInit(Pathfinding.GraphUpdateObject)
extern "C" void NavMeshGraph_UpdateAreaInit_m1036 (NavMeshGraph_t31 * __this, GraphUpdateObject_t42 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::UpdateArea(Pathfinding.GraphUpdateObject)
extern "C" void NavMeshGraph_UpdateArea_m1037 (NavMeshGraph_t31 * __this, GraphUpdateObject_t42 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::UpdateArea(Pathfinding.GraphUpdateObject,Pathfinding.INavmesh)
extern "C" void NavMeshGraph_UpdateArea_m1038 (Object_t * __this /* static, unused */, GraphUpdateObject_t42 * ___o, Object_t * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.NavMeshGraph::ClosestPointOnNode(Pathfinding.TriangleMeshNode,Pathfinding.Int3[],UnityEngine.Vector3)
extern "C" Vector3_t7  NavMeshGraph_ClosestPointOnNode_m1039 (Object_t * __this /* static, unused */, TriangleMeshNode_t232 * ___node, Int3U5BU5D_t229* ___vertices, Vector3_t7  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NavMeshGraph::ContainsPoint(Pathfinding.TriangleMeshNode,UnityEngine.Vector3)
extern "C" bool NavMeshGraph_ContainsPoint_m1040 (NavMeshGraph_t31 * __this, TriangleMeshNode_t232 * ___node, Vector3_t7  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NavMeshGraph::ContainsPoint(Pathfinding.TriangleMeshNode,UnityEngine.Vector3,Pathfinding.Int3[])
extern "C" bool NavMeshGraph_ContainsPoint_m1041 (Object_t * __this /* static, unused */, TriangleMeshNode_t232 * ___node, Vector3_t7  ___pos, Int3U5BU5D_t229* ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::ScanInternal(System.String)
extern "C" void NavMeshGraph_ScanInternal_m1042 (NavMeshGraph_t31 * __this, String_t* ___objMeshPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::ScanInternal(OnScanStatus)
extern "C" void NavMeshGraph_ScanInternal_m1043 (NavMeshGraph_t31 * __this, OnScanStatus_t57 * ___statusCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::GenerateNodes(UnityEngine.Vector3[],System.Int32[],UnityEngine.Vector3[]&,Pathfinding.Int3[]&)
extern "C" void NavMeshGraph_GenerateNodes_m1044 (NavMeshGraph_t31 * __this, Vector3U5BU5D_t82* ___vectorVertices, Int32U5BU5D_t16* ___triangles, Vector3U5BU5D_t82** ___originalVertices, Int3U5BU5D_t229** ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::RebuildBBTree(Pathfinding.NavMeshGraph)
extern "C" void NavMeshGraph_RebuildBBTree_m1045 (Object_t * __this /* static, unused */, NavMeshGraph_t31 * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::PostProcess()
extern "C" void NavMeshGraph_PostProcess_m1046 (NavMeshGraph_t31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::OnDrawGizmos(System.Boolean)
extern "C" void NavMeshGraph_OnDrawGizmos_m1047 (NavMeshGraph_t31 * __this, bool ___drawNodes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::DeserializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void NavMeshGraph_DeserializeExtraInfo_m1048 (NavMeshGraph_t31 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavMeshGraph::SerializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void NavMeshGraph_SerializeExtraInfo_m1049 (NavMeshGraph_t31 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
