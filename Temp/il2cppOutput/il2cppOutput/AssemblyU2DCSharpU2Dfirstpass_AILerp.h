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
// Seeker
struct Seeker_t5;
// Pathfinding.ABPath
struct ABPath_t6;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// AILerp
struct  AILerp_t2  : public MonoBehaviour_t3
{
	// System.Single AILerp::repathRate
	float ___repathRate_2;
	// UnityEngine.Transform AILerp::target
	Transform_t4 * ___target_3;
	// System.Boolean AILerp::canSearch
	bool ___canSearch_4;
	// System.Boolean AILerp::canMove
	bool ___canMove_5;
	// System.Single AILerp::speed
	float ___speed_6;
	// System.Boolean AILerp::enableRotation
	bool ___enableRotation_7;
	// System.Boolean AILerp::rotationIn2D
	bool ___rotationIn2D_8;
	// System.Single AILerp::rotationSpeed
	float ___rotationSpeed_9;
	// System.Boolean AILerp::interpolatePathSwitches
	bool ___interpolatePathSwitches_10;
	// System.Single AILerp::switchPathInterpolationSpeed
	float ___switchPathInterpolationSpeed_11;
	// Seeker AILerp::seeker
	Seeker_t5 * ___seeker_12;
	// UnityEngine.Transform AILerp::tr
	Transform_t4 * ___tr_13;
	// System.Single AILerp::lastRepath
	float ___lastRepath_14;
	// Pathfinding.ABPath AILerp::path
	ABPath_t6 * ___path_15;
	// System.Int32 AILerp::currentWaypointIndex
	int32_t ___currentWaypointIndex_16;
	// System.Single AILerp::distanceAlongSegment
	float ___distanceAlongSegment_17;
	// System.Boolean AILerp::canSearchAgain
	bool ___canSearchAgain_18;
	// UnityEngine.Vector3 AILerp::previousMovementOrigin
	Vector3_t7  ___previousMovementOrigin_19;
	// UnityEngine.Vector3 AILerp::previousMovementDirection
	Vector3_t7  ___previousMovementDirection_20;
	// System.Single AILerp::previousMovementStartTime
	float ___previousMovementStartTime_21;
	// System.Boolean AILerp::startHasRun
	bool ___startHasRun_22;
	// System.Boolean AILerp::<targetReached>k__BackingField
	bool ___U3CtargetReachedU3Ek__BackingField_23;
};
