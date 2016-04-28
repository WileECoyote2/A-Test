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

// Pathfinding.NodeLink3Node
struct NodeLink3Node_t118;
// AstarPath
struct AstarPath_t48;
// Pathfinding.GraphNode
struct GraphNode_t61;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t18;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.NodeLink3Node::.ctor(AstarPath)
extern "C" void NodeLink3Node__ctor_m524 (NodeLink3Node_t118 * __this, AstarPath_t48 * ___active, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.NodeLink3Node::GetPortal(Pathfinding.GraphNode,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Boolean)
extern "C" bool NodeLink3Node_GetPortal_m525 (NodeLink3Node_t118 * __this, GraphNode_t61 * ___other, List_1_t18 * ___left, List_1_t18 * ___right, bool ___backwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.NodeLink3Node::GetOther(Pathfinding.GraphNode)
extern "C" GraphNode_t61 * NodeLink3Node_GetOther_m526 (NodeLink3Node_t118 * __this, GraphNode_t61 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.NodeLink3Node::GetOtherInternal(Pathfinding.GraphNode)
extern "C" GraphNode_t61 * NodeLink3Node_GetOtherInternal_m527 (NodeLink3Node_t118 * __this, GraphNode_t61 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
