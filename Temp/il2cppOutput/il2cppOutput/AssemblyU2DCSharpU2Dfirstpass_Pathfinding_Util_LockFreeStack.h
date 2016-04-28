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

#include "mscorlib_System_Object.h"

// Pathfinding.Util.LockFreeStack
struct  LockFreeStack_t77  : public Object_t
{
	// Pathfinding.Path Pathfinding.Util.LockFreeStack::head
	Path_t10 * ___head_0;
	// System.Object Pathfinding.Util.LockFreeStack::lockObj
	Object_t * ___lockObj_1;
};
