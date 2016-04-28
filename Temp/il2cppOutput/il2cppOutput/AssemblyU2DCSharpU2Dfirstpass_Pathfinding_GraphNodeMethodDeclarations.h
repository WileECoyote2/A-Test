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
// AstarPath
struct AstarPath_t48;
// Pathfinding.Path
struct Path_t10;
// Pathfinding.PathNode
struct PathNode_t105;
// Pathfinding.PathHandler
struct PathHandler_t53;
// System.Collections.Generic.Stack`1<Pathfinding.GraphNode>
struct Stack_1_t55;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t18;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t147;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.GraphNode::.ctor(AstarPath)
extern "C" void GraphNode__ctor_m577 (GraphNode_t61 * __this, AstarPath_t48 * ___astar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::Destroy()
extern "C" void GraphNode_Destroy_m578 (GraphNode_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphNode::get_Destroyed()
extern "C" bool GraphNode_get_Destroyed_m579 (GraphNode_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.GraphNode::get_NodeIndex()
extern "C" int32_t GraphNode_get_NodeIndex_m580 (GraphNode_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.GraphNode::get_Flags()
extern "C" uint32_t GraphNode_get_Flags_m581 (GraphNode_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::set_Flags(System.UInt32)
extern "C" void GraphNode_set_Flags_m582 (GraphNode_t61 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.GraphNode::get_Penalty()
extern "C" uint32_t GraphNode_get_Penalty_m583 (GraphNode_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::set_Penalty(System.UInt32)
extern "C" void GraphNode_set_Penalty_m584 (GraphNode_t61 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphNode::get_Walkable()
extern "C" bool GraphNode_get_Walkable_m585 (GraphNode_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::set_Walkable(System.Boolean)
extern "C" void GraphNode_set_Walkable_m586 (GraphNode_t61 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.GraphNode::get_Area()
extern "C" uint32_t GraphNode_get_Area_m587 (GraphNode_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::set_Area(System.UInt32)
extern "C" void GraphNode_set_Area_m588 (GraphNode_t61 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.GraphNode::get_GraphIndex()
extern "C" uint32_t GraphNode_get_GraphIndex_m589 (GraphNode_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::set_GraphIndex(System.UInt32)
extern "C" void GraphNode_set_GraphIndex_m590 (GraphNode_t61 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.GraphNode::get_Tag()
extern "C" uint32_t GraphNode_get_Tag_m591 (GraphNode_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::set_Tag(System.UInt32)
extern "C" void GraphNode_set_Tag_m592 (GraphNode_t61 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::UpdateG(Pathfinding.Path,Pathfinding.PathNode)
extern "C" void GraphNode_UpdateG_m593 (GraphNode_t61 * __this, Path_t10 * ___path, PathNode_t105 * ___pathNode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::UpdateRecursiveG(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C" void GraphNode_UpdateRecursiveG_m594 (GraphNode_t61 * __this, Path_t10 * ___path, PathNode_t105 * ___pathNode, PathHandler_t53 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::FloodFill(System.Collections.Generic.Stack`1<Pathfinding.GraphNode>,System.UInt32)
extern "C" void GraphNode_FloodFill_m595 (GraphNode_t61 * __this, Stack_1_t55 * ___stack, uint32_t ___region, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphNode::ContainsConnection(Pathfinding.GraphNode)
extern "C" bool GraphNode_ContainsConnection_m596 (GraphNode_t61 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::RecalculateConnectionCosts()
extern "C" void GraphNode_RecalculateConnectionCosts_m597 (GraphNode_t61 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphNode::GetPortal(Pathfinding.GraphNode,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Boolean)
extern "C" bool GraphNode_GetPortal_m598 (GraphNode_t61 * __this, GraphNode_t61 * ___other, List_1_t18 * ___left, List_1_t18 * ___right, bool ___backwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::SerializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void GraphNode_SerializeNode_m599 (GraphNode_t61 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::DeserializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void GraphNode_DeserializeNode_m600 (GraphNode_t61 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::SerializeReferences(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void GraphNode_SerializeReferences_m601 (GraphNode_t61 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.GraphNode::DeserializeReferences(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void GraphNode_DeserializeReferences_m602 (GraphNode_t61 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
