#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t4;
// System.String
struct String_t;
// Pathfinding.PointNode[]
struct PointNodeU5BU5D_t234;

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_NavGraph.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_LayerMask.h"

// Pathfinding.PointGraph
struct  PointGraph_t33  : public NavGraph_t109
{
	// UnityEngine.Transform Pathfinding.PointGraph::root
	Transform_t4 * ___root_11;
	// System.String Pathfinding.PointGraph::searchTag
	String_t* ___searchTag_12;
	// System.Single Pathfinding.PointGraph::maxDistance
	float ___maxDistance_13;
	// UnityEngine.Vector3 Pathfinding.PointGraph::limits
	Vector3_t7  ___limits_14;
	// System.Boolean Pathfinding.PointGraph::raycast
	bool ___raycast_15;
	// System.Boolean Pathfinding.PointGraph::use2DPhysics
	bool ___use2DPhysics_16;
	// System.Boolean Pathfinding.PointGraph::thickRaycast
	bool ___thickRaycast_17;
	// System.Single Pathfinding.PointGraph::thickRaycastRadius
	float ___thickRaycastRadius_18;
	// System.Boolean Pathfinding.PointGraph::recursive
	bool ___recursive_19;
	// System.Boolean Pathfinding.PointGraph::autoLinkNodes
	bool ___autoLinkNodes_20;
	// UnityEngine.LayerMask Pathfinding.PointGraph::mask
	LayerMask_t211  ___mask_21;
	// Pathfinding.PointNode[] Pathfinding.PointGraph::nodes
	PointNodeU5BU5D_t234* ___nodes_22;
	// System.Int32 Pathfinding.PointGraph::nodeCount
	int32_t ___nodeCount_23;
};
