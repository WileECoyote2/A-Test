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

// Pathfinding.NavGraph
struct NavGraph_t109;
// Pathfinding.NNConstraint
struct NNConstraint_t132;
// Pathfinding.GraphNode
struct GraphNode_t61;
// Pathfinding.PathHandler
struct PathHandler_t53;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t147;
// Pathfinding.Path
struct Path_t10;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Util_Guid.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_NNInfo.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void Pathfinding.NavGraph::.ctor()
extern "C" void NavGraph__ctor_m929 (NavGraph_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Util.Guid Pathfinding.NavGraph::get_guid()
extern "C" Guid_t257  NavGraph_get_guid_m930 (NavGraph_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::set_guid(Pathfinding.Util.Guid)
extern "C" void NavGraph_set_guid_m931 (NavGraph_t109 * __this, Guid_t257  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.NavGraph::CountNodes()
extern "C" int32_t NavGraph_CountNodes_m932 (NavGraph_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::SetMatrix(UnityEngine.Matrix4x4)
extern "C" void NavGraph_SetMatrix_m933 (NavGraph_t109 * __this, Matrix4x4_t216  ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::RelocateNodes(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C" void NavGraph_RelocateNodes_m934 (NavGraph_t109 * __this, Matrix4x4_t216  ___oldMatrix, Matrix4x4_t216  ___newMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavGraph::GetNearest(UnityEngine.Vector3)
extern "C" NNInfo_t169  NavGraph_GetNearest_m935 (NavGraph_t109 * __this, Vector3_t7  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavGraph::GetNearest(UnityEngine.Vector3,Pathfinding.NNConstraint)
extern "C" NNInfo_t169  NavGraph_GetNearest_m936 (NavGraph_t109 * __this, Vector3_t7  ___position, NNConstraint_t132 * ___constraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavGraph::GetNearest(UnityEngine.Vector3,Pathfinding.NNConstraint,Pathfinding.GraphNode)
extern "C" NNInfo_t169  NavGraph_GetNearest_m937 (NavGraph_t109 * __this, Vector3_t7  ___position, NNConstraint_t132 * ___constraint, GraphNode_t61 * ___hint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NNInfo Pathfinding.NavGraph::GetNearestForce(UnityEngine.Vector3,Pathfinding.NNConstraint)
extern "C" NNInfo_t169  NavGraph_GetNearestForce_m938 (NavGraph_t109 * __this, Vector3_t7  ___position, NNConstraint_t132 * ___constraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::Awake()
extern "C" void NavGraph_Awake_m939 (NavGraph_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::OnDestroy()
extern "C" void NavGraph_OnDestroy_m940 (NavGraph_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::ScanGraph()
extern "C" void NavGraph_ScanGraph_m941 (NavGraph_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::Scan()
extern "C" void NavGraph_Scan_m942 (NavGraph_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::ScanInternal()
extern "C" void NavGraph_ScanInternal_m943 (NavGraph_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Pathfinding.NavGraph::NodeColor(Pathfinding.GraphNode,Pathfinding.PathHandler)
extern "C" Color_t117  NavGraph_NodeColor_m944 (NavGraph_t109 * __this, GraphNode_t61 * ___node, PathHandler_t53 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::SerializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void NavGraph_SerializeExtraInfo_m945 (NavGraph_t109 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::DeserializeExtraInfo(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void NavGraph_DeserializeExtraInfo_m946 (NavGraph_t109 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::PostDeserialization()
extern "C" void NavGraph_PostDeserialization_m947 (NavGraph_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NavGraph::InSearchTree(Pathfinding.GraphNode,Pathfinding.Path)
extern "C" bool NavGraph_InSearchTree_m948 (Object_t * __this /* static, unused */, GraphNode_t61 * ___node, Path_t10 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::OnDrawGizmos(System.Boolean)
extern "C" void NavGraph_OnDrawGizmos_m949 (NavGraph_t109 * __this, bool ___drawNodes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.NavGraph::UnloadGizmoMeshes()
extern "C" void NavGraph_UnloadGizmoMeshes_m950 (NavGraph_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NavGraph::<OnDestroy>m__1E(Pathfinding.GraphNode)
extern "C" bool NavGraph_U3COnDestroyU3Em__1E_m951 (Object_t * __this /* static, unused */, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
