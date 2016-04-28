#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2>
struct Dictionary_2_t116;
// UnityEngine.Transform
struct Transform_t4;
// Pathfinding.PointNode
struct PointNode_t114;
// Pathfinding.MeshNode
struct MeshNode_t115;

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_GraphModifier.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Color.h"

// Pathfinding.NodeLink2
struct  NodeLink2_t87  : public GraphModifier_t81
{
	// UnityEngine.Transform Pathfinding.NodeLink2::end
	Transform_t4 * ___end_6;
	// System.Single Pathfinding.NodeLink2::costFactor
	float ___costFactor_7;
	// System.Boolean Pathfinding.NodeLink2::oneWay
	bool ___oneWay_8;
	// Pathfinding.PointNode Pathfinding.NodeLink2::startNode
	PointNode_t114 * ___startNode_9;
	// Pathfinding.PointNode Pathfinding.NodeLink2::endNode
	PointNode_t114 * ___endNode_10;
	// Pathfinding.MeshNode Pathfinding.NodeLink2::connectedNode1
	MeshNode_t115 * ___connectedNode1_11;
	// Pathfinding.MeshNode Pathfinding.NodeLink2::connectedNode2
	MeshNode_t115 * ___connectedNode2_12;
	// UnityEngine.Vector3 Pathfinding.NodeLink2::clamped1
	Vector3_t7  ___clamped1_13;
	// UnityEngine.Vector3 Pathfinding.NodeLink2::clamped2
	Vector3_t7  ___clamped2_14;
	// System.Boolean Pathfinding.NodeLink2::postScanCalled
	bool ___postScanCalled_15;
};
struct NodeLink2_t87_StaticFields{
	// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink2> Pathfinding.NodeLink2::reference
	Dictionary_2_t116 * ___reference_5;
	// UnityEngine.Color Pathfinding.NodeLink2::GizmosColor
	Color_t117  ___GizmosColor_16;
	// UnityEngine.Color Pathfinding.NodeLink2::GizmosColorSelected
	Color_t117  ___GizmosColorSelected_17;
};
