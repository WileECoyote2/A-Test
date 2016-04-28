#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>
struct Dictionary_2_t122;
// System.Collections.Generic.Dictionary`2<System.Type,System.Int32>
struct Dictionary_2_t123;

#include "mscorlib_System_Object.h"

// Pathfinding.PathPool
struct  PathPool_t121  : public Object_t
{
};
struct PathPool_t121_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>> Pathfinding.PathPool::pool
	Dictionary_2_t122 * ___pool_0;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Int32> Pathfinding.PathPool::totalCreated
	Dictionary_2_t123 * ___totalCreated_1;
};
