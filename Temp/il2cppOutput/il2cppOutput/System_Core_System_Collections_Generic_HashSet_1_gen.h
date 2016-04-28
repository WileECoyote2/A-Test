#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t16;
// System.Collections.Generic.HashSet`1/Link<Pathfinding.GraphNode>[]
struct LinkU5BU5D_t2770;
// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t129;
// System.Collections.Generic.IEqualityComparer`1<Pathfinding.GraphNode>
struct IEqualityComparer_1_t2526;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.HashSet`1<Pathfinding.GraphNode>
struct  HashSet_1_t261  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<Pathfinding.GraphNode>::table
	Int32U5BU5D_t16* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<Pathfinding.GraphNode>::links
	LinkU5BU5D_t2770* ___links_1;
	// T[] System.Collections.Generic.HashSet`1<Pathfinding.GraphNode>::slots
	GraphNodeU5BU5D_t129* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1<Pathfinding.GraphNode>::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1<Pathfinding.GraphNode>::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1<Pathfinding.GraphNode>::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1<Pathfinding.GraphNode>::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<Pathfinding.GraphNode>::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<Pathfinding.GraphNode>::si
	SerializationInfo_t845 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1<Pathfinding.GraphNode>::generation
	int32_t ___generation_9;
};
