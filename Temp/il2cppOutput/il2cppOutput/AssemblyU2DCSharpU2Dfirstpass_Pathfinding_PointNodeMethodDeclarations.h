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

// Pathfinding.PointNode
struct PointNode_t114;
// AstarPath
struct AstarPath_t48;
// Pathfinding.GraphNodeDelegate
struct GraphNodeDelegate_t219;
// Pathfinding.Path
struct Path_t10;
// Pathfinding.PathNode
struct PathNode_t105;
// Pathfinding.PathHandler
struct PathHandler_t53;
// Pathfinding.GraphNode
struct GraphNode_t61;
// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t147;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"

// System.Void Pathfinding.PointNode::.ctor(AstarPath)
extern "C" void PointNode__ctor_m1080 (PointNode_t114 * __this, AstarPath_t48 * ___astar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::SetPosition(Pathfinding.Int3)
extern "C" void PointNode_SetPosition_m1081 (PointNode_t114 * __this, Int3_t111  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::GetConnections(Pathfinding.GraphNodeDelegate)
extern "C" void PointNode_GetConnections_m1082 (PointNode_t114 * __this, GraphNodeDelegate_t219 * ___del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::ClearConnections(System.Boolean)
extern "C" void PointNode_ClearConnections_m1083 (PointNode_t114 * __this, bool ___alsoReverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::UpdateRecursiveG(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C" void PointNode_UpdateRecursiveG_m1084 (PointNode_t114 * __this, Path_t10 * ___path, PathNode_t105 * ___pathNode, PathHandler_t53 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.PointNode::ContainsConnection(Pathfinding.GraphNode)
extern "C" bool PointNode_ContainsConnection_m1085 (PointNode_t114 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::AddConnection(Pathfinding.GraphNode,System.UInt32)
extern "C" void PointNode_AddConnection_m1086 (PointNode_t114 * __this, GraphNode_t61 * ___node, uint32_t ___cost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::RemoveConnection(Pathfinding.GraphNode)
extern "C" void PointNode_RemoveConnection_m1087 (PointNode_t114 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::Open(Pathfinding.Path,Pathfinding.PathNode,Pathfinding.PathHandler)
extern "C" void PointNode_Open_m1088 (PointNode_t114 * __this, Path_t10 * ___path, PathNode_t105 * ___pathNode, PathHandler_t53 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::SerializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void PointNode_SerializeNode_m1089 (PointNode_t114 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::DeserializeNode(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void PointNode_DeserializeNode_m1090 (PointNode_t114 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::SerializeReferences(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void PointNode_SerializeReferences_m1091 (PointNode_t114 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PointNode::DeserializeReferences(Pathfinding.Serialization.GraphSerializationContext)
extern "C" void PointNode_DeserializeReferences_m1092 (PointNode_t114 * __this, GraphSerializationContext_t147 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
