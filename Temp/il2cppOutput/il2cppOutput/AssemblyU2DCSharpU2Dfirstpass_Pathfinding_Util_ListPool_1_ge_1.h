#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.UInt32>>
struct List_1_t2655;
// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<System.UInt32>>
struct HashSet_1_t2656;

#include "mscorlib_System_Object.h"

// Pathfinding.Util.ListPool`1<System.UInt32>
struct  ListPool_1_t452  : public Object_t
{
};
struct ListPool_1_t452_StaticFields{
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<T>> Pathfinding.Util.ListPool`1<System.UInt32>::pool
	List_1_t2655 * ___pool_1;
	// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<T>> Pathfinding.Util.ListPool`1<System.UInt32>::inPool
	HashSet_1_t2656 * ___inPool_2;
};
