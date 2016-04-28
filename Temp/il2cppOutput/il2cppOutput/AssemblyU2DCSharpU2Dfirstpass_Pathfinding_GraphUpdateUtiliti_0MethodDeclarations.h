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

// Pathfinding.GraphUpdateObject
struct GraphUpdateObject_t42;
// Pathfinding.GraphNode
struct GraphNode_t61;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t19;

#include "codegen/il2cpp-codegen.h"

// System.Boolean Pathfinding.GraphUpdateUtilities::UpdateGraphsNoBlock(Pathfinding.GraphUpdateObject,Pathfinding.GraphNode,Pathfinding.GraphNode,System.Boolean)
extern "C" bool GraphUpdateUtilities_UpdateGraphsNoBlock_m1236 (Object_t * __this /* static, unused */, GraphUpdateObject_t42 * ___guo, GraphNode_t61 * ___node1, GraphNode_t61 * ___node2, bool ___alwaysRevert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.GraphUpdateUtilities::UpdateGraphsNoBlock(Pathfinding.GraphUpdateObject,System.Collections.Generic.List`1<Pathfinding.GraphNode>,System.Boolean)
extern "C" bool GraphUpdateUtilities_UpdateGraphsNoBlock_m1237 (Object_t * __this /* static, unused */, GraphUpdateObject_t42 * ___guo, List_1_t19 * ___nodes, bool ___alwaysRevert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
