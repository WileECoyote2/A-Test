#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationClip
struct AnimationClip_t85;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Pathfinding.AnimationLink/LinkClip
struct  LinkClip_t84  : public Object_t
{
	// UnityEngine.AnimationClip Pathfinding.AnimationLink/LinkClip::clip
	AnimationClip_t85 * ___clip_0;
	// UnityEngine.Vector3 Pathfinding.AnimationLink/LinkClip::velocity
	Vector3_t7  ___velocity_1;
	// System.Int32 Pathfinding.AnimationLink/LinkClip::loopCount
	int32_t ___loopCount_2;
};
