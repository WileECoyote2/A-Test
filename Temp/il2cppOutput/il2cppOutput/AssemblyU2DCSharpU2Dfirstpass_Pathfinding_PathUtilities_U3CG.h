#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<Pathfinding.GraphNode>
struct HashSet_1_t261;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t19;
// System.Collections.Generic.Stack`1<Pathfinding.GraphNode>
struct Stack_1_t55;

#include "mscorlib_System_Object.h"

// Pathfinding.PathUtilities/<GetReachableNodes>c__AnonStorey2F
struct  U3CGetReachableNodesU3Ec__AnonStorey2F_t260  : public Object_t
{
	// System.Collections.Generic.HashSet`1<Pathfinding.GraphNode> Pathfinding.PathUtilities/<GetReachableNodes>c__AnonStorey2F::map
	HashSet_1_t261 * ___map_0;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.PathUtilities/<GetReachableNodes>c__AnonStorey2F::list
	List_1_t19 * ___list_1;
	// System.Collections.Generic.Stack`1<Pathfinding.GraphNode> Pathfinding.PathUtilities/<GetReachableNodes>c__AnonStorey2F::stack
	Stack_1_t55 * ___stack_2;
	// System.Int32 Pathfinding.PathUtilities/<GetReachableNodes>c__AnonStorey2F::tagMask
	int32_t ___tagMask_3;
};
