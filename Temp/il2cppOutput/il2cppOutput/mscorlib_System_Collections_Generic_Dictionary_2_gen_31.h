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
// System.ComponentModel.WeakObjectWrapper[]
struct WeakObjectWrapperU5BU5D_t3348;
// System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>[]
struct LinkedList_1U5BU5D_t3341;
// System.Collections.Generic.IEqualityComparer`1<System.ComponentModel.WeakObjectWrapper>
struct IEqualityComparer_1_t3350;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.Collections.Generic.Dictionary`2/Transform`1<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>,System.Collections.DictionaryEntry>
struct Transform_1_t3349;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct  Dictionary_2_t1549  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>::table
	Int32U5BU5D_t16* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>::linkSlots
	LinkU5BU5D_t2523* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>::keySlots
	WeakObjectWrapperU5BU5D_t3348* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>::valueSlots
	LinkedList_1U5BU5D_t3341* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>::serialization_info
	SerializationInfo_t845 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1549_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>::<>f__am$cacheB
	Transform_1_t3349 * ___U3CU3Ef__amU24cacheB_15;
};
