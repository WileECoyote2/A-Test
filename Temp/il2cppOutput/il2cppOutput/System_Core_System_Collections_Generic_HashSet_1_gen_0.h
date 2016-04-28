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
// System.Collections.Generic.HashSet`1/Link<System.Collections.Generic.List`1<UnityEngine.Vector3>>[]
struct LinkU5BU5D_t2469;
// System.Collections.Generic.List`1<UnityEngine.Vector3>[]
struct List_1U5BU5D_t2463;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct IEqualityComparer_1_t2471;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct  HashSet_1_t2462  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>::table
	Int32U5BU5D_t16* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>::links
	LinkU5BU5D_t2469* ___links_1;
	// T[] System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>::slots
	List_1U5BU5D_t2463* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>::si
	SerializationInfo_t845 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>::generation
	int32_t ___generation_9;
};
