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
// Pathfinding.NodeLink3[]
struct NodeLink3U5BU5D_t2545;
// System.Collections.Generic.IEqualityComparer`1<Pathfinding.GraphNode>
struct IEqualityComparer_1_t2526;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.GraphNode,Pathfinding.NodeLink3,System.Collections.DictionaryEntry>
struct Transform_1_t2546;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3>
struct  Dictionary_2_t120  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3>::table
	Int32U5BU5D_t16* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3>::linkSlots
	LinkU5BU5D_t2523* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3>::keySlots
	GraphNodeU5BU5D_t129* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3>::valueSlots
	NodeLink3U5BU5D_t2545* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3>::serialization_info
	SerializationInfo_t845 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t120_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3>::<>f__am$cacheB
	Transform_1_t2546 * ___U3CU3Ef__amU24cacheB_15;
};
