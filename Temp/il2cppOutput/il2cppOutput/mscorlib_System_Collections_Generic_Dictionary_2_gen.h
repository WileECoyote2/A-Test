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
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2523;
// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t129;
// Pathfinding.NodeLink2[]
struct NodeLink2U5BU5D_t2524;
// System.Collections.Generic.IEqualityComparer`1<Pathfinding.GraphNode>
struct IEqualityComparer_1_t2526;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.GraphNode,Pathfinding.NodeLink2,System.Collections.DictionaryEntry>
struct Transform_1_t2525;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>
struct  Dictionary_2_t116  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>::table
	Int32U5BU5D_t16* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>::linkSlots
	LinkU5BU5D_t2523* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>::keySlots
	GraphNodeU5BU5D_t129* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>::valueSlots
	NodeLink2U5BU5D_t2524* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>::serialization_info
	SerializationInfo_t845 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t116_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>::<>f__am$cacheB
	Transform_1_t2525 * ___U3CU3Ef__amU24cacheB_15;
};
