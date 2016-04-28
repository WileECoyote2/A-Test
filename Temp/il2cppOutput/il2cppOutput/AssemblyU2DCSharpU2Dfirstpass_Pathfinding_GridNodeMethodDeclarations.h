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

// Pathfinding.GridNode
struct GridNode_t185;
// AstarPath
struct AstarPath_t48;
// Pathfinding.GridGraph
struct GridGraph_t32;
// Pathfinding.GraphNodeDelegate
struct GraphNodeDelegate_t219;
// Pathfinding.GraphNode
struct GraphNode_t61;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t18;
// System.Collections.Generic.Stack`1<Pathfinding.GraphNode>
struct Stack_1_t55;
// Pathfinding.Path
struct Path_t10;
// Pathfinding.PathNode
struct PathNode_t105;
// Pathfinding.PathHandler
struct PathHandler_t53;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Pathfinding.GridNode::.ctor(AstarPath)
extern "C" void GridNode__ctor_m1053 (GridNode_t185 * __this, AstarPath_t48 * ___astar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::.cctor()
extern "C" void GridNode__cctor_m1054 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GridGraph Pathfinding.GridNode::GetGridGraph(System.UInt32)
extern "C" GridGraph_t32 * GridNode_GetGridGraph_m1055 (Object_t * __this /* static, unused */, uint32_t ___graphIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::SetGridGraph(System.Int32,Pathfinding.GridGraph)
extern "C" void GridNode_SetGridGraph_m1056 (Object_t * __this /* static, unused */, int32_t ___graphIndex, GridGraph_t32 * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Pathfinding.GridNode::get_InternalGridFlags()
extern "C" uint16_t GridNode_get_InternalGridFlags_m1057 (GridNode_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::set_InternalGridFlags(System.UInt16)
extern "C" void GridNode_set_InternalGridFlags_m1058 (GridNode_t185 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridNode::GetConnectionInternal(System.Int32)
extern "C" bool GridNode_GetConnectionInternal_m1059 (GridNode_t185 * __this, int32_t ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::SetConnectionInternal(System.Int32,System.Boolean)
extern "C" void GridNode_SetConnectionInternal_m1060 (GridNode_t185 * __this, int32_t ___dir, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::SetAllConnectionInternal(System.Int32)
extern "C" void GridNode_SetAllConnectionInternal_m1061 (GridNode_t185 * __this, int32_t ___connections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::ResetConnectionsInternal()
extern "C" void GridNode_ResetConnectionsInternal_m1062 (GridNode_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridNode::get_EdgeNode()
extern "C" bool GridNode_get_EdgeNode_m1063 (GridNode_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::set_EdgeNode(System.Boolean)
extern "C" void GridNode_set_EdgeNode_m1064 (GridNode_t185 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridNode::get_WalkableErosion()
extern "C" bool GridNode_get_WalkableErosion_m1065 (GridNode_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::set_WalkableErosion(System.Boolean)
extern "C" void GridNode_set_WalkableErosion_m1066 (GridNode_t185 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridNode::get_TmpWalkable()
extern "C" bool GridNode_get_TmpWalkable_m1067 (GridNode_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::set_TmpWalkable(System.Boolean)
extern "C" void GridNode_set_TmpWalkable_m1068 (GridNode_t185 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::ClearConnections(System.Boolean)
extern "C" void GridNode_ClearConnections_m1069 (GridNode_t185 * __this, bool ___alsoReverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::GetConnections(Pathfinding.GraphNodeDelegate)
extern "C" void GridNode_GetConnections_m1070 (GridNode_t185 * __this, GraphNodeDelegate_t219 * ___del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.GridNode::ClosestPointOnNode(UnityEngine.Vector3)
extern "C" Vector3_t7  GridNode_ClosestPointOnNode_m1071 (GridNode_t185 * __this, Vector3_t7  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GridNode::GetPortal(Pathfinding.GraphNode,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Boolean)
extern "C" bool GridNode_GetPortal_m1072 (GridNode_t185 * __this, GraphNode_t61 * ___other, List_1_t18 * ___left, List_1_t18 * ___right, bool ___backwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::FloodFill(System.Collections.Generic.Stack`1<Pathfinding.GraphNode>,System.UInt32)
extern "C" void GridNode_FloodFill_m1073 (GridNode_t185 * __this, Stack_1_t55 * ___stack, uint32_t ___region, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::AddConnection(Pathfinding.GraphNode,System.UInt32)
extern "C" void GridNode_AddConnection_m1074 (GridNode_t185 * __this, GraphNode_t61 * ___node, uint32_t ___cost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::RemoveConnection(Pathfinding.GraphNode)
extern "C" void GridNode_RemoveConnection_m1075 (GridNode_t185 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::UpdateRecursiveG(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C" void GridNode_UpdateRecursiveG_m1076 (GridNode_t185 * __this, Path_t10 * ___path, PathNode_t105 * ___pathNode, PathHandler_t53 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::Open(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C" void GridNode_Open_m1077 (GridNode_t185 * __this, Path_t10 * ___path, PathNode_t105 * ___pathNode, PathHandler_t53 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::SerializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void GridNode_SerializeNode_m1078 (GridNode_t185 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GridNode::DeserializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void GridNode_DeserializeNode_m1079 (GridNode_t185 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
