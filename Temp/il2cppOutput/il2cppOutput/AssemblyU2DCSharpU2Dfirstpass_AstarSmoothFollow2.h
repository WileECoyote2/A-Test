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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// AstarSmoothFollow2
struct  AstarSmoothFollow2_t202  : public MonoBehaviour_t3
{
	// UnityEngine.Transform AstarSmoothFollow2::target
	Transform_t4 * ___target_2;
	// System.Single AstarSmoothFollow2::distance
	float ___distance_3;
	// System.Single AstarSmoothFollow2::height
	float ___height_4;
	// System.Single AstarSmoothFollow2::damping
	float ___damping_5;
	// System.Boolean AstarSmoothFollow2::smoothRotation
	bool ___smoothRotation_6;
	// System.Boolean AstarSmoothFollow2::followBehind
	bool ___followBehind_7;
	// System.Single AstarSmoothFollow2::rotationDamping
	float ___rotationDamping_8;
	// System.Boolean AstarSmoothFollow2::staticOffset
	bool ___staticOffset_9;
};
