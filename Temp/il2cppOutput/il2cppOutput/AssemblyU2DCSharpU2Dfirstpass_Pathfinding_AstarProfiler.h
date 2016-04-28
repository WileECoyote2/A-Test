#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.AstarProfiler/ProfilePoint>
struct Dictionary_2_t255;
// Pathfinding.AstarProfiler/ProfilePoint[]
struct ProfilePointU5BU5D_t256;
// System.String[]
struct StringU5BU5D_t63;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_DateTime.h"

// Pathfinding.AstarProfiler
struct  AstarProfiler_t254  : public Object_t
{
};
struct AstarProfiler_t254_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.AstarProfiler/ProfilePoint> Pathfinding.AstarProfiler::profiles
	Dictionary_2_t255 * ___profiles_0;
	// System.DateTime Pathfinding.AstarProfiler::startTime
	DateTime_t134  ___startTime_1;
	// Pathfinding.AstarProfiler/ProfilePoint[] Pathfinding.AstarProfiler::fastProfiles
	ProfilePointU5BU5D_t256* ___fastProfiles_2;
	// System.String[] Pathfinding.AstarProfiler::fastProfileNames
	StringU5BU5D_t63* ___fastProfileNames_3;
};
