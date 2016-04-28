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
// PlayerMovement
struct PlayerMovement_t511;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// PlayerHealth
struct  PlayerHealth_t503  : public MonoBehaviour_t3
{
	// System.Int32 PlayerHealth::startingHealth
	int32_t ___startingHealth_2;
	// System.Int32 PlayerHealth::currentHealth
	int32_t ___currentHealth_3;
	// UnityEngine.UI.Slider PlayerHealth::healthSlider
	Slider_t510 * ___healthSlider_4;
	// UnityEngine.UI.Image PlayerHealth::damageImage
	Image_t322 * ___damageImage_5;
	// UnityEngine.AudioClip PlayerHealth::deathClip
	AudioClip_t287 * ___deathClip_6;
	// System.Single PlayerHealth::flashSpeed
	float ___flashSpeed_7;
	// UnityEngine.Color PlayerHealth::flashColour
	Color_t117  ___flashColour_8;
	// UnityEngine.Animator PlayerHealth::anim
	Animator_t300 * ___anim_9;
	// UnityEngine.AudioSource PlayerHealth::playerAudio
	AudioSource_t288 * ___playerAudio_10;
	// PlayerMovement PlayerHealth::playerMovement
	PlayerMovement_t511 * ___playerMovement_11;
	// System.Boolean PlayerHealth::isDead
	bool ___isDead_12;
	// System.Boolean PlayerHealth::damaged
	bool ___damaged_13;
};
