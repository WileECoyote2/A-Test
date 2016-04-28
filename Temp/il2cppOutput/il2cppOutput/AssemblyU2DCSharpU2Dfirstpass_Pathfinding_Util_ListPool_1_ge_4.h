#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>
struct List_1_t2500;
// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<System.Object>>
struct HashSet_1_t2501;

#include "mscorlib_System_Object.h"

// Pathfinding.Util.ListPool`1<System.Object>
struct  ListPool_1_t2499  : public Object_t
{
};
struct ListPool_1_t2499_StaticFields{
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<T>> Pathfinding.Util.ListPool`1<System.Object>::pool
	List_1_t2500 * ___pool_1;
	// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<T>> Pathfinding.Util.ListPool`1<System.Object>::inPool
	HashSet_1_t2501 * ___inPool_2;
};
