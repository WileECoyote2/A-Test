#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t18;

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_MonoModifier.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Pathfinding.RaycastModifier
struct  RaycastModifier_t244  : public MonoModifier_t241
{
	// System.Boolean Pathfinding.RaycastModifier::useRaycasting
	bool ___useRaycasting_3;
	// UnityEngine.LayerMask Pathfinding.RaycastModifier::mask
	LayerMask_t211  ___mask_4;
	// System.Boolean Pathfinding.RaycastModifier::thickRaycast
	bool ___thickRaycast_5;
	// System.Single Pathfinding.RaycastModifier::thickRaycastRadius
	float ___thickRaycastRadius_6;
	// UnityEngine.Vector3 Pathfinding.RaycastModifier::raycastOffset
	Vector3_t7  ___raycastOffset_7;
	// System.Boolean Pathfinding.RaycastModifier::subdivideEveryIter
	bool ___subdivideEveryIter_8;
	// System.Int32 Pathfinding.RaycastModifier::iterations
	int32_t ___iterations_9;
	// System.Boolean Pathfinding.RaycastModifier::useGraphRaycasting
	bool ___useGraphRaycasting_10;
};
struct RaycastModifier_t244_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.RaycastModifier::nodes
	List_1_t18 * ___nodes_11;
};
