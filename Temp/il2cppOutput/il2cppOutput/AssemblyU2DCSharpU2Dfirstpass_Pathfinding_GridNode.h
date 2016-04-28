#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GridGraph[]
struct GridGraphU5BU5D_t231;
// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t129;
// System.UInt32[]
struct UInt32U5BU5D_t130;

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_GridNodeBase.h"

// Pathfinding.GridNode
struct  GridNode_t185  : public GridNodeBase_t230
{
	// Pathfinding.GraphNode[] Pathfinding.GridNode::connections
	GraphNodeU5BU5D_t129* ___connections_25;
	// System.UInt32[] Pathfinding.GridNode::connectionCosts
	UInt32U5BU5D_t130* ___connectionCosts_26;
	// System.UInt16 Pathfinding.GridNode::gridFlags
	uint16_t ___gridFlags_27;
};
struct GridNode_t185_StaticFields{
	// Pathfinding.GridGraph[] Pathfinding.GridNode::_gridGraphs
	GridGraphU5BU5D_t231* ____gridGraphs_24;
};
