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

#include "mscorlib_System_ValueType.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Pathfinding.GraphHitInfo
struct  GraphHitInfo_t167 
{
	// UnityEngine.Vector3 Pathfinding.GraphHitInfo::origin
	Vector3_t7  ___origin_0;
	// UnityEngine.Vector3 Pathfinding.GraphHitInfo::point
	Vector3_t7  ___point_1;
	// Pathfinding.GraphNode Pathfinding.GraphHitInfo::node
	GraphNode_t61 * ___node_2;
	// UnityEngine.Vector3 Pathfinding.GraphHitInfo::tangentOrigin
	Vector3_t7  ___tangentOrigin_3;
	// UnityEngine.Vector3 Pathfinding.GraphHitInfo::tangent
	Vector3_t7  ___tangent_4;
};
