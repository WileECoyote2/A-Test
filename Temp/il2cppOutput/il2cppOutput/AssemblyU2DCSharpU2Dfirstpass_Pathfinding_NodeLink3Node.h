#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.NodeLink3
struct NodeLink3_t119;

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_PointNode.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Pathfinding.NodeLink3Node
struct  NodeLink3Node_t118  : public PointNode_t114
{
	// Pathfinding.NodeLink3 Pathfinding.NodeLink3Node::link
	NodeLink3_t119 * ___link_18;
	// UnityEngine.Vector3 Pathfinding.NodeLink3Node::portalA
	Vector3_t7  ___portalA_19;
	// UnityEngine.Vector3 Pathfinding.NodeLink3Node::portalB
	Vector3_t7  ___portalB_20;
};
