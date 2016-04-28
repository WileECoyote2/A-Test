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
// CompleteProject.PlayerHealth
struct PlayerHealth_t516;
// CompleteProject.EnemyHealth
struct EnemyHealth_t517;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// CompleteProject.EnemyAttack
struct  EnemyAttack_t515  : public MonoBehaviour_t3
{
	// System.Single CompleteProject.EnemyAttack::timeBetweenAttacks
	float ___timeBetweenAttacks_2;
	// System.Int32 CompleteProject.EnemyAttack::attackDamage
	int32_t ___attackDamage_3;
	// UnityEngine.Animator CompleteProject.EnemyAttack::anim
	Animator_t300 * ___anim_4;
	// UnityEngine.GameObject CompleteProject.EnemyAttack::player
	GameObject_t88 * ___player_5;
	// CompleteProject.PlayerHealth CompleteProject.EnemyAttack::playerHealth
	PlayerHealth_t516 * ___playerHealth_6;
	// CompleteProject.EnemyHealth CompleteProject.EnemyAttack::enemyHealth
	EnemyHealth_t517 * ___enemyHealth_7;
	// System.Boolean CompleteProject.EnemyAttack::playerInRange
	bool ___playerInRange_8;
	// System.Single CompleteProject.EnemyAttack::timer
	float ___timer_9;
};
