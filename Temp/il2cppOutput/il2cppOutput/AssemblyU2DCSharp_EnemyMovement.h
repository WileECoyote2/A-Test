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
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t298;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// EnemyMovement
struct  EnemyMovement_t505  : public MonoBehaviour_t3
{
	// UnityEngine.Transform EnemyMovement::player
	Transform_t4 * ___player_2;
	// UnityEngine.NavMeshAgent EnemyMovement::nav
	NavMeshAgent_t298 * ___nav_3;
};
