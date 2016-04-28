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

// Pathfinding.MeshNode
struct MeshNode_t115;
// AstarPath
struct AstarPath_t48;
// Pathfinding.GraphNodeDelegate
struct GraphNodeDelegate_t219;
// System.Collections.Generic.Stack`1<Pathfinding.GraphNode>
struct Stack_1_t55;
// Pathfinding.GraphNode
struct GraphNode_t61;
// Pathfinding.Path
struct Path_t10;
// Pathfinding.PathNode
struct PathNode_t105;
// Pathfinding.PathHandler
struct PathHandler_t53;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t147;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"

// System.Void Pathfinding.MeshNode::.ctor(AstarPath)
extern "C" void MeshNode__ctor_m603 (MeshNode_t115 * __this, AstarPath_t48 * ___astar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::ClearConnections(System.Boolean)
extern "C" void MeshNode_ClearConnections_m604 (MeshNode_t115 * __this, bool ___alsoReverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::GetConnections(Pathfinding.GraphNodeDelegate)
extern "C" void MeshNode_GetConnections_m605 (MeshNode_t115 * __this, GraphNodeDelegate_t219 * ___del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::FloodFill(System.Collections.Generic.Stack`1<Pathfinding.GraphNode>,System.UInt32)
extern "C" void MeshNode_FloodFill_m606 (MeshNode_t115 * __this, Stack_1_t55 * ___stack, uint32_t ___region, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.MeshNode::ContainsConnection(Pathfinding.GraphNode)
extern "C" bool MeshNode_ContainsConnection_m607 (MeshNode_t115 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::UpdateRecursiveG(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C" void MeshNode_UpdateRecursiveG_m608 (MeshNode_t115 * __this, Path_t10 * ___path, PathNode_t105 * ___pathNode, PathHandler_t53 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::AddConnection(Pathfinding.GraphNode,System.UInt32)
extern "C" void MeshNode_AddConnection_m609 (MeshNode_t115 * __this, GraphNode_t61 * ___node, uint32_t ___cost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::RemoveConnection(Pathfinding.GraphNode)
extern "C" void MeshNode_RemoveConnection_m610 (MeshNode_t115 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.MeshNode::ContainsPoint(Pathfinding.Int3)
extern "C" bool MeshNode_ContainsPoint_m611 (MeshNode_t115 * __this, Int3_t111  ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::SerializeReferences(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void MeshNode_SerializeReferences_m612 (MeshNode_t115 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.MeshNode::DeserializeReferences(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void MeshNode_DeserializeReferences_m613 (MeshNode_t115 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
