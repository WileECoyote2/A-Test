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
// System.Type[]
struct TypeU5BU5D_t34;
// System.Collections.Generic.Stack`1<Pathfinding.Path>[]
struct Stack_1U5BU5D_t2553;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t2555;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>,System.Collections.DictionaryEntry>
struct Transform_1_t2554;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>
struct  Dictionary_2_t122  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::table
	Int32U5BU5D_t16* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::linkSlots
	LinkU5BU5D_t2523* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::keySlots
	TypeU5BU5D_t34* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::valueSlots
	Stack_1U5BU5D_t2553* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::serialization_info
	SerializationInfo_t845 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t122_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::<>f__am$cacheB
	Transform_1_t2554 * ___U3CU3Ef__amU24cacheB_15;
};
