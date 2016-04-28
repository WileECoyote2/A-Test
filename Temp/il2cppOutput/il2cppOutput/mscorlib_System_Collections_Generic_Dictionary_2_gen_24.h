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
// System.String[]
struct StringU5BU5D_t63;
// Pathfinding.Ionic.Zip.ZipEntry[]
struct ZipEntryU5BU5D_t3154;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2595;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Collections.DictionaryEntry>
struct Transform_1_t3155;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>
struct  Dictionary_2_t1010  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>::table
	Int32U5BU5D_t16* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>::linkSlots
	LinkU5BU5D_t2523* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>::keySlots
	StringU5BU5D_t63* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>::valueSlots
	ZipEntryU5BU5D_t3154* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>::serialization_info
	SerializationInfo_t845 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1010_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>::<>f__am$cacheB
	Transform_1_t3155 * ___U3CU3Ef__amU24cacheB_15;
};
