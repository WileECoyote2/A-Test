﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerHealth
struct PlayerHealth_t503;
// UnityEngine.Animator
struct Animator_t300;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// GameOverManager
struct  GameOverManager_t507  : public MonoBehaviour_t3
{
	// PlayerHealth GameOverManager::playerHealth
	PlayerHealth_t503 * ___playerHealth_2;
	// System.Single GameOverManager::restartDelay
	float ___restartDelay_3;
	// UnityEngine.Animator GameOverManager::anim
	Animator_t300 * ___anim_4;
	// System.Single GameOverManager::restartTimer
	float ___restartTimer_5;
};
