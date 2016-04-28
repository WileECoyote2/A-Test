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
// AIPath[]
struct AIPathU5BU5D_t212;
// AILerp[]
struct AILerpU5BU5D_t213;
// UnityEngine.Camera
struct Camera_t100;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_LayerMask.h"

// Pathfinding.TargetMover
struct  TargetMover_t210  : public MonoBehaviour_t3
{
	// UnityEngine.LayerMask Pathfinding.TargetMover::mask
	LayerMask_t211  ___mask_2;
	// UnityEngine.Transform Pathfinding.TargetMover::target
	Transform_t4 * ___target_3;
	// AIPath[] Pathfinding.TargetMover::ais2
	AIPathU5BU5D_t212* ___ais2_4;
	// AILerp[] Pathfinding.TargetMover::ais3
	AILerpU5BU5D_t213* ___ais3_5;
	// System.Boolean Pathfinding.TargetMover::onlyOnDoubleClick
	bool ___onlyOnDoubleClick_6;
	// System.Boolean Pathfinding.TargetMover::use2D
	bool ___use2D_7;
	// UnityEngine.Camera Pathfinding.TargetMover::cam
	Camera_t100 * ___cam_8;
};
