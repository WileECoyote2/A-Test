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
// UnityEngine.Animator
struct Animator_t300;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// CompleteProject.GameOverManager
struct  GameOverManager_t520  : public MonoBehaviour_t3
{
	// CompleteProject.PlayerHealth CompleteProject.GameOverManager::playerHealth
	PlayerHealth_t516 * ___playerHealth_2;
	// System.Single CompleteProject.GameOverManager::restartDelay
	float ___restartDelay_3;
	// UnityEngine.Animator CompleteProject.GameOverManager::anim
	Animator_t300 * ___anim_4;
	// System.Single CompleteProject.GameOverManager::restartTimer
	float ___restartTimer_5;
};
