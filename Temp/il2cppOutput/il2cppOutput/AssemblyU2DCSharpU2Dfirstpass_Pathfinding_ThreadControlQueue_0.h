#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Path
struct Path_t10;
// System.Object
struct Object_t;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t71;

#include "mscorlib_System_Object.h"

// Pathfinding.ThreadControlQueue
struct  ThreadControlQueue_t65  : public Object_t
{
	// Pathfinding.Path Pathfinding.ThreadControlQueue::head
	Path_t10 * ___head_0;
	// Pathfinding.Path Pathfinding.ThreadControlQueue::tail
	Path_t10 * ___tail_1;
	// System.Object Pathfinding.ThreadControlQueue::lockObj
	Object_t * ___lockObj_2;
	// System.Int32 Pathfinding.ThreadControlQueue::numReceivers
	int32_t ___numReceivers_3;
	// System.Boolean Pathfinding.ThreadControlQueue::blocked
	bool ___blocked_4;
	// System.Int32 Pathfinding.ThreadControlQueue::blockedReceivers
	int32_t ___blockedReceivers_5;
	// System.Boolean Pathfinding.ThreadControlQueue::starving
	bool ___starving_6;
	// System.Boolean Pathfinding.ThreadControlQueue::terminate
	bool ___terminate_7;
	// System.Threading.ManualResetEvent Pathfinding.ThreadControlQueue::block
	ManualResetEvent_t71 * ___block_8;
};
