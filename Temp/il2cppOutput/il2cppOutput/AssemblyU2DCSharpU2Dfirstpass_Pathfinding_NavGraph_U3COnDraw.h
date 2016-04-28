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
// Pathfinding.PathHandler
struct PathHandler_t53;
// Pathfinding.GraphNodeDelegate
struct GraphNodeDelegate_t219;
// Pathfinding.NavGraph
struct NavGraph_t109;

#include "mscorlib_System_Object.h"

// Pathfinding.NavGraph/<OnDrawGizmos>c__AnonStorey2B
struct  U3COnDrawGizmosU3Ec__AnonStorey2B_t218  : public Object_t
{
	// Pathfinding.GraphNode Pathfinding.NavGraph/<OnDrawGizmos>c__AnonStorey2B::node
	GraphNode_t61 * ___node_0;
	// Pathfinding.PathHandler Pathfinding.NavGraph/<OnDrawGizmos>c__AnonStorey2B::data
	PathHandler_t53 * ___data_1;
	// Pathfinding.GraphNodeDelegate Pathfinding.NavGraph/<OnDrawGizmos>c__AnonStorey2B::drawConnection
	GraphNodeDelegate_t219 * ___drawConnection_2;
	// Pathfinding.NavGraph Pathfinding.NavGraph/<OnDrawGizmos>c__AnonStorey2B::<>f__this
	NavGraph_t109 * ___U3CU3Ef__this_3;
};
