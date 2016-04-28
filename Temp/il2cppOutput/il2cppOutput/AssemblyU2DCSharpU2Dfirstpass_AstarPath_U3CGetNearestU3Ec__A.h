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

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// AstarPath/<GetNearest>c__AnonStorey1D
struct  U3CGetNearestU3Ec__AnonStorey1D_t60  : public Object_t
{
	// UnityEngine.Vector3 AstarPath/<GetNearest>c__AnonStorey1D::lineOrigin
	Vector3_t7  ___lineOrigin_0;
	// UnityEngine.Vector3 AstarPath/<GetNearest>c__AnonStorey1D::lineDirection
	Vector3_t7  ___lineDirection_1;
	// System.Single AstarPath/<GetNearest>c__AnonStorey1D::minDist
	float ___minDist_2;
	// Pathfinding.GraphNode AstarPath/<GetNearest>c__AnonStorey1D::nearestNode
	GraphNode_t61 * ___nearestNode_3;
};
