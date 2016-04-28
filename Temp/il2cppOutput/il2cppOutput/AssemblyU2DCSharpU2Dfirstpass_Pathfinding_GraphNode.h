#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"

// Pathfinding.GraphNode
struct  GraphNode_t61  : public Object_t
{
	// System.Int32 Pathfinding.GraphNode::nodeIndex
	int32_t ___nodeIndex_10;
	// System.UInt32 Pathfinding.GraphNode::flags
	uint32_t ___flags_11;
	// System.UInt32 Pathfinding.GraphNode::penalty
	uint32_t ___penalty_12;
	// Pathfinding.Int3 Pathfinding.GraphNode::position
	Int3_t111  ___position_13;
};
