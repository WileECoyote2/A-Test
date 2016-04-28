#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerHealth
struct PlayerHealth_t503;
// UnityEngine.GameObject
struct GameObject_t88;
// UnityEngine.Transform[]
struct TransformU5BU5D_t350;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// EnemyManager
struct  EnemyManager_t506  : public MonoBehaviour_t3
{
	// PlayerHealth EnemyManager::playerHealth
	PlayerHealth_t503 * ___playerHealth_2;
	// UnityEngine.GameObject EnemyManager::enemy
	GameObject_t88 * ___enemy_3;
	// System.Single EnemyManager::spawnTime
	float ___spawnTime_4;
	// UnityEngine.Transform[] EnemyManager::spawnPoints
	TransformU5BU5D_t350* ___spawnPoints_5;
};
