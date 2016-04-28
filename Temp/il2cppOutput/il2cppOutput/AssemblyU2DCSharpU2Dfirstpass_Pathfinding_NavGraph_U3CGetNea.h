#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GraphNode
struct GraphNode_t61;
// Pathfinding.NNConstraint
struct NNConstraint_t132;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Pathfinding.NavGraph/<GetNearest>c__AnonStorey2A
struct  U3CGetNearestU3Ec__AnonStorey2A_t217  : public Object_t
{
	// UnityEngine.Vector3 Pathfinding.NavGraph/<GetNearest>c__AnonStorey2A::position
	Vector3_t7  ___position_0;
	// System.Single Pathfinding.NavGraph/<GetNearest>c__AnonStorey2A::minDist
	float ___minDist_1;
	// Pathfinding.GraphNode Pathfinding.NavGraph/<GetNearest>c__AnonStorey2A::minNode
	GraphNode_t61 * ___minNode_2;
	// System.Single Pathfinding.NavGraph/<GetNearest>c__AnonStorey2A::minConstDist
	float ___minConstDist_3;
	// System.Single Pathfinding.NavGraph/<GetNearest>c__AnonStorey2A::maxDistSqr
	float ___maxDistSqr_4;
	// Pathfinding.NNConstraint Pathfinding.NavGraph/<GetNearest>c__AnonStorey2A::constraint
	NNConstraint_t132 * ___constraint_5;
	// Pathfinding.GraphNode Pathfinding.NavGraph/<GetNearest>c__AnonStorey2A::minConstNode
	GraphNode_t61 * ___minConstNode_6;
};
