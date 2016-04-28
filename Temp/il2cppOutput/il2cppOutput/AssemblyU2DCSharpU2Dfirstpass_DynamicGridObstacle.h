#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider
struct Collider_t205;
// UnityEngine.Transform
struct Transform_t4;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Bounds.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// DynamicGridObstacle
struct  DynamicGridObstacle_t204  : public MonoBehaviour_t3
{
	// UnityEngine.Collider DynamicGridObstacle::col
	Collider_t205 * ___col_2;
	// UnityEngine.Transform DynamicGridObstacle::tr
	Transform_t4 * ___tr_3;
	// System.Single DynamicGridObstacle::updateError
	float ___updateError_4;
	// System.Single DynamicGridObstacle::checkTime
	float ___checkTime_5;
	// UnityEngine.Bounds DynamicGridObstacle::prevBounds
	Bounds_t171  ___prevBounds_6;
	// UnityEngine.Quaternion DynamicGridObstacle::prevRotation
	Quaternion_t206  ___prevRotation_7;
	// System.Boolean DynamicGridObstacle::prevEnabled
	bool ___prevEnabled_8;
	// System.Single DynamicGridObstacle::lastCheckTime
	float ___lastCheckTime_9;
};
