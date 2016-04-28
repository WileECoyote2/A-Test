#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t299;
// UnityEngine.Transform
struct Transform_t4;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl
struct  ThirdPersonUserControl_t301  : public MonoBehaviour_t3
{
	// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Character
	ThirdPersonCharacter_t299 * ___m_Character_2;
	// UnityEngine.Transform UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Cam
	Transform_t4 * ___m_Cam_3;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_CamForward
	Vector3_t7  ___m_CamForward_4;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Move
	Vector3_t7  ___m_Move_5;
	// System.Boolean UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Jump
	bool ___m_Jump_6;
};
