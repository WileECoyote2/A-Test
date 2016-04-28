#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>
struct Dictionary_2_t116;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.GraphNode,Pathfinding.NodeLink2>
struct  Enumerator_t2544 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.GraphNode,Pathfinding.NodeLink2>::dictionary
	Dictionary_2_t116 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.GraphNode,Pathfinding.NodeLink2>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.GraphNode,Pathfinding.NodeLink2>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Pathfinding.GraphNode,Pathfinding.NodeLink2>::current
	KeyValuePair_2_t2541  ___current_3;
};
