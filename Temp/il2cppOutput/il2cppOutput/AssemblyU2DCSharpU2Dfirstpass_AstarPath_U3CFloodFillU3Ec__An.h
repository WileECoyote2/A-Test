#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t19;
// System.Collections.Generic.Stack`1<Pathfinding.GraphNode>
struct Stack_1_t55;
// AstarPath
struct AstarPath_t48;

#include "mscorlib_System_Object.h"

// AstarPath/<FloodFill>c__AnonStorey19
struct  U3CFloodFillU3Ec__AnonStorey19_t54  : public Object_t
{
	// System.UInt32 AstarPath/<FloodFill>c__AnonStorey19::area
	uint32_t ___area_0;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> AstarPath/<FloodFill>c__AnonStorey19::smallAreaList
	List_1_t19 * ___smallAreaList_1;
	// System.Collections.Generic.Stack`1<Pathfinding.GraphNode> AstarPath/<FloodFill>c__AnonStorey19::stack
	Stack_1_t55 * ___stack_2;
	// System.Int32 AstarPath/<FloodFill>c__AnonStorey19::smallAreasDetected
	int32_t ___smallAreasDetected_3;
	// System.Boolean AstarPath/<FloodFill>c__AnonStorey19::warnAboutAreas
	bool ___warnAboutAreas_4;
	// AstarPath AstarPath/<FloodFill>c__AnonStorey19::<>f__this
	AstarPath_t48 * ___U3CU3Ef__this_5;
};
