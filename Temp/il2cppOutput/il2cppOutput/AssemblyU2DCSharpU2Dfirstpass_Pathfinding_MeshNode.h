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

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_GraphNode.h"

// Pathfinding.MeshNode
struct  MeshNode_t115  : public GraphNode_t61
{
	// Pathfinding.GraphNode[] Pathfinding.MeshNode::connections
	GraphNodeU5BU5D_t129* ___connections_14;
	// System.UInt32[] Pathfinding.MeshNode::connectionCosts
	UInt32U5BU5D_t130* ___connectionCosts_15;
};
