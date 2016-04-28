#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GraphNode
struct GraphNode_t61;
// Pathfinding.PathNode
struct PathNode_t105;

#include "mscorlib_System_Object.h"

// Pathfinding.PathNode
struct  PathNode_t105  : public Object_t
{
	// Pathfinding.GraphNode Pathfinding.PathNode::node
	GraphNode_t61 * ___node_5;
	// Pathfinding.PathNode Pathfinding.PathNode::parent
	PathNode_t105 * ___parent_6;
	// System.UInt16 Pathfinding.PathNode::pathID
	uint16_t ___pathID_7;
	// System.UInt32 Pathfinding.PathNode::flags
	uint32_t ___flags_8;
	// System.UInt32 Pathfinding.PathNode::g
	uint32_t ___g_9;
	// System.UInt32 Pathfinding.PathNode::h
	uint32_t ___h_10;
};
