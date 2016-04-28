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
// CompleteProject.PlayerHealth
struct PlayerHealth_t516;
// CompleteProject.EnemyHealth
struct EnemyHealth_t517;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t298;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// CompleteProject.EnemyMovement
struct  EnemyMovement_t518  : public MonoBehaviour_t3
{
	// UnityEngine.Transform CompleteProject.EnemyMovement::player
	Transform_t4 * ___player_2;
	// CompleteProject.PlayerHealth CompleteProject.EnemyMovement::playerHealth
	PlayerHealth_t516 * ___playerHealth_3;
	// CompleteProject.EnemyHealth CompleteProject.EnemyMovement::enemyHealth
	EnemyHealth_t517 * ___enemyHealth_4;
	// UnityEngine.NavMeshAgent CompleteProject.EnemyMovement::nav
	NavMeshAgent_t298 * ___nav_5;
};
