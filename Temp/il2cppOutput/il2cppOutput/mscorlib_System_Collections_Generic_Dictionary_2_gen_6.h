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
// ProceduralWorld/ProceduralTile[]
struct ProceduralTileU5BU5D_t2682;
// System.Collections.Generic.IEqualityComparer`1<Pathfinding.Int2>
struct IEqualityComparer_1_t2684;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.Dictionary`2/Transform`1<Pathfinding.Int2,ProceduralWorld/ProceduralTile,System.Collections.DictionaryEntry>
struct Transform_1_t2683;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>
struct  Dictionary_2_t199  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>::table
	Int32U5BU5D_t16* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>::linkSlots
	LinkU5BU5D_t2523* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>::keySlots
	Int2U5BU5D_t2681* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>::valueSlots
	ProceduralTileU5BU5D_t2682* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>::serialization_info
	SerializationInfo_t845 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t199_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>::<>f__am$cacheB
	Transform_1_t2683 * ___U3CU3Ef__amU24cacheB_15;
};
