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
// Pathfinding.Path
struct Path_t10;
// UnityEngine.CharacterController
struct CharacterController_t11;
// UnityEngine.Rigidbody
struct Rigidbody_t12;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// AIPath
struct  AIPath_t9  : public MonoBehaviour_t3
{
	// System.Single AIPath::repathRate
	float ___repathRate_2;
	// UnityEngine.Transform AIPath::target
	Transform_t4 * ___target_3;
	// System.Boolean AIPath::canSearch
	bool ___canSearch_4;
	// System.Boolean AIPath::canMove
	bool ___canMove_5;
	// System.Single AIPath::speed
	float ___speed_6;
	// System.Single AIPath::turningSpeed
	float ___turningSpeed_7;
	// System.Single AIPath::slowdownDistance
	float ___slowdownDistance_8;
	// System.Single AIPath::pickNextWaypointDist
	float ___pickNextWaypointDist_9;
	// System.Single AIPath::forwardLook
	float ___forwardLook_10;
	// System.Single AIPath::endReachedDistance
	float ___endReachedDistance_11;
	// System.Boolean AIPath::closestOnPathCheck
	bool ___closestOnPathCheck_12;
	// System.Single AIPath::minMoveScale
	float ___minMoveScale_13;
	// Seeker AIPath::seeker
	Seeker_t5 * ___seeker_14;
	// UnityEngine.Transform AIPath::tr
	Transform_t4 * ___tr_15;
	// System.Single AIPath::lastRepath
	float ___lastRepath_16;
	// Pathfinding.Path AIPath::path
	Path_t10 * ___path_17;
	// UnityEngine.CharacterController AIPath::controller
	CharacterController_t11 * ___controller_18;
	// UnityEngine.Rigidbody AIPath::rigid
	Rigidbody_t12 * ___rigid_19;
	// System.Int32 AIPath::currentWaypointIndex
	int32_t ___currentWaypointIndex_20;
	// System.Boolean AIPath::targetReached
	bool ___targetReached_21;
	// System.Boolean AIPath::canSearchAgain
	bool ___canSearchAgain_22;
	// UnityEngine.Vector3 AIPath::lastFoundWaypointPosition
	Vector3_t7  ___lastFoundWaypointPosition_23;
	// System.Single AIPath::lastFoundWaypointTime
	float ___lastFoundWaypointTime_24;
	// System.Boolean AIPath::startHasRun
	bool ___startHasRun_25;
	// UnityEngine.Vector3 AIPath::targetPoint
	Vector3_t7  ___targetPoint_26;
	// UnityEngine.Vector3 AIPath::targetDirection
	Vector3_t7  ___targetDirection_27;
};
