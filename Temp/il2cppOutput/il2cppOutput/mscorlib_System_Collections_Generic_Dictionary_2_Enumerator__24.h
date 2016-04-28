#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2974;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct  Enumerator_t2981 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::dictionary
	Dictionary_2_t2974 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::current
	KeyValuePair_2_t2976  ___current_3;
};
