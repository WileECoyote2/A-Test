#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.BinaryHeapM
struct BinaryHeapM_t106;
// Pathfinding.PathNode[][]
struct PathNodeU5BU5DU5BU5D_t135;
// System.Boolean[]
struct BooleanU5BU5D_t136;
// System.Collections.Generic.Stack`1<Pathfinding.PathNode[]>
struct Stack_1_t137;
// System.Text.StringBuilder
struct StringBuilder_t95;

#include "mscorlib_System_Object.h"

// Pathfinding.PathHandler
struct  PathHandler_t53  : public Object_t
{
	// System.UInt16 Pathfinding.PathHandler::pathID
	uint16_t ___pathID_3;
	// System.Int32 Pathfinding.PathHandler::threadID
	int32_t ___threadID_4;
	// System.Int32 Pathfinding.PathHandler::totalThreadCount
	int32_t ___totalThreadCount_5;
	// Pathfinding.BinaryHeapM Pathfinding.PathHandler::heap
	BinaryHeapM_t106 * ___heap_6;
	// Pathfinding.PathNode[][] Pathfinding.PathHandler::nodes
	PathNodeU5BU5DU5BU5D_t135* ___nodes_7;
	// System.Boolean[] Pathfinding.PathHandler::bucketNew
	BooleanU5BU5D_t136* ___bucketNew_8;
	// System.Boolean[] Pathfinding.PathHandler::bucketCreated
	BooleanU5BU5D_t136* ___bucketCreated_9;
	// System.Collections.Generic.Stack`1<Pathfinding.PathNode[]> Pathfinding.PathHandler::bucketCache
	Stack_1_t137 * ___bucketCache_10;
	// System.Int32 Pathfinding.PathHandler::filledBuckets
	int32_t ___filledBuckets_11;
	// System.Text.StringBuilder Pathfinding.PathHandler::DebugStringBuilder
	StringBuilder_t95 * ___DebugStringBuilder_12;
};
