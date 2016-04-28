#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct List_1_t2461;
// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct HashSet_1_t2462;

#include "mscorlib_System_Object.h"

// Pathfinding.Util.ListPool`1<UnityEngine.Vector3>
struct  ListPool_1_t413  : public Object_t
{
};
struct ListPool_1_t413_StaticFields{
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<T>> Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::pool
	List_1_t2461 * ___pool_1;
	// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<T>> Pathfinding.Util.ListPool`1<UnityEngine.Vector3>::inPool
	HashSet_1_t2462 * ___inPool_2;
};
