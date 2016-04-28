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

// CompleteProject.EnemyHealth
struct  EnemyHealth_t517  : public MonoBehaviour_t3
{
	// System.Int32 CompleteProject.EnemyHealth::startingHealth
	int32_t ___startingHealth_2;
	// System.Int32 CompleteProject.EnemyHealth::currentHealth
	int32_t ___currentHealth_3;
	// System.Single CompleteProject.EnemyHealth::sinkSpeed
	float ___sinkSpeed_4;
	// System.Int32 CompleteProject.EnemyHealth::scoreValue
	int32_t ___scoreValue_5;
	// UnityEngine.AudioClip CompleteProject.EnemyHealth::deathClip
	AudioClip_t287 * ___deathClip_6;
	// UnityEngine.Animator CompleteProject.EnemyHealth::anim
	Animator_t300 * ___anim_7;
	// UnityEngine.AudioSource CompleteProject.EnemyHealth::enemyAudio
	AudioSource_t288 * ___enemyAudio_8;
	// UnityEngine.ParticleSystem CompleteProject.EnemyHealth::hitParticles
	ParticleSystem_t355 * ___hitParticles_9;
	// UnityEngine.CapsuleCollider CompleteProject.EnemyHealth::capsuleCollider
	CapsuleCollider_t294 * ___capsuleCollider_10;
	// System.Boolean CompleteProject.EnemyHealth::isDead
	bool ___isDead_11;
	// System.Boolean CompleteProject.EnemyHealth::isSinking
	bool ___isSinking_12;
};
