#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t287;
// UnityEngine.Animator
struct Animator_t300;
// UnityEngine.AudioSource
struct AudioSource_t288;
// UnityEngine.ParticleSystem
struct ParticleSystem_t355;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t294;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// EnemyHealth
struct  EnemyHealth_t504  : public MonoBehaviour_t3
{
	// System.Int32 EnemyHealth::startingHealth
	int32_t ___startingHealth_2;
	// System.Int32 EnemyHealth::currentHealth
	int32_t ___currentHealth_3;
	// System.Single EnemyHealth::sinkSpeed
	float ___sinkSpeed_4;
	// System.Int32 EnemyHealth::scoreValue
	int32_t ___scoreValue_5;
	// UnityEngine.AudioClip EnemyHealth::deathClip
	AudioClip_t287 * ___deathClip_6;
	// UnityEngine.Animator EnemyHealth::anim
	Animator_t300 * ___anim_7;
	// UnityEngine.AudioSource EnemyHealth::enemyAudio
	AudioSource_t288 * ___enemyAudio_8;
	// UnityEngine.ParticleSystem EnemyHealth::hitParticles
	ParticleSystem_t355 * ___hitParticles_9;
	// UnityEngine.CapsuleCollider EnemyHealth::capsuleCollider
	CapsuleCollider_t294 * ___capsuleCollider_10;
	// System.Boolean EnemyHealth::isDead
	bool ___isDead_11;
	// System.Boolean EnemyHealth::isSinking
	bool ___isSinking_12;
};
