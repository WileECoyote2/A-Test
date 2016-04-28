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
// System.Object
struct Object_t;
// System.Random
struct Random_t194;

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_MonoModifier.h"

// Pathfinding.AlternativePath
struct  AlternativePath_t240  : public MonoModifier_t241
{
	// System.Int32 Pathfinding.AlternativePath::penalty
	int32_t ___penalty_3;
	// System.Int32 Pathfinding.AlternativePath::randomStep
	int32_t ___randomStep_4;
	// Pathfinding.GraphNode[] Pathfinding.AlternativePath::prevNodes
	GraphNodeU5BU5D_t129* ___prevNodes_5;
	// System.Int32 Pathfinding.AlternativePath::prevSeed
	int32_t ___prevSeed_6;
	// System.Int32 Pathfinding.AlternativePath::prevPenalty
	int32_t ___prevPenalty_7;
	// System.Boolean Pathfinding.AlternativePath::waitingForApply
	bool ___waitingForApply_8;
	// System.Object Pathfinding.AlternativePath::lockObject
	Object_t * ___lockObject_9;
	// System.Random Pathfinding.AlternativePath::rnd
	Random_t194 * ___rnd_10;
	// System.Random Pathfinding.AlternativePath::seedGenerator
	Random_t194 * ___seedGenerator_11;
	// System.Boolean Pathfinding.AlternativePath::destroyed
	bool ___destroyed_12;
	// Pathfinding.GraphNode[] Pathfinding.AlternativePath::toBeApplied
	GraphNodeU5BU5D_t129* ___toBeApplied_13;
};
