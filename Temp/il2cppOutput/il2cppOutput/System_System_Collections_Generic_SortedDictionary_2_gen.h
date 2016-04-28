#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.RBTree
struct RBTree_t1478;
// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,System.Int32>
struct NodeHelper_t2607;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Int32>
struct  SortedDictionary_2_t437  : public Object_t
{
	// System.Collections.Generic.RBTree System.Collections.Generic.SortedDictionary`2<System.Int32,System.Int32>::tree
	RBTree_t1478 * ___tree_0;
	// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2<System.Int32,System.Int32>::hlp
	NodeHelper_t2607 * ___hlp_1;
};
