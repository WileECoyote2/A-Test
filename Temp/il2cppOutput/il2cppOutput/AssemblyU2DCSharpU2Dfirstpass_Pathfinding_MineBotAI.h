#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animation
struct Animation_t208;
// UnityEngine.GameObject
struct GameObject_t88;

#include "AssemblyU2DCSharpU2Dfirstpass_AIPath.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Pathfinding.MineBotAI
struct  MineBotAI_t207  : public AIPath_t9
{
	// UnityEngine.Animation Pathfinding.MineBotAI::anim
	Animation_t208 * ___anim_28;
	// System.Single Pathfinding.MineBotAI::sleepVelocity
	float ___sleepVelocity_29;
	// System.Single Pathfinding.MineBotAI::animationSpeed
	float ___animationSpeed_30;
	// UnityEngine.GameObject Pathfinding.MineBotAI::endOfPathEffect
	GameObject_t88 * ___endOfPathEffect_31;
	// UnityEngine.Vector3 Pathfinding.MineBotAI::lastTarget
	Vector3_t7  ___lastTarget_32;
};
