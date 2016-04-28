#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t82;

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_GraphModifier.h"

// Pathfinding.GraphUpdateScene
struct  GraphUpdateScene_t80  : public GraphModifier_t81
{
	// UnityEngine.Vector3[] Pathfinding.GraphUpdateScene::points
	Vector3U5BU5D_t82* ___points_5;
	// UnityEngine.Vector3[] Pathfinding.GraphUpdateScene::convexPoints
	Vector3U5BU5D_t82* ___convexPoints_6;
	// System.Boolean Pathfinding.GraphUpdateScene::convex
	bool ___convex_7;
	// System.Single Pathfinding.GraphUpdateScene::minBoundsHeight
	float ___minBoundsHeight_8;
	// System.Int32 Pathfinding.GraphUpdateScene::penaltyDelta
	int32_t ___penaltyDelta_9;
	// System.Boolean Pathfinding.GraphUpdateScene::modifyWalkability
	bool ___modifyWalkability_10;
	// System.Boolean Pathfinding.GraphUpdateScene::setWalkability
	bool ___setWalkability_11;
	// System.Boolean Pathfinding.GraphUpdateScene::applyOnStart
	bool ___applyOnStart_12;
	// System.Boolean Pathfinding.GraphUpdateScene::applyOnScan
	bool ___applyOnScan_13;
	// System.Boolean Pathfinding.GraphUpdateScene::useWorldSpace
	bool ___useWorldSpace_14;
	// System.Boolean Pathfinding.GraphUpdateScene::updatePhysics
	bool ___updatePhysics_15;
	// System.Boolean Pathfinding.GraphUpdateScene::resetPenaltyOnPhysics
	bool ___resetPenaltyOnPhysics_16;
	// System.Boolean Pathfinding.GraphUpdateScene::updateErosion
	bool ___updateErosion_17;
	// System.Boolean Pathfinding.GraphUpdateScene::lockToY
	bool ___lockToY_18;
	// System.Single Pathfinding.GraphUpdateScene::lockToYValue
	float ___lockToYValue_19;
	// System.Boolean Pathfinding.GraphUpdateScene::modifyTag
	bool ___modifyTag_20;
	// System.Int32 Pathfinding.GraphUpdateScene::setTag
	int32_t ___setTag_21;
	// System.Int32 Pathfinding.GraphUpdateScene::setTagInvert
	int32_t ___setTagInvert_22;
	// System.Boolean Pathfinding.GraphUpdateScene::firstApplied
	bool ___firstApplied_23;
};
