#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t300;
// UnityEngine.Rigidbody
struct Rigidbody_t12;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// CompleteProject.PlayerMovement
struct  PlayerMovement_t522  : public MonoBehaviour_t3
{
	// System.Single CompleteProject.PlayerMovement::speed
	float ___speed_2;
	// UnityEngine.Vector3 CompleteProject.PlayerMovement::movement
	Vector3_t7  ___movement_3;
	// UnityEngine.Animator CompleteProject.PlayerMovement::anim
	Animator_t300 * ___anim_4;
	// UnityEngine.Rigidbody CompleteProject.PlayerMovement::playerRigidbody
	Rigidbody_t12 * ___playerRigidbody_5;
	// System.Int32 CompleteProject.PlayerMovement::floorMask
	int32_t ___floorMask_6;
	// System.Single CompleteProject.PlayerMovement::camRayLength
	float ___camRayLength_7;
};
