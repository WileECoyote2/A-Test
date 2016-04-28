#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t299;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::.ctor()
extern "C" void ThirdPersonCharacter__ctor_m1355 (ThirdPersonCharacter_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Start()
extern "C" void ThirdPersonCharacter_Start_m1356 (ThirdPersonCharacter_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::Move(UnityEngine.Vector3,System.Boolean,System.Boolean)
extern "C" void ThirdPersonCharacter_Move_m1357 (ThirdPersonCharacter_t299 * __this, Vector3_t7  ___move, bool ___crouch, bool ___jump, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ScaleCapsuleForCrouching(System.Boolean)
extern "C" void ThirdPersonCharacter_ScaleCapsuleForCrouching_m1358 (ThirdPersonCharacter_t299 * __this, bool ___crouch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::PreventStandingInLowHeadroom()
extern "C" void ThirdPersonCharacter_PreventStandingInLowHeadroom_m1359 (ThirdPersonCharacter_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::UpdateAnimator(UnityEngine.Vector3)
extern "C" void ThirdPersonCharacter_UpdateAnimator_m1360 (ThirdPersonCharacter_t299 * __this, Vector3_t7  ___move, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleAirborneMovement()
extern "C" void ThirdPersonCharacter_HandleAirborneMovement_m1361 (ThirdPersonCharacter_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::HandleGroundedMovement(System.Boolean,System.Boolean)
extern "C" void ThirdPersonCharacter_HandleGroundedMovement_m1362 (ThirdPersonCharacter_t299 * __this, bool ___crouch, bool ___jump, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::ApplyExtraTurnRotation()
extern "C" void ThirdPersonCharacter_ApplyExtraTurnRotation_m1363 (ThirdPersonCharacter_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::OnAnimatorMove()
extern "C" void ThirdPersonCharacter_OnAnimatorMove_m1364 (ThirdPersonCharacter_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter::CheckGroundStatus()
extern "C" void ThirdPersonCharacter_CheckGroundStatus_m1365 (ThirdPersonCharacter_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
