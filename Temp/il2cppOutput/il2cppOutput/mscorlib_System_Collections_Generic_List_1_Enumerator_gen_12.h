#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t1480;
// System.Collections.Generic.RBTree/Node
struct Node_t1476;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.RBTree/Node>
struct  Enumerator_t2617 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.RBTree/Node>::l
	List_1_t1480 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.RBTree/Node>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.RBTree/Node>::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.RBTree/Node>::current
	Node_t1476 * ___current_3;
};
