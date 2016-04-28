#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>
struct Dictionary_2_t122;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>
struct  Enumerator_t2561 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::dictionary
	Dictionary_2_t122 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.Stack`1<Pathfinding.Path>>::current
	KeyValuePair_2_t2558  ___current_3;
};
