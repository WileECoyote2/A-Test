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
// UnityEngine.GameObject
struct GameObject_t88;
// PlayerHealth
struct PlayerHealth_t503;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// EnemyAttack
struct  EnemyAttack_t502  : public MonoBehaviour_t3
{
	// System.Single EnemyAttack::timeBetweenAttacks
	float ___timeBetweenAttacks_2;
	// System.Int32 EnemyAttack::attackDamage
	int32_t ___attackDamage_3;
	// UnityEngine.Animator EnemyAttack::anim
	Animator_t300 * ___anim_4;
	// UnityEngine.GameObject EnemyAttack::player
	GameObject_t88 * ___player_5;
	// PlayerHealth EnemyAttack::playerHealth
	PlayerHealth_t503 * ___playerHealth_6;
	// System.Boolean EnemyAttack::playerInRange
	bool ___playerInRange_7;
	// System.Single EnemyAttack::timer
	float ___timer_8;
};
