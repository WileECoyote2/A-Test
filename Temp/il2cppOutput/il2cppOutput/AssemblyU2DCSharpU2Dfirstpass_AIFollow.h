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
// UnityEngine.CharacterController
struct CharacterController_t11;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t82;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// AIFollow
struct  AIFollow_t201  : public MonoBehaviour_t3
{
	// UnityEngine.Transform AIFollow::target
	Transform_t4 * ___target_2;
	// System.Single AIFollow::repathRate
	float ___repathRate_3;
	// System.Single AIFollow::pickNextWaypointDistance
	float ___pickNextWaypointDistance_4;
	// System.Single AIFollow::targetReached
	float ___targetReached_5;
	// System.Single AIFollow::speed
	float ___speed_6;
	// System.Single AIFollow::rotationSpeed
	float ___rotationSpeed_7;
	// System.Boolean AIFollow::drawGizmos
	bool ___drawGizmos_8;
	// System.Boolean AIFollow::canSearch
	bool ___canSearch_9;
	// System.Boolean AIFollow::canMove
	bool ___canMove_10;
	// Seeker AIFollow::seeker
	Seeker_t5 * ___seeker_11;
	// UnityEngine.CharacterController AIFollow::controller
	CharacterController_t11 * ___controller_12;
	// UnityEngine.Transform AIFollow::tr
	Transform_t4 * ___tr_13;
	// System.Single AIFollow::lastPathSearch
	float ___lastPathSearch_14;
	// System.Int32 AIFollow::pathIndex
	int32_t ___pathIndex_15;
	// UnityEngine.Vector3[] AIFollow::path
	Vector3U5BU5D_t82* ___path_16;
};
