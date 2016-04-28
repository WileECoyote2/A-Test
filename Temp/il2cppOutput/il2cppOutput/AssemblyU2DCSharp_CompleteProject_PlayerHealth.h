#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t510;
// UnityEngine.UI.Image
struct Image_t322;
// UnityEngine.AudioClip
struct AudioClip_t287;
// UnityEngine.Animator
struct Animator_t300;
// UnityEngine.AudioSource
struct AudioSource_t288;
// CompleteProject.PlayerMovement
struct PlayerMovement_t522;
// CompleteProject.PlayerShooting
struct PlayerShooting_t523;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// CompleteProject.PlayerHealth
struct  PlayerHealth_t516  : public MonoBehaviour_t3
{
	// System.Int32 CompleteProject.PlayerHealth::startingHealth
	int32_t ___startingHealth_2;
	// System.Int32 CompleteProject.PlayerHealth::currentHealth
	int32_t ___currentHealth_3;
	// UnityEngine.UI.Slider CompleteProject.PlayerHealth::healthSlider
	Slider_t510 * ___healthSlider_4;
	// UnityEngine.UI.Image CompleteProject.PlayerHealth::damageImage
	Image_t322 * ___damageImage_5;
	// UnityEngine.AudioClip CompleteProject.PlayerHealth::deathClip
	AudioClip_t287 * ___deathClip_6;
	// System.Single CompleteProject.PlayerHealth::flashSpeed
	float ___flashSpeed_7;
	// UnityEngine.Color CompleteProject.PlayerHealth::flashColour
	Color_t117  ___flashColour_8;
	// UnityEngine.Animator CompleteProject.PlayerHealth::anim
	Animator_t300 * ___anim_9;
	// UnityEngine.AudioSource CompleteProject.PlayerHealth::playerAudio
	AudioSource_t288 * ___playerAudio_10;
	// CompleteProject.PlayerMovement CompleteProject.PlayerHealth::playerMovement
	PlayerMovement_t522 * ___playerMovement_11;
	// CompleteProject.PlayerShooting CompleteProject.PlayerHealth::playerShooting
	PlayerShooting_t523 * ___playerShooting_12;
	// System.Boolean CompleteProject.PlayerHealth::isDead
	bool ___isDead_13;
	// System.Boolean CompleteProject.PlayerHealth::damaged
	bool ___damaged_14;
};
