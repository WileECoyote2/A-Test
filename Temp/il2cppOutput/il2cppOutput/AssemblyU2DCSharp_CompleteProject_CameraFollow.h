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
#include "UnityEngine_UnityEngine_Vector3.h"

// CompleteProject.CameraFollow
struct  CameraFollow_t514  : public MonoBehaviour_t3
{
	// UnityEngine.Transform CompleteProject.CameraFollow::target
	Transform_t4 * ___target_2;
	// System.Single CompleteProject.CameraFollow::smoothing
	float ___smoothing_3;
	// UnityEngine.Vector3 CompleteProject.CameraFollow::offset
	Vector3_t7  ___offset_4;
};
