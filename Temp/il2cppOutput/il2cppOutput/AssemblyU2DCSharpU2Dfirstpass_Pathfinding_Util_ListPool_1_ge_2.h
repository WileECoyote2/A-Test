#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Pathfinding.Int3>>
struct List_1_t2666;
// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<Pathfinding.Int3>>
struct HashSet_1_t2667;

#include "mscorlib_System_Object.h"

// Pathfinding.Util.ListPool`1<Pathfinding.Int3>
struct  ListPool_1_t453  : public Object_t
{
};
struct ListPool_1_t453_StaticFields{
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<T>> Pathfinding.Util.ListPool`1<Pathfinding.Int3>::pool
	List_1_t2666 * ___pool_1;
	// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<T>> Pathfinding.Util.ListPool`1<Pathfinding.Int3>::inPool
	HashSet_1_t2667 * ___inPool_2;
};
