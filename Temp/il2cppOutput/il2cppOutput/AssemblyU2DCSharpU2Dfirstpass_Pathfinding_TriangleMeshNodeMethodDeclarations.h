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

// Pathfinding.TriangleMeshNode
struct TriangleMeshNode_t232;
// AstarPath
struct AstarPath_t48;
// Pathfinding.INavmeshHolder
struct INavmeshHolder_t393;
// Pathfinding.Path
struct Path_t10;
// Pathfinding.PathNode
struct PathNode_t105;
// Pathfinding.PathHandler
struct PathHandler_t53;
// Pathfinding.GraphNode
struct GraphNode_t61;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t18;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t147;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Pathfinding.TriangleMeshNode::.ctor(AstarPath)
extern "C" void TriangleMeshNode__ctor_m1093 (TriangleMeshNode_t232 * __this, AstarPath_t48 * ___astar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.TriangleMeshNode::.cctor()
extern "C" void TriangleMeshNode__cctor_m1094 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.INavmeshHolder Pathfinding.TriangleMeshNode::GetNavmeshHolder(System.UInt32)
extern "C" Object_t * TriangleMeshNode_GetNavmeshHolder_m1095 (Object_t * __this /* static, unused */, uint32_t ___graphIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.TriangleMeshNode::SetNavmeshHolder(System.Int32,Pathfinding.INavmeshHolder)
extern "C" void TriangleMeshNode_SetNavmeshHolder_m1096 (Object_t * __this /* static, unused */, int32_t ___graphIndex, Object_t * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.TriangleMeshNode::UpdatePositionFromVertices()
extern "C" void TriangleMeshNode_UpdatePositionFromVertices_m1097 (TriangleMeshNode_t232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.TriangleMeshNode::GetVertexIndex(System.Int32)
extern "C" int32_t TriangleMeshNode_GetVertexIndex_m1098 (TriangleMeshNode_t232 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.TriangleMeshNode::GetVertexArrayIndex(System.Int32)
extern "C" int32_t TriangleMeshNode_GetVertexArrayIndex_m1099 (TriangleMeshNode_t232 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Int3 Pathfinding.TriangleMeshNode::GetVertex(System.Int32)
extern "C" Int3_t111  TriangleMeshNode_GetVertex_m1100 (TriangleMeshNode_t232 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.TriangleMeshNode::GetVertexCount()
extern "C" int32_t TriangleMeshNode_GetVertexCount_m1101 (TriangleMeshNode_t232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.TriangleMeshNode::ClosestPointOnNode(UnityEngine.Vector3)
extern "C" Vector3_t7  TriangleMeshNode_ClosestPointOnNode_m1102 (TriangleMeshNode_t232 * __this, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.TriangleMeshNode::ClosestPointOnNodeXZ(UnityEngine.Vector3)
extern "C" Vector3_t7  TriangleMeshNode_ClosestPointOnNodeXZ_m1103 (TriangleMeshNode_t232 * __this, Vector3_t7  ____p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.TriangleMeshNode::ContainsPoint(Pathfinding.Int3)
extern "C" bool TriangleMeshNode_ContainsPoint_m1104 (TriangleMeshNode_t232 * __this, Int3_t111  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.TriangleMeshNode::UpdateRecursiveG(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C" void TriangleMeshNode_UpdateRecursiveG_m1105 (TriangleMeshNode_t232 * __this, Path_t10 * ___path, PathNode_t105 * ___pathNode, PathHandler_t53 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.TriangleMeshNode::Open(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C" void TriangleMeshNode_Open_m1106 (TriangleMeshNode_t232 * __this, Path_t10 * ___path, PathNode_t105 * ___pathNode, PathHandler_t53 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.TriangleMeshNode::SharedEdge(Pathfinding.GraphNode)
extern "C" int32_t TriangleMeshNode_SharedEdge_m1107 (TriangleMeshNode_t232 * __this, GraphNode_t61 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.TriangleMeshNode::GetPortal(Pathfinding.GraphNode,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Boolean)
extern "C" bool TriangleMeshNode_GetPortal_m1108 (TriangleMeshNode_t232 * __this, GraphNode_t61 * ____other, List_1_t18 * ___left, List_1_t18 * ___right, bool ___backwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.TriangleMeshNode::GetPortal(Pathfinding.GraphNode,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Boolean,System.Int32&,System.Int32&)
extern "C" bool TriangleMeshNode_GetPortal_m1109 (TriangleMeshNode_t232 * __this, GraphNode_t61 * ____other, List_1_t18 * ___left, List_1_t18 * ___right, bool ___backwards, int32_t* ___aIndex, int32_t* ___bIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.TriangleMeshNode::SerializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void TriangleMeshNode_SerializeNode_m1110 (TriangleMeshNode_t232 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.TriangleMeshNode::DeserializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void TriangleMeshNode_DeserializeNode_m1111 (TriangleMeshNode_t232 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
