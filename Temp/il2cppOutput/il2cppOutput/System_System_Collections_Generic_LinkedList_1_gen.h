#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.ComponentModel.TypeDescriptionProvider>
struct LinkedListNode_1_t1718;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>
struct  LinkedList_1_t1699  : public Object_t
{
	// System.UInt32 System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>::count
	uint32_t ___count_0;
	// System.UInt32 System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>::version
	uint32_t ___version_1;
	// System.Object System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>::syncRoot
	Object_t * ___syncRoot_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>::first
	LinkedListNode_1_t1718 * ___first_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>::si
	SerializationInfo_t845 * ___si_4;
};
