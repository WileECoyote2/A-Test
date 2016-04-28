#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Single>>
struct List_1_t2784;
// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<System.Single>>
struct HashSet_1_t2785;

#include "mscorlib_System_Object.h"

// Pathfinding.Util.ListPool`1<System.Single>
struct  ListPool_1_t479  : public Object_t
{
};
struct ListPool_1_t479_StaticFields{
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<T>> Pathfinding.Util.ListPool`1<System.Single>::pool
	List_1_t2784 * ___pool_1;
	// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<T>> Pathfinding.Util.ListPool`1<System.Single>::inPool
	HashSet_1_t2785 * ___inPool_2;
};
