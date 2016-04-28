#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.RelevantGraphSurface
struct RelevantGraphSurface_t249;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Pathfinding.RelevantGraphSurface
struct  RelevantGraphSurface_t249  : public MonoBehaviour_t3
{
	// System.Single Pathfinding.RelevantGraphSurface::maxRange
	float ___maxRange_3;
	// Pathfinding.RelevantGraphSurface Pathfinding.RelevantGraphSurface::prev
	RelevantGraphSurface_t249 * ___prev_4;
	// Pathfinding.RelevantGraphSurface Pathfinding.RelevantGraphSurface::next
	RelevantGraphSurface_t249 * ___next_5;
	// UnityEngine.Vector3 Pathfinding.RelevantGraphSurface::position
	Vector3_t7  ___position_6;
};
struct RelevantGraphSurface_t249_StaticFields{
	// Pathfinding.RelevantGraphSurface Pathfinding.RelevantGraphSurface::root
	RelevantGraphSurface_t249 * ___root_2;
};
