#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Diagnostics.Stopwatch
struct Stopwatch_t253;

#include "mscorlib_System_Object.h"

// Pathfinding.Profile
struct  Profile_t266  : public Object_t
{
	// System.String Pathfinding.Profile::name
	String_t* ___name_2;
	// System.Diagnostics.Stopwatch Pathfinding.Profile::watch
	Stopwatch_t253 * ___watch_3;
	// System.Int32 Pathfinding.Profile::counter
	int32_t ___counter_4;
	// System.Int64 Pathfinding.Profile::mem
	int64_t ___mem_5;
	// System.Int64 Pathfinding.Profile::smem
	int64_t ___smem_6;
	// System.Int32 Pathfinding.Profile::control
	int32_t ___control_7;
};
