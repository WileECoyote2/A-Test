#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3>
struct Dictionary_2_t120;
// UnityEngine.Transform
struct Transform_t4;
// Pathfinding.NodeLink3Node
struct NodeLink3Node_t118;
// Pathfinding.MeshNode
struct MeshNode_t115;

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_GraphModifier.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Color.h"

// Pathfinding.NodeLink3
struct  NodeLink3_t119  : public GraphModifier_t81
{
	// UnityEngine.Transform Pathfinding.NodeLink3::end
	Transform_t4 * ___end_6;
	// System.Single Pathfinding.NodeLink3::costFactor
	float ___costFactor_7;
	// System.Boolean Pathfinding.NodeLink3::oneWay
	bool ___oneWay_8;
	// Pathfinding.NodeLink3Node Pathfinding.NodeLink3::startNode
	NodeLink3Node_t118 * ___startNode_9;
	// Pathfinding.NodeLink3Node Pathfinding.NodeLink3::endNode
	NodeLink3Node_t118 * ___endNode_10;
	// Pathfinding.MeshNode Pathfinding.NodeLink3::connectedNode1
	MeshNode_t115 * ___connectedNode1_11;
	// Pathfinding.MeshNode Pathfinding.NodeLink3::connectedNode2
	MeshNode_t115 * ___connectedNode2_12;
	// UnityEngine.Vector3 Pathfinding.NodeLink3::clamped1
	Vector3_t7  ___clamped1_13;
	// UnityEngine.Vector3 Pathfinding.NodeLink3::clamped2
	Vector3_t7  ___clamped2_14;
	// System.Boolean Pathfinding.NodeLink3::postScanCalled
	bool ___postScanCalled_15;
};
struct NodeLink3_t119_StaticFields{
	// System.Collections.Generic.Dictionary`2<Pathfinding.GraphNode,Pathfinding.NodeLink3> Pathfinding.NodeLink3::reference
	Dictionary_2_t120 * ___reference_5;
	// UnityEngine.Color Pathfinding.NodeLink3::GizmosColor
	Color_t117  ___GizmosColor_16;
	// UnityEngine.Color Pathfinding.NodeLink3::GizmosColorSelected
	Color_t117  ___GizmosColorSelected_17;
};
