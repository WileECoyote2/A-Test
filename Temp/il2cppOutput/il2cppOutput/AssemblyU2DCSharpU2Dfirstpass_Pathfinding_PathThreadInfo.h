#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AstarPath
struct AstarPath_t48;
// Pathfinding.PathHandler
struct PathHandler_t53;
// System.Object
struct Object_t;

#include "mscorlib_System_ValueType.h"

// Pathfinding.PathThreadInfo
struct  PathThreadInfo_t51 
{
	// System.Int32 Pathfinding.PathThreadInfo::threadIndex
	int32_t ___threadIndex_0;
	// AstarPath Pathfinding.PathThreadInfo::astar
	AstarPath_t48 * ___astar_1;
	// Pathfinding.PathHandler Pathfinding.PathThreadInfo::runData
	PathHandler_t53 * ___runData_2;
	// System.Object Pathfinding.PathThreadInfo::lockObject
	Object_t * ___lockObject_3;
};
