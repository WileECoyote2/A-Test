#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t129;
// System.UInt32[]
struct UInt32U5BU5D_t130;
// UnityEngine.GameObject
struct GameObject_t88;
// Pathfinding.PointNode
struct PointNode_t114;

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_GraphNode.h"

// Pathfinding.PointNode
struct  PointNode_t114  : public GraphNode_t61
{
	// Pathfinding.GraphNode[] Pathfinding.PointNode::connections
	GraphNodeU5BU5D_t129* ___connections_14;
	// System.UInt32[] Pathfinding.PointNode::connectionCosts
	UInt32U5BU5D_t130* ___connectionCosts_15;
	// UnityEngine.GameObject Pathfinding.PointNode::gameObject
	GameObject_t88 * ___gameObject_16;
	// Pathfinding.PointNode Pathfinding.PointNode::next
	PointNode_t114 * ___next_17;
};
