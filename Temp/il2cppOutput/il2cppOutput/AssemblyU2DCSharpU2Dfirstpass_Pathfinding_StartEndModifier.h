#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`1<UnityEngine.Vector3>
struct Func_1_t248;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t19;
// Pathfinding.GraphNodeDelegate
struct GraphNodeDelegate_t219;

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_PathModifier.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_StartEndModifier_E.h"
#include "UnityEngine_UnityEngine_LayerMask.h"

// Pathfinding.StartEndModifier
struct  StartEndModifier_t14  : public PathModifier_t243
{
	// System.Boolean Pathfinding.StartEndModifier::addPoints
	bool ___addPoints_1;
	// Pathfinding.StartEndModifier/Exactness Pathfinding.StartEndModifier::exactStartPoint
	int32_t ___exactStartPoint_2;
	// Pathfinding.StartEndModifier/Exactness Pathfinding.StartEndModifier::exactEndPoint
	int32_t ___exactEndPoint_3;
	// System.Func`1<UnityEngine.Vector3> Pathfinding.StartEndModifier::adjustStartPoint
	Func_1_t248 * ___adjustStartPoint_4;
	// System.Boolean Pathfinding.StartEndModifier::useRaycasting
	bool ___useRaycasting_5;
	// UnityEngine.LayerMask Pathfinding.StartEndModifier::mask
	LayerMask_t211  ___mask_6;
	// System.Boolean Pathfinding.StartEndModifier::useGraphRaycasting
	bool ___useGraphRaycasting_7;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.StartEndModifier::connectionBuffer
	List_1_t19 * ___connectionBuffer_8;
	// Pathfinding.GraphNodeDelegate Pathfinding.StartEndModifier::connectionBufferAddDelegate
	GraphNodeDelegate_t219 * ___connectionBufferAddDelegate_9;
};
