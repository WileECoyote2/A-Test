#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,System.Int32>
struct Dictionary_2_t263;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t19;
// System.Collections.Generic.Queue`1<Pathfinding.GraphNode>
struct Queue_1_t264;

#include "mscorlib_System_Object.h"

// Pathfinding.PathUtilities/<BFS>c__AnonStorey30
struct  U3CBFSU3Ec__AnonStorey30_t262  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,System.Int32> Pathfinding.PathUtilities/<BFS>c__AnonStorey30::map
	Dictionary_2_t263 * ___map_0;
	// System.Int32 Pathfinding.PathUtilities/<BFS>c__AnonStorey30::currentDist
	int32_t ___currentDist_1;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.PathUtilities/<BFS>c__AnonStorey30::result
	List_1_t19 * ___result_2;
	// System.Collections.Generic.Queue`1<Pathfinding.GraphNode> Pathfinding.PathUtilities/<BFS>c__AnonStorey30::que
	Queue_1_t264 * ___que_3;
	// System.Int32 Pathfinding.PathUtilities/<BFS>c__AnonStorey30::tagMask
	int32_t ___tagMask_4;
};
