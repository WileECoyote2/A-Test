#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.IUpdatableGraph
struct IUpdatableGraph_t43;
// Pathfinding.GraphUpdateObject
struct GraphUpdateObject_t42;

#include "mscorlib_System_ValueType.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AstarPath_GraphUpdateOrder.h"

// AstarPath/GUOSingle
struct  GUOSingle_t41 
{
	// AstarPath/GraphUpdateOrder AstarPath/GUOSingle::order
	int32_t ___order_0;
	// Pathfinding.IUpdatableGraph AstarPath/GUOSingle::graph
	Object_t * ___graph_1;
	// Pathfinding.GraphUpdateObject AstarPath/GUOSingle::obj
	GraphUpdateObject_t42 * ___obj_2;
};
