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

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_GraphModifier.h"

// Pathfinding.NodeLink
struct  NodeLink_t113  : public GraphModifier_t81
{
	// UnityEngine.Transform Pathfinding.NodeLink::end
	Transform_t4 * ___end_5;
	// System.Single Pathfinding.NodeLink::costFactor
	float ___costFactor_6;
	// System.Boolean Pathfinding.NodeLink::oneWay
	bool ___oneWay_7;
	// System.Boolean Pathfinding.NodeLink::deleteConnection
	bool ___deleteConnection_8;
};
