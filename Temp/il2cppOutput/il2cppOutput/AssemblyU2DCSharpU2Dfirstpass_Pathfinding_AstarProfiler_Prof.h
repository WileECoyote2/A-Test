#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Diagnostics.Stopwatch
struct Stopwatch_t253;

#include "mscorlib_System_Object.h"

// Pathfinding.AstarProfiler/ProfilePoint
struct  ProfilePoint_t252  : public Object_t
{
	// System.Diagnostics.Stopwatch Pathfinding.AstarProfiler/ProfilePoint::watch
	Stopwatch_t253 * ___watch_0;
	// System.Int32 Pathfinding.AstarProfiler/ProfilePoint::totalCalls
	int32_t ___totalCalls_1;
	// System.Int64 Pathfinding.AstarProfiler/ProfilePoint::tmpBytes
	int64_t ___tmpBytes_2;
	// System.Int64 Pathfinding.AstarProfiler/ProfilePoint::totalBytes
	int64_t ___totalBytes_3;
};
