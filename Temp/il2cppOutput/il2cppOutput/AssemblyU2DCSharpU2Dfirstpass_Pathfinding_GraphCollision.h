#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_ColliderType.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_RayDirection.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Pathfinding.GraphCollision
struct  GraphCollision_t220  : public Object_t
{
	// Pathfinding.ColliderType Pathfinding.GraphCollision::type
	int32_t ___type_1;
	// System.Single Pathfinding.GraphCollision::diameter
	float ___diameter_2;
	// System.Single Pathfinding.GraphCollision::height
	float ___height_3;
	// System.Single Pathfinding.GraphCollision::collisionOffset
	float ___collisionOffset_4;
	// Pathfinding.RayDirection Pathfinding.GraphCollision::rayDirection
	int32_t ___rayDirection_5;
	// UnityEngine.LayerMask Pathfinding.GraphCollision::mask
	LayerMask_t211  ___mask_6;
	// UnityEngine.LayerMask Pathfinding.GraphCollision::heightMask
	LayerMask_t211  ___heightMask_7;
	// System.Single Pathfinding.GraphCollision::fromHeight
	float ___fromHeight_8;
	// System.Boolean Pathfinding.GraphCollision::thickRaycast
	bool ___thickRaycast_9;
	// System.Single Pathfinding.GraphCollision::thickRaycastDiameter
	float ___thickRaycastDiameter_10;
	// System.Boolean Pathfinding.GraphCollision::unwalkableWhenNoGround
	bool ___unwalkableWhenNoGround_11;
	// System.Boolean Pathfinding.GraphCollision::use2D
	bool ___use2D_12;
	// System.Boolean Pathfinding.GraphCollision::collisionCheck
	bool ___collisionCheck_13;
	// System.Boolean Pathfinding.GraphCollision::heightCheck
	bool ___heightCheck_14;
	// UnityEngine.Vector3 Pathfinding.GraphCollision::up
	Vector3_t7  ___up_15;
	// UnityEngine.Vector3 Pathfinding.GraphCollision::upheight
	Vector3_t7  ___upheight_16;
	// System.Single Pathfinding.GraphCollision::finalRadius
	float ___finalRadius_17;
	// System.Single Pathfinding.GraphCollision::finalRaycastRadius
	float ___finalRaycastRadius_18;
};
