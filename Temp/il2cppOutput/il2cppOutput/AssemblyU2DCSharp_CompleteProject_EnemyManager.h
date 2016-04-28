#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CompleteProject.PlayerHealth
struct PlayerHealth_t516;
// UnityEngine.GameObject
struct GameObject_t88;
// UnityEngine.Transform[]
struct TransformU5BU5D_t350;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// CompleteProject.EnemyManager
struct  EnemyManager_t519  : public MonoBehaviour_t3
{
	// CompleteProject.PlayerHealth CompleteProject.EnemyManager::playerHealth
	PlayerHealth_t516 * ___playerHealth_2;
	// UnityEngine.GameObject CompleteProject.EnemyManager::enemy
	GameObject_t88 * ___enemy_3;
	// System.Single CompleteProject.EnemyManager::spawnTime
	float ___spawnTime_4;
	// UnityEngine.Transform[] CompleteProject.EnemyManager::spawnPoints
	TransformU5BU5D_t350* ___spawnPoints_5;
};
