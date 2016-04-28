#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t355;
// UnityEngine.LineRenderer
struct LineRenderer_t513;
// UnityEngine.AudioSource
struct AudioSource_t288;
// UnityEngine.Light
struct Light_t341;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// CompleteProject.PlayerShooting
struct  PlayerShooting_t523  : public MonoBehaviour_t3
{
	// System.Int32 CompleteProject.PlayerShooting::damagePerShot
	int32_t ___damagePerShot_2;
	// System.Single CompleteProject.PlayerShooting::timeBetweenBullets
	float ___timeBetweenBullets_3;
	// System.Single CompleteProject.PlayerShooting::range
	float ___range_4;
	// System.Single CompleteProject.PlayerShooting::timer
	float ___timer_5;
	// UnityEngine.Ray CompleteProject.PlayerShooting::shootRay
	Ray_t277  ___shootRay_6;
	// UnityEngine.RaycastHit CompleteProject.PlayerShooting::shootHit
	RaycastHit_t279  ___shootHit_7;
	// System.Int32 CompleteProject.PlayerShooting::shootableMask
	int32_t ___shootableMask_8;
	// UnityEngine.ParticleSystem CompleteProject.PlayerShooting::gunParticles
	ParticleSystem_t355 * ___gunParticles_9;
	// UnityEngine.LineRenderer CompleteProject.PlayerShooting::gunLine
	LineRenderer_t513 * ___gunLine_10;
	// UnityEngine.AudioSource CompleteProject.PlayerShooting::gunAudio
	AudioSource_t288 * ___gunAudio_11;
	// UnityEngine.Light CompleteProject.PlayerShooting::gunLight
	Light_t341 * ___gunLight_12;
	// System.Single CompleteProject.PlayerShooting::effectsDisplayTime
	float ___effectsDisplayTime_13;
};
