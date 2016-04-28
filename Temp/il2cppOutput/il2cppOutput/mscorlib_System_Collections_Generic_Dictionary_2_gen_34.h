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
// Pathfinding.Int2[]
struct Int2U5BU5D_t2681;
// System.Object[]
struct ObjectU5BU5D_t408;
// System.Collections.Generic.IEqualityComparer`1<Pathfinding.Int2>
struct IEqualityComparer_1_t2684;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int2,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2686;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>
struct  Dictionary_2_t2685  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>::table
	Int32U5BU5D_t16* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>::linkSlots
	LinkU5BU5D_t2523* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>::keySlots
	Int2U5BU5D_t2681* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>::valueSlots
	ObjectU5BU5D_t408* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>::serialization_info
	SerializationInfo_t845 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t2685_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<Pathfinding.Int2,System.Object>::<>f__am$cacheB
	Transform_1_t2686 * ___U3CU3Ef__amU24cacheB_15;
};
