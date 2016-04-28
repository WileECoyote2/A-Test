#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<Pathfinding.GraphNode>
struct Queue_1_t264;
// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,System.Int32>
struct Dictionary_2_t263;

#include "mscorlib_System_Object.h"

// Pathfinding.PathUtilities
struct  PathUtilities_t265  : public Object_t
{
};
struct PathUtilities_t265_StaticFields{
	// System.Collections.Generic.Queue`1<Pathfinding.GraphNode> Pathfinding.PathUtilities::BFSQueue
	Queue_1_t264 * ___BFSQueue_0;
	// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,System.Int32> Pathfinding.PathUtilities::BFSMap
	Dictionary_2_t263 * ___BFSMap_1;
};
