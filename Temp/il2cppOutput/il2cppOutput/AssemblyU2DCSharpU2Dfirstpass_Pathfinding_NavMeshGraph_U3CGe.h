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
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"

// Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey2C
struct  U3CGetNearestForceBothU3Ec__AnonStorey2C_t224  : public Object_t
{
	// System.Boolean Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey2C::accurateNearestNode
	bool ___accurateNearestNode_0;
	// UnityEngine.Vector3 Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey2C::position
	Vector3_t7  ___position_1;
	// Pathfinding.Int3 Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey2C::pos
	Int3_t111  ___pos_2;
	// Pathfinding.GraphNode Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey2C::minNode
	GraphNode_t61 * ___minNode_3;
	// System.Single Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey2C::minDist
	float ___minDist_4;
	// System.Single Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey2C::maxDistSqr
	float ___maxDistSqr_5;
	// Pathfinding.NNConstraint Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey2C::constraint
	NNConstraint_t132 * ___constraint_6;
	// Pathfinding.GraphNode Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey2C::minConstNode
	GraphNode_t61 * ___minConstNode_7;
	// System.Single Pathfinding.NavMeshGraph/<GetNearestForceBoth>c__AnonStorey2C::minConstDist
	float ___minConstDist_8;
};
