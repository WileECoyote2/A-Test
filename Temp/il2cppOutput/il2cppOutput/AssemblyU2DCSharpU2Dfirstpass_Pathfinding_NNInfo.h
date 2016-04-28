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

#include "mscorlib_System_ValueType.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Pathfinding.NNInfo
struct  NNInfo_t169 
{
	// Pathfinding.GraphNode Pathfinding.NNInfo::node
	GraphNode_t61 * ___node_0;
	// Pathfinding.GraphNode Pathfinding.NNInfo::constrainedNode
	GraphNode_t61 * ___constrainedNode_1;
	// UnityEngine.Vector3 Pathfinding.NNInfo::clampedPosition
	Vector3_t7  ___clampedPosition_2;
	// UnityEngine.Vector3 Pathfinding.NNInfo::constClampedPosition
	Vector3_t7  ___constClampedPosition_3;
};
