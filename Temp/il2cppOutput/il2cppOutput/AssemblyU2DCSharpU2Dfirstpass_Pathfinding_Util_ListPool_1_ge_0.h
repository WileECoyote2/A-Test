#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Pathfinding.GraphNode>>
struct List_1_t2497;
// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<Pathfinding.GraphNode>>
struct HashSet_1_t2498;

#include "mscorlib_System_Object.h"

// Pathfinding.Util.ListPool`1<Pathfinding.GraphNode>
struct  ListPool_1_t421  : public Object_t
{
};
struct ListPool_1_t421_StaticFields{
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<T>> Pathfinding.Util.ListPool`1<Pathfinding.GraphNode>::pool
	List_1_t2497 * ___pool_1;
	// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<T>> Pathfinding.Util.ListPool`1<Pathfinding.GraphNode>::inPool
	HashSet_1_t2498 * ___inPool_2;
};
