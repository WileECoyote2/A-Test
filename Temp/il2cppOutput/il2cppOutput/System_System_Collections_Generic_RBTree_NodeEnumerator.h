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
// System.Collections.Generic.Stack`1<System.Collections.Generic.RBTree/Node>
struct Stack_1_t1479;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.RBTree/NodeEnumerator
struct  NodeEnumerator_t1477 
{
	// System.Collections.Generic.RBTree System.Collections.Generic.RBTree/NodeEnumerator::tree
	RBTree_t1478 * ___tree_0;
	// System.UInt32 System.Collections.Generic.RBTree/NodeEnumerator::version
	uint32_t ___version_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree/NodeEnumerator::pennants
	Stack_1_t1479 * ___pennants_2;
};
