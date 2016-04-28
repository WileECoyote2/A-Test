#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.BinaryHeapM/Tuple[]
struct TupleU5BU5D_t107;

#include "mscorlib_System_Object.h"

// Pathfinding.BinaryHeapM
struct  BinaryHeapM_t106  : public Object_t
{
	// System.Int32 Pathfinding.BinaryHeapM::numberOfItems
	int32_t ___numberOfItems_2;
	// System.Single Pathfinding.BinaryHeapM::growthFactor
	float ___growthFactor_3;
	// Pathfinding.BinaryHeapM/Tuple[] Pathfinding.BinaryHeapM::binaryHeap
	TupleU5BU5D_t107* ___binaryHeap_4;
};
