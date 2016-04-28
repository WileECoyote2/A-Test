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
// System.Int32[]
struct Int32U5BU5D_t16;

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Path.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"

// Pathfinding.ABPath
struct  ABPath_t6  : public Path_t10
{
	// System.Boolean Pathfinding.ABPath::recalcStartEndCosts
	bool ___recalcStartEndCosts_30;
	// Pathfinding.GraphNode Pathfinding.ABPath::startNode
	GraphNode_t61 * ___startNode_31;
	// Pathfinding.GraphNode Pathfinding.ABPath::endNode
	GraphNode_t61 * ___endNode_32;
	// Pathfinding.GraphNode Pathfinding.ABPath::startHint
	GraphNode_t61 * ___startHint_33;
	// Pathfinding.GraphNode Pathfinding.ABPath::endHint
	GraphNode_t61 * ___endHint_34;
	// UnityEngine.Vector3 Pathfinding.ABPath::originalStartPoint
	Vector3_t7  ___originalStartPoint_35;
	// UnityEngine.Vector3 Pathfinding.ABPath::originalEndPoint
	Vector3_t7  ___originalEndPoint_36;
	// UnityEngine.Vector3 Pathfinding.ABPath::startPoint
	Vector3_t7  ___startPoint_37;
	// UnityEngine.Vector3 Pathfinding.ABPath::endPoint
	Vector3_t7  ___endPoint_38;
	// Pathfinding.Int3 Pathfinding.ABPath::startIntPoint
	Int3_t111  ___startIntPoint_39;
	// System.Boolean Pathfinding.ABPath::calculatePartial
	bool ___calculatePartial_40;
	// Pathfinding.PathNode Pathfinding.ABPath::partialBestTarget
	PathNode_t105 * ___partialBestTarget_41;
	// System.Int32[] Pathfinding.ABPath::endNodeCosts
	Int32U5BU5D_t16* ___endNodeCosts_42;
};
