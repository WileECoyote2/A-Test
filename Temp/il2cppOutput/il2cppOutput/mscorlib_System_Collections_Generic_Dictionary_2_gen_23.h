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
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>[]
struct Dictionary_2U5BU5D_t3147;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t2555;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.Collections.DictionaryEntry>
struct Transform_1_t3148;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct  Dictionary_2_t952  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::table
	Int32U5BU5D_t16* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::linkSlots
	LinkU5BU5D_t2523* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::keySlots
	TypeU5BU5D_t34* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::valueSlots
	Dictionary_2U5BU5D_t3147* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::serialization_info
	SerializationInfo_t845 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t952_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::<>f__am$cacheB
	Transform_1_t3148 * ___U3CU3Ef__amU24cacheB_15;
};
