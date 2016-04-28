#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t4;
// Pathfinding.GridGraph
struct GridGraph_t32;
// Pathfinding.GridNode[]
struct GridNodeU5BU5D_t184;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ProceduralGridMover
struct  ProceduralGridMover_t186  : public MonoBehaviour_t3
{
	// System.Single ProceduralGridMover::updateDistance
	float ___updateDistance_2;
	// UnityEngine.Transform ProceduralGridMover::target
	Transform_t4 * ___target_3;
	// System.Boolean ProceduralGridMover::floodFill
	bool ___floodFill_4;
	// Pathfinding.GridGraph ProceduralGridMover::graph
	GridGraph_t32 * ___graph_5;
	// Pathfinding.GridNode[] ProceduralGridMover::tmp
	GridNodeU5BU5D_t184* ___tmp_6;
	// System.Boolean ProceduralGridMover::<updatingGraph>k__BackingField
	bool ___U3CupdatingGraphU3Ek__BackingField_7;
};
