#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// EnemyAttack
struct EnemyAttack_t502;
// PlayerHealth
struct PlayerHealth_t503;
// System.Object
struct Object_t;
// UnityEngine.Animator
struct Animator_t300;
// UnityEngine.Collider
struct Collider_t205;
// EnemyHealth
struct EnemyHealth_t504;
// UnityEngine.AudioSource
struct AudioSource_t288;
// UnityEngine.ParticleSystem
struct ParticleSystem_t355;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t294;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t298;
// UnityEngine.Rigidbody
struct Rigidbody_t12;
// EnemyMovement
struct EnemyMovement_t505;
// EnemyManager
struct EnemyManager_t506;
// GameOverManager
struct GameOverManager_t507;
// ScoreManager
struct ScoreManager_t508;
// UnityEngine.UI.Text
struct Text_t509;
// PlayerMovement
struct PlayerMovement_t511;
// PlayerShooting
struct PlayerShooting_t512;
// UnityEngine.LineRenderer
struct LineRenderer_t513;
// UnityEngine.Light
struct Light_t341;
// CompleteProject.CameraFollow
struct CameraFollow_t514;
// CompleteProject.EnemyAttack
struct EnemyAttack_t515;
// CompleteProject.PlayerHealth
struct PlayerHealth_t516;
// CompleteProject.EnemyHealth
struct EnemyHealth_t517;
// CompleteProject.EnemyMovement
struct EnemyMovement_t518;
// CompleteProject.EnemyManager
struct EnemyManager_t519;
// CompleteProject.GameOverManager
struct GameOverManager_t520;
// CompleteProject.ScoreManager
struct ScoreManager_t521;
// CompleteProject.PlayerMovement
struct PlayerMovement_t522;
// CompleteProject.PlayerShooting
struct PlayerShooting_t523;
// CameraFollow
struct CameraFollow_t524;
// Move
struct Move_t525;
// UnityEngine.CharacterController
struct CharacterController_t11;
// SkeletonSpawn/<SkeletonGenerator>c__Iterator0
struct U3CSkeletonGeneratorU3Ec__Iterator0_t526;
// UnityEngine.GameObject
struct GameObject_t88;
// SkeletonSpawn
struct SkeletonSpawn_t527;
// System.Collections.IEnumerator
struct IEnumerator_t79;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DCSharp_EnemyAttack.h"
#include "AssemblyU2DCSharp_EnemyAttackMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "mscorlib_System_Single.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "mscorlib_System_String.h"
#include "UnityEngine_UnityEngine_GameObject.h"
#include "AssemblyU2DCSharp_PlayerHealth.h"
#include "UnityEngine_UnityEngine_Animator.h"
#include "UnityEngine_UnityEngine_Component.h"
#include "UnityEngine_UnityEngine_Collider.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "mscorlib_System_Boolean.h"
#include "UnityEngine_UnityEngine_Object.h"
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerHealthMethodDeclarations.h"
#include "AssemblyU2DCSharp_EnemyHealth.h"
#include "AssemblyU2DCSharp_EnemyHealthMethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource.h"
#include "UnityEngine_UnityEngine_ParticleSystem.h"
#include "UnityEngine_UnityEngine_CapsuleCollider.h"
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ParticleSystemMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioClip.h"
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
#include "UnityEngine_UnityEngine_NavMeshAgent.h"
#include "UnityEngine_UnityEngine_Rigidbody.h"
#include "AssemblyU2DCSharp_ScoreManager.h"
#include "AssemblyU2DCSharp_ScoreManagerMethodDeclarations.h"
#include "AssemblyU2DCSharp_EnemyMovement.h"
#include "AssemblyU2DCSharp_EnemyMovementMethodDeclarations.h"
#include "UnityEngine_UnityEngine_NavMeshAgentMethodDeclarations.h"
#include "AssemblyU2DCSharp_EnemyManager.h"
#include "AssemblyU2DCSharp_EnemyManagerMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "AssemblyU2DCSharp_GameOverManager.h"
#include "AssemblyU2DCSharp_GameOverManagerMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "mscorlib_System_Object.h"
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_PlayerMovement.h"
#include "UnityEngine_UI_UnityEngine_UI_GraphicMethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
#include "UnityEngine_UI_UnityEngine_UI_SliderMethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Slider.h"
#include "AssemblyU2DCSharp_PlayerMovementMethodDeclarations.h"
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "UnityEngine_UnityEngine_Camera.h"
#include "AssemblyU2DCSharp_PlayerShooting.h"
#include "AssemblyU2DCSharp_PlayerShootingMethodDeclarations.h"
#include "UnityEngine_UnityEngine_LineRenderer.h"
#include "UnityEngine_UnityEngine_Light.h"
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
#include "UnityEngine_UnityEngine_LineRendererMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
#include "AssemblyU2DCSharp_CompleteProject_CameraFollow.h"
#include "AssemblyU2DCSharp_CompleteProject_CameraFollowMethodDeclarations.h"
#include "AssemblyU2DCSharp_CompleteProject_EnemyAttack.h"
#include "AssemblyU2DCSharp_CompleteProject_EnemyAttackMethodDeclarations.h"
#include "AssemblyU2DCSharp_CompleteProject_PlayerHealth.h"
#include "AssemblyU2DCSharp_CompleteProject_EnemyHealth.h"
#include "AssemblyU2DCSharp_CompleteProject_PlayerHealthMethodDeclarations.h"
#include "AssemblyU2DCSharp_CompleteProject_EnemyHealthMethodDeclarations.h"
#include "AssemblyU2DCSharp_CompleteProject_ScoreManager.h"
#include "AssemblyU2DCSharp_CompleteProject_ScoreManagerMethodDeclarations.h"
#include "AssemblyU2DCSharp_CompleteProject_EnemyMovement.h"
#include "AssemblyU2DCSharp_CompleteProject_EnemyMovementMethodDeclarations.h"
#include "AssemblyU2DCSharp_CompleteProject_EnemyManager.h"
#include "AssemblyU2DCSharp_CompleteProject_EnemyManagerMethodDeclarations.h"
#include "AssemblyU2DCSharp_CompleteProject_GameOverManager.h"
#include "AssemblyU2DCSharp_CompleteProject_GameOverManagerMethodDeclarations.h"
#include "AssemblyU2DCSharp_CompleteProject_PlayerMovement.h"
#include "AssemblyU2DCSharp_CompleteProject_PlayerShooting.h"
#include "AssemblyU2DCSharp_CompleteProject_PlayerShootingMethodDeclarations.h"
#include "AssemblyU2DCSharp_CompleteProject_PlayerMovementMethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraFollow.h"
#include "AssemblyU2DCSharp_CameraFollowMethodDeclarations.h"
#include "AssemblyU2DCSharp_Move.h"
#include "AssemblyU2DCSharp_MoveMethodDeclarations.h"
#include "UnityEngine_UnityEngine_CharacterControllerMethodDeclarations.h"
#include "UnityEngine_UnityEngine_CharacterController.h"
#include "UnityEngine_UnityEngine_CollisionFlags.h"
#include "AssemblyU2DCSharp_SkeletonSpawn_U3CSkeletonGeneratorU3Ec__It.h"
#include "AssemblyU2DCSharp_SkeletonSpawn_U3CSkeletonGeneratorU3Ec__ItMethodDeclarations.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
#include "mscorlib_System_UInt32.h"
#include "AssemblyU2DCSharp_SkeletonSpawn.h"
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
#include "mscorlib_System_NotSupportedException.h"
#include "AssemblyU2DCSharp_SkeletonSpawnMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Coroutine.h"

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m2048_gshared (GameObject_t88 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m2048(__this, method) (( Object_t * (*) (GameObject_t88 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2048_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<PlayerHealth>()
#define GameObject_GetComponent_TisPlayerHealth_t503_m2515(__this, method) (( PlayerHealth_t503 * (*) (GameObject_t88 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2048_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m2046_gshared (Component_t434 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m2046(__this, method) (( Object_t * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t300_m2308(__this, method) (( Animator_t300 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t288_m2261(__this, method) (( AudioSource_t288 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" Object_t * Component_GetComponentInChildren_TisObject_t_m2343_gshared (Component_t434 * __this, const MethodInfo* method);
#define Component_GetComponentInChildren_TisObject_t_m2343(__this, method) (( Object_t * (*) (Component_t434 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m2343_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.ParticleSystem>()
#define Component_GetComponentInChildren_TisParticleSystem_t355_m2517(__this, method) (( ParticleSystem_t355 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m2343_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
#define Component_GetComponent_TisCapsuleCollider_t294_m2286(__this, method) (( CapsuleCollider_t294 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.NavMeshAgent>()
#define Component_GetComponent_TisNavMeshAgent_t298_m2521(__this, method) (( NavMeshAgent_t298 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t12_m1725(__this, method) (( Rigidbody_t12 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t509_m2523(__this, method) (( Text_t509 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<PlayerMovement>()
#define Component_GetComponent_TisPlayerMovement_t511_m2524(__this, method) (( PlayerMovement_t511 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
#define Component_GetComponent_TisParticleSystem_t355_m2533(__this, method) (( ParticleSystem_t355 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
#define Component_GetComponent_TisLineRenderer_t513_m2534(__this, method) (( LineRenderer_t513 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
#define Component_GetComponent_TisLight_t341_m2535(__this, method) (( Light_t341 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<EnemyHealth>()
#define Component_GetComponent_TisEnemyHealth_t504_m2539(__this, method) (( EnemyHealth_t504 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<CompleteProject.PlayerHealth>()
#define GameObject_GetComponent_TisPlayerHealth_t516_m2540(__this, method) (( PlayerHealth_t516 * (*) (GameObject_t88 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m2048_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<CompleteProject.EnemyHealth>()
#define Component_GetComponent_TisEnemyHealth_t517_m2541(__this, method) (( EnemyHealth_t517 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<CompleteProject.PlayerHealth>()
#define Component_GetComponent_TisPlayerHealth_t516_m2542(__this, method) (( PlayerHealth_t516 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<CompleteProject.PlayerMovement>()
#define Component_GetComponent_TisPlayerMovement_t522_m2543(__this, method) (( PlayerMovement_t522 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInChildren<CompleteProject.PlayerShooting>()
#define Component_GetComponentInChildren_TisPlayerShooting_t523_m2544(__this, method) (( PlayerShooting_t523 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponentInChildren_TisObject_t_m2343_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
#define Component_GetComponent_TisCharacterController_t11_m1724(__this, method) (( CharacterController_t11 * (*) (Component_t434 *, const MethodInfo*))Component_GetComponent_TisObject_t_m2046_gshared)(__this, method)
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" Object_t * Object_Instantiate_TisObject_t_m2418_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define Object_Instantiate_TisObject_t_m2418(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Object_Instantiate_TisObject_t_m2418_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t88_m2546(__this /* static, unused */, p0, method) (( GameObject_t88 * (*) (Object_t * /* static, unused */, GameObject_t88 *, const MethodInfo*))Object_Instantiate_TisObject_t_m2418_gshared)(__this /* static, unused */, p0, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyAttack::.ctor()
extern "C" void EnemyAttack__ctor_m2419 (EnemyAttack_t502 * __this, const MethodInfo* method)
{
	{
		__this->___timeBetweenAttacks_2 = (0.5f);
		__this->___attackDamage_3 = ((int32_t)10);
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyAttack::Awake()
extern const MethodInfo* GameObject_GetComponent_TisPlayerHealth_t503_m2515_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral350;
extern "C" void EnemyAttack_Awake_m2420 (EnemyAttack_t502 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisPlayerHealth_t503_m2515_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483860);
		Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483842);
		_stringLiteral350 = il2cpp_codegen_string_literal_from_index(350);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t88 * L_0 = GameObject_FindGameObjectWithTag_m2225(NULL /*static, unused*/, _stringLiteral350, /*hidden argument*/NULL);
		__this->___player_5 = L_0;
		GameObject_t88 * L_1 = (__this->___player_5);
		NullCheck(L_1);
		PlayerHealth_t503 * L_2 = GameObject_GetComponent_TisPlayerHealth_t503_m2515(L_1, /*hidden argument*/GameObject_GetComponent_TisPlayerHealth_t503_m2515_MethodInfo_var);
		__this->___playerHealth_6 = L_2;
		Animator_t300 * L_3 = Component_GetComponent_TisAnimator_t300_m2308(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var);
		__this->___anim_4 = L_3;
		return;
	}
}
// System.Void EnemyAttack::OnTriggerEnter(UnityEngine.Collider)
extern "C" void EnemyAttack_OnTriggerEnter_m2421 (EnemyAttack_t502 * __this, Collider_t205 * ___other, const MethodInfo* method)
{
	{
		Collider_t205 * L_0 = ___other;
		NullCheck(L_0);
		GameObject_t88 * L_1 = Component_get_gameObject_m1967(L_0, /*hidden argument*/NULL);
		GameObject_t88 * L_2 = (__this->___player_5);
		bool L_3 = Object_op_Equality_m1697(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		__this->___playerInRange_7 = 1;
	}

IL_001d:
	{
		return;
	}
}
// System.Void EnemyAttack::OnTriggerExit(UnityEngine.Collider)
extern "C" void EnemyAttack_OnTriggerExit_m2422 (EnemyAttack_t502 * __this, Collider_t205 * ___other, const MethodInfo* method)
{
	{
		Collider_t205 * L_0 = ___other;
		NullCheck(L_0);
		GameObject_t88 * L_1 = Component_get_gameObject_m1967(L_0, /*hidden argument*/NULL);
		GameObject_t88 * L_2 = (__this->___player_5);
		bool L_3 = Object_op_Equality_m1697(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		__this->___playerInRange_7 = 0;
	}

IL_001d:
	{
		return;
	}
}
// System.Void EnemyAttack::Update()
extern Il2CppCodeGenString* _stringLiteral389;
extern "C" void EnemyAttack_Update_m2423 (EnemyAttack_t502 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral389 = il2cpp_codegen_string_literal_from_index(389);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___timer_8);
		float L_1 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___timer_8 = ((float)((float)L_0+(float)L_1));
		float L_2 = (__this->___timer_8);
		float L_3 = (__this->___timeBetweenAttacks_2);
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0034;
		}
	}
	{
		bool L_4 = (__this->___playerInRange_7);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		EnemyAttack_Attack_m2424(__this, /*hidden argument*/NULL);
	}

IL_0034:
	{
		PlayerHealth_t503 * L_5 = (__this->___playerHealth_6);
		NullCheck(L_5);
		int32_t L_6 = (L_5->___currentHealth_3);
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		Animator_t300 * L_7 = (__this->___anim_4);
		NullCheck(L_7);
		Animator_SetTrigger_m2516(L_7, _stringLiteral389, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
// System.Void EnemyAttack::Attack()
extern "C" void EnemyAttack_Attack_m2424 (EnemyAttack_t502 * __this, const MethodInfo* method)
{
	{
		__this->___timer_8 = (0.0f);
		PlayerHealth_t503 * L_0 = (__this->___playerHealth_6);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___currentHealth_3);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		PlayerHealth_t503 * L_2 = (__this->___playerHealth_6);
		int32_t L_3 = (__this->___attackDamage_3);
		NullCheck(L_2);
		PlayerHealth_TakeDamage_m2446(L_2, L_3, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void EnemyHealth::.ctor()
extern "C" void EnemyHealth__ctor_m2425 (EnemyHealth_t504 * __this, const MethodInfo* method)
{
	{
		__this->___startingHealth_2 = ((int32_t)100);
		__this->___sinkSpeed_4 = (2.5f);
		__this->___scoreValue_5 = ((int32_t)10);
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyHealth::Awake()
extern const MethodInfo* Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisParticleSystem_t355_m2517_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCapsuleCollider_t294_m2286_MethodInfo_var;
extern "C" void EnemyHealth_Awake_m2426 (EnemyHealth_t504 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483842);
		Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483837);
		Component_GetComponentInChildren_TisParticleSystem_t355_m2517_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483861);
		Component_GetComponent_TisCapsuleCollider_t294_m2286_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483838);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t300 * L_0 = Component_GetComponent_TisAnimator_t300_m2308(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var);
		__this->___anim_7 = L_0;
		AudioSource_t288 * L_1 = Component_GetComponent_TisAudioSource_t288_m2261(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var);
		__this->___enemyAudio_8 = L_1;
		ParticleSystem_t355 * L_2 = Component_GetComponentInChildren_TisParticleSystem_t355_m2517(__this, /*hidden argument*/Component_GetComponentInChildren_TisParticleSystem_t355_m2517_MethodInfo_var);
		__this->___hitParticles_9 = L_2;
		CapsuleCollider_t294 * L_3 = Component_GetComponent_TisCapsuleCollider_t294_m2286(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t294_m2286_MethodInfo_var);
		__this->___capsuleCollider_10 = L_3;
		int32_t L_4 = (__this->___startingHealth_2);
		__this->___currentHealth_3 = L_4;
		return;
	}
}
// System.Void EnemyHealth::Update()
extern "C" void EnemyHealth_Update_m2427 (EnemyHealth_t504 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isSinking_12);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		Transform_t4 * L_1 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		Vector3_t7  L_2 = Vector3_get_up_m1727(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t7  L_3 = Vector3_op_UnaryNegation_m2116(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		float L_4 = (__this->___sinkSpeed_4);
		Vector3_t7  L_5 = Vector3_op_Multiply_m1706(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t7  L_7 = Vector3_op_Multiply_m1706(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Translate_m2518(L_1, L_7, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void EnemyHealth::TakeDamage(System.Int32,UnityEngine.Vector3)
extern "C" void EnemyHealth_TakeDamage_m2428 (EnemyHealth_t504 * __this, int32_t ___amount, Vector3_t7  ___hitPoint, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isDead_11);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		AudioSource_t288 * L_1 = (__this->___enemyAudio_8);
		NullCheck(L_1);
		AudioSource_Play_m2264(L_1, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___currentHealth_3);
		int32_t L_3 = ___amount;
		__this->___currentHealth_3 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		ParticleSystem_t355 * L_4 = (__this->___hitParticles_9);
		NullCheck(L_4);
		Transform_t4 * L_5 = Component_get_transform_m1689(L_4, /*hidden argument*/NULL);
		Vector3_t7  L_6 = ___hitPoint;
		NullCheck(L_5);
		Transform_set_position_m1721(L_5, L_6, /*hidden argument*/NULL);
		ParticleSystem_t355 * L_7 = (__this->___hitParticles_9);
		NullCheck(L_7);
		ParticleSystem_Play_m2519(L_7, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___currentHealth_3);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		EnemyHealth_Death_m2429(__this, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void EnemyHealth::Death()
extern Il2CppCodeGenString* _stringLiteral390;
extern "C" void EnemyHealth_Death_m2429 (EnemyHealth_t504 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral390 = il2cpp_codegen_string_literal_from_index(390);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___isDead_11 = 1;
		CapsuleCollider_t294 * L_0 = (__this->___capsuleCollider_10);
		NullCheck(L_0);
		Collider_set_isTrigger_m2520(L_0, 1, /*hidden argument*/NULL);
		Animator_t300 * L_1 = (__this->___anim_7);
		NullCheck(L_1);
		Animator_SetTrigger_m2516(L_1, _stringLiteral390, /*hidden argument*/NULL);
		AudioSource_t288 * L_2 = (__this->___enemyAudio_8);
		AudioClip_t287 * L_3 = (__this->___deathClip_6);
		NullCheck(L_2);
		AudioSource_set_clip_m2263(L_2, L_3, /*hidden argument*/NULL);
		AudioSource_t288 * L_4 = (__this->___enemyAudio_8);
		NullCheck(L_4);
		AudioSource_Play_m2264(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyHealth::StartSinking()
extern TypeInfo* ScoreManager_t508_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisNavMeshAgent_t298_m2521_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t12_m1725_MethodInfo_var;
extern "C" void EnemyHealth_StartSinking_m2430 (EnemyHealth_t504 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreManager_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		Component_GetComponent_TisNavMeshAgent_t298_m2521_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483862);
		Component_GetComponent_TisRigidbody_t12_m1725_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	{
		NavMeshAgent_t298 * L_0 = Component_GetComponent_TisNavMeshAgent_t298_m2521(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_t298_m2521_MethodInfo_var);
		NullCheck(L_0);
		Behaviour_set_enabled_m2081(L_0, 0, /*hidden argument*/NULL);
		Rigidbody_t12 * L_1 = Component_GetComponent_TisRigidbody_t12_m1725(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t12_m1725_MethodInfo_var);
		NullCheck(L_1);
		Rigidbody_set_isKinematic_m2384(L_1, 1, /*hidden argument*/NULL);
		__this->___isSinking_12 = 1;
		int32_t L_2 = ((ScoreManager_t508_StaticFields*)ScoreManager_t508_il2cpp_TypeInfo_var->static_fields)->___score_2;
		int32_t L_3 = (__this->___scoreValue_5);
		((ScoreManager_t508_StaticFields*)ScoreManager_t508_il2cpp_TypeInfo_var->static_fields)->___score_2 = ((int32_t)((int32_t)L_2+(int32_t)L_3));
		GameObject_t88 * L_4 = Component_get_gameObject_m1967(__this, /*hidden argument*/NULL);
		Object_Destroy_m2414(NULL /*static, unused*/, L_4, (2.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyMovement::.ctor()
extern "C" void EnemyMovement__ctor_m2431 (EnemyMovement_t505 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyMovement::Awake()
extern const MethodInfo* Component_GetComponent_TisNavMeshAgent_t298_m2521_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral350;
extern "C" void EnemyMovement_Awake_m2432 (EnemyMovement_t505 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisNavMeshAgent_t298_m2521_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483862);
		_stringLiteral350 = il2cpp_codegen_string_literal_from_index(350);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t88 * L_0 = GameObject_FindGameObjectWithTag_m2225(NULL /*static, unused*/, _stringLiteral350, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t4 * L_1 = GameObject_get_transform_m1881(L_0, /*hidden argument*/NULL);
		__this->___player_2 = L_1;
		NavMeshAgent_t298 * L_2 = Component_GetComponent_TisNavMeshAgent_t298_m2521(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_t298_m2521_MethodInfo_var);
		__this->___nav_3 = L_2;
		return;
	}
}
// System.Void EnemyMovement::Update()
extern "C" void EnemyMovement_Update_m2433 (EnemyMovement_t505 * __this, const MethodInfo* method)
{
	{
		NavMeshAgent_t298 * L_0 = (__this->___nav_3);
		Transform_t4 * L_1 = (__this->___player_2);
		NullCheck(L_1);
		Vector3_t7  L_2 = Transform_get_position_m1699(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		NavMeshAgent_SetDestination_m2306(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyManager::.ctor()
extern "C" void EnemyManager__ctor_m2434 (EnemyManager_t506 * __this, const MethodInfo* method)
{
	{
		__this->___spawnTime_4 = (3.0f);
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyManager::Start()
extern Il2CppCodeGenString* _stringLiteral391;
extern "C" void EnemyManager_Start_m2435 (EnemyManager_t506 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral391 = il2cpp_codegen_string_literal_from_index(391);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___spawnTime_4);
		float L_1 = (__this->___spawnTime_4);
		MonoBehaviour_InvokeRepeating_m2522(__this, _stringLiteral391, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyManager::Spawn()
extern "C" void EnemyManager_Spawn_m2436 (EnemyManager_t506 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		PlayerHealth_t503 * L_0 = (__this->___playerHealth_2);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___currentHealth_3);
		if ((!(((float)(((float)L_1))) <= ((float)(0.0f)))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		TransformU5BU5D_t350* L_2 = (__this->___spawnPoints_5);
		NullCheck(L_2);
		int32_t L_3 = Random_Range_m2273(NULL /*static, unused*/, 0, (((int32_t)(((Array_t *)L_2)->max_length))), /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t88 * L_4 = (__this->___enemy_3);
		TransformU5BU5D_t350* L_5 = (__this->___spawnPoints_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(Transform_t4 **)(Transform_t4 **)SZArrayLdElema(L_5, L_7, sizeof(Transform_t4 *))));
		Vector3_t7  L_8 = Transform_get_position_m1699((*(Transform_t4 **)(Transform_t4 **)SZArrayLdElema(L_5, L_7, sizeof(Transform_t4 *))), /*hidden argument*/NULL);
		TransformU5BU5D_t350* L_9 = (__this->___spawnPoints_5);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(Transform_t4 **)(Transform_t4 **)SZArrayLdElema(L_9, L_11, sizeof(Transform_t4 *))));
		Quaternion_t206  L_12 = Transform_get_rotation_m1717((*(Transform_t4 **)(Transform_t4 **)SZArrayLdElema(L_9, L_11, sizeof(Transform_t4 *))), /*hidden argument*/NULL);
		Object_Instantiate_m1879(NULL /*static, unused*/, L_4, L_8, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameOverManager::.ctor()
extern "C" void GameOverManager__ctor_m2437 (GameOverManager_t507 * __this, const MethodInfo* method)
{
	{
		__this->___restartDelay_3 = (5.0f);
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameOverManager::Awake()
extern const MethodInfo* Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var;
extern "C" void GameOverManager_Awake_m2438 (GameOverManager_t507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483842);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t300 * L_0 = Component_GetComponent_TisAnimator_t300_m2308(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var);
		__this->___anim_4 = L_0;
		return;
	}
}
// System.Void GameOverManager::Update()
extern Il2CppCodeGenString* _stringLiteral392;
extern "C" void GameOverManager_Update_m2439 (GameOverManager_t507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral392 = il2cpp_codegen_string_literal_from_index(392);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerHealth_t503 * L_0 = (__this->___playerHealth_2);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___currentHealth_3);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		Animator_t300 * L_2 = (__this->___anim_4);
		NullCheck(L_2);
		Animator_SetTrigger_m2516(L_2, _stringLiteral392, /*hidden argument*/NULL);
		float L_3 = (__this->___restartTimer_5);
		float L_4 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___restartTimer_5 = ((float)((float)L_3+(float)L_4));
		float L_5 = (__this->___restartTimer_5);
		float L_6 = (__this->___restartDelay_3);
		if ((!(((float)L_5) >= ((float)L_6))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_7 = Application_get_loadedLevel_m2412(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m2413(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void ScoreManager::.ctor()
extern "C" void ScoreManager__ctor_m2440 (ScoreManager_t508 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreManager::Awake()
extern TypeInfo* ScoreManager_t508_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisText_t509_m2523_MethodInfo_var;
extern "C" void ScoreManager_Awake_m2441 (ScoreManager_t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreManager_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		Component_GetComponent_TisText_t509_m2523_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483863);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t509 * L_0 = Component_GetComponent_TisText_t509_m2523(__this, /*hidden argument*/Component_GetComponent_TisText_t509_m2523_MethodInfo_var);
		__this->___text_3 = L_0;
		((ScoreManager_t508_StaticFields*)ScoreManager_t508_il2cpp_TypeInfo_var->static_fields)->___score_2 = 0;
		return;
	}
}
// System.Void ScoreManager::Update()
extern TypeInfo* ScoreManager_t508_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t409_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral393;
extern "C" void ScoreManager_Update_m2442 (ScoreManager_t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreManager_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		Int32_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		_stringLiteral393 = il2cpp_codegen_string_literal_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t509 * L_0 = (__this->___text_3);
		int32_t L_1 = ((ScoreManager_t508_StaticFields*)ScoreManager_t508_il2cpp_TypeInfo_var->static_fields)->___score_2;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t409_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1755(NULL /*static, unused*/, _stringLiteral393, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		return;
	}
}
// System.Void PlayerHealth::.ctor()
extern "C" void PlayerHealth__ctor_m2443 (PlayerHealth_t503 * __this, const MethodInfo* method)
{
	{
		__this->___startingHealth_2 = ((int32_t)100);
		__this->___flashSpeed_7 = (5.0f);
		Color_t117  L_0 = {0};
		Color__ctor_m1741(&L_0, (1.0f), (0.0f), (0.0f), (0.1f), /*hidden argument*/NULL);
		__this->___flashColour_8 = L_0;
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerHealth::Awake()
extern const MethodInfo* Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisPlayerMovement_t511_m2524_MethodInfo_var;
extern "C" void PlayerHealth_Awake_m2444 (PlayerHealth_t503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483842);
		Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483837);
		Component_GetComponent_TisPlayerMovement_t511_m2524_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483864);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t300 * L_0 = Component_GetComponent_TisAnimator_t300_m2308(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var);
		__this->___anim_9 = L_0;
		AudioSource_t288 * L_1 = Component_GetComponent_TisAudioSource_t288_m2261(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var);
		__this->___playerAudio_10 = L_1;
		PlayerMovement_t511 * L_2 = Component_GetComponent_TisPlayerMovement_t511_m2524(__this, /*hidden argument*/Component_GetComponent_TisPlayerMovement_t511_m2524_MethodInfo_var);
		__this->___playerMovement_11 = L_2;
		int32_t L_3 = (__this->___startingHealth_2);
		__this->___currentHealth_3 = L_3;
		return;
	}
}
// System.Void PlayerHealth::Update()
extern "C" void PlayerHealth_Update_m2445 (PlayerHealth_t503 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___damaged_13);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Image_t322 * L_1 = (__this->___damageImage_5);
		Color_t117  L_2 = (__this->___flashColour_8);
		NullCheck(L_1);
		Graphic_set_color_m2525(L_1, L_2, /*hidden argument*/NULL);
		goto IL_004d;
	}

IL_0021:
	{
		Image_t322 * L_3 = (__this->___damageImage_5);
		Image_t322 * L_4 = (__this->___damageImage_5);
		NullCheck(L_4);
		Color_t117  L_5 = Graphic_get_color_m2526(L_4, /*hidden argument*/NULL);
		Color_t117  L_6 = Color_get_clear_m2527(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = (__this->___flashSpeed_7);
		float L_8 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t117  L_9 = Color_Lerp_m1872(NULL /*static, unused*/, L_5, L_6, ((float)((float)L_7*(float)L_8)), /*hidden argument*/NULL);
		NullCheck(L_3);
		Graphic_set_color_m2525(L_3, L_9, /*hidden argument*/NULL);
	}

IL_004d:
	{
		__this->___damaged_13 = 0;
		return;
	}
}
// System.Void PlayerHealth::TakeDamage(System.Int32)
extern "C" void PlayerHealth_TakeDamage_m2446 (PlayerHealth_t503 * __this, int32_t ___amount, const MethodInfo* method)
{
	{
		__this->___damaged_13 = 1;
		int32_t L_0 = (__this->___currentHealth_3);
		int32_t L_1 = ___amount;
		__this->___currentHealth_3 = ((int32_t)((int32_t)L_0-(int32_t)L_1));
		Slider_t510 * L_2 = (__this->___healthSlider_4);
		int32_t L_3 = (__this->___currentHealth_3);
		NullCheck(L_2);
		Slider_set_value_m2528(L_2, (((float)L_3)), /*hidden argument*/NULL);
		AudioSource_t288 * L_4 = (__this->___playerAudio_10);
		NullCheck(L_4);
		AudioSource_Play_m2264(L_4, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___currentHealth_3);
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		bool L_6 = (__this->___isDead_12);
		if (L_6)
		{
			goto IL_004f;
		}
	}
	{
		PlayerHealth_Death_m2447(__this, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void PlayerHealth::Death()
extern Il2CppCodeGenString* _stringLiteral394;
extern "C" void PlayerHealth_Death_m2447 (PlayerHealth_t503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral394 = il2cpp_codegen_string_literal_from_index(394);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___isDead_12 = 1;
		Animator_t300 * L_0 = (__this->___anim_9);
		NullCheck(L_0);
		Animator_SetTrigger_m2516(L_0, _stringLiteral394, /*hidden argument*/NULL);
		AudioSource_t288 * L_1 = (__this->___playerAudio_10);
		AudioClip_t287 * L_2 = (__this->___deathClip_6);
		NullCheck(L_1);
		AudioSource_set_clip_m2263(L_1, L_2, /*hidden argument*/NULL);
		AudioSource_t288 * L_3 = (__this->___playerAudio_10);
		NullCheck(L_3);
		AudioSource_Play_m2264(L_3, /*hidden argument*/NULL);
		PlayerMovement_t511 * L_4 = (__this->___playerMovement_11);
		NullCheck(L_4);
		Behaviour_set_enabled_m2081(L_4, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::.ctor()
extern "C" void PlayerMovement__ctor_m2448 (PlayerMovement_t511 * __this, const MethodInfo* method)
{
	{
		__this->___speed_2 = (6.0f);
		__this->___camRayLength_7 = (100.0f);
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::Awake()
extern TypeInfo* StringU5BU5D_t63_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t12_m1725_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral395;
extern "C" void PlayerMovement_Awake_m2449 (PlayerMovement_t511 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483842);
		Component_GetComponent_TisRigidbody_t12_m1725_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		_stringLiteral395 = il2cpp_codegen_string_literal_from_index(395);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t63* L_0 = ((StringU5BU5D_t63*)SZArrayNew(StringU5BU5D_t63_il2cpp_TypeInfo_var, 1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral395);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral395;
		int32_t L_1 = LayerMask_GetMask_m2529(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___floorMask_6 = L_1;
		Animator_t300 * L_2 = Component_GetComponent_TisAnimator_t300_m2308(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var);
		__this->___anim_4 = L_2;
		Rigidbody_t12 * L_3 = Component_GetComponent_TisRigidbody_t12_m1725(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t12_m1725_MethodInfo_var);
		__this->___playerRigidbody_5 = L_3;
		return;
	}
}
// System.Void PlayerMovement::FixedUpdate()
extern TypeInfo* Input_t457_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral354;
extern Il2CppCodeGenString* _stringLiteral355;
extern "C" void PlayerMovement_FixedUpdate_m2450 (PlayerMovement_t511 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		_stringLiteral354 = il2cpp_codegen_string_literal_from_index(354);
		_stringLiteral355 = il2cpp_codegen_string_literal_from_index(355);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t457_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxisRaw_m2334(NULL /*static, unused*/, _stringLiteral354, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxisRaw_m2334(NULL /*static, unused*/, _stringLiteral355, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		PlayerMovement_Move_m2451(__this, L_2, L_3, /*hidden argument*/NULL);
		PlayerMovement_Turning_m2452(__this, /*hidden argument*/NULL);
		float L_4 = V_0;
		float L_5 = V_1;
		PlayerMovement_Animating_m2453(__this, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::Move(System.Single,System.Single)
extern "C" void PlayerMovement_Move_m2451 (PlayerMovement_t511 * __this, float ___h, float ___v, const MethodInfo* method)
{
	{
		Vector3_t7 * L_0 = &(__this->___movement_3);
		float L_1 = ___h;
		float L_2 = ___v;
		Vector3_Set_m2530(L_0, L_1, (0.0f), L_2, /*hidden argument*/NULL);
		Vector3_t7 * L_3 = &(__this->___movement_3);
		Vector3_t7  L_4 = Vector3_get_normalized_m1705(L_3, /*hidden argument*/NULL);
		float L_5 = (__this->___speed_2);
		Vector3_t7  L_6 = Vector3_op_Multiply_m1706(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t7  L_8 = Vector3_op_Multiply_m1706(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		__this->___movement_3 = L_8;
		Rigidbody_t12 * L_9 = (__this->___playerRigidbody_5);
		Transform_t4 * L_10 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t7  L_11 = Transform_get_position_m1699(L_10, /*hidden argument*/NULL);
		Vector3_t7  L_12 = (__this->___movement_3);
		Vector3_t7  L_13 = Vector3_op_Addition_m1722(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody_MovePosition_m2531(L_9, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::Turning()
extern TypeInfo* Input_t457_il2cpp_TypeInfo_var;
extern "C" void PlayerMovement_Turning_m2452 (PlayerMovement_t511 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t277  V_0 = {0};
	RaycastHit_t279  V_1 = {0};
	Vector3_t7  V_2 = {0};
	Quaternion_t206  V_3 = {0};
	{
		Camera_t100 * L_0 = Camera_get_main_m1900(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t457_il2cpp_TypeInfo_var);
		Vector3_t7  L_1 = Input_get_mousePosition_m2093(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_t277  L_2 = Camera_ScreenPointToRay_m2094(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Ray_t277  L_3 = V_0;
		float L_4 = (__this->___camRayLength_7);
		int32_t L_5 = (__this->___floorMask_6);
		bool L_6 = Physics_Raycast_m2107(NULL /*static, unused*/, L_3, (&V_1), L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		Vector3_t7  L_7 = RaycastHit_get_point_m2096((&V_1), /*hidden argument*/NULL);
		Transform_t4 * L_8 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t7  L_9 = Transform_get_position_m1699(L_8, /*hidden argument*/NULL);
		Vector3_t7  L_10 = Vector3_op_Subtraction_m1701(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		(&V_2)->___y_2 = (0.0f);
		Vector3_t7  L_11 = V_2;
		Quaternion_t206  L_12 = Quaternion_LookRotation_m1718(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		Rigidbody_t12 * L_13 = (__this->___playerRigidbody_5);
		Quaternion_t206  L_14 = V_3;
		NullCheck(L_13);
		Rigidbody_MoveRotation_m2532(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void PlayerMovement::Animating(System.Single,System.Single)
extern Il2CppCodeGenString* _stringLiteral396;
extern "C" void PlayerMovement_Animating_m2453 (PlayerMovement_t511 * __this, float ___h, float ___v, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral396 = il2cpp_codegen_string_literal_from_index(396);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___h;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		float L_1 = ___v;
		G_B3_0 = ((((int32_t)((((float)L_1) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_0 = G_B3_0;
		Animator_t300 * L_2 = (__this->___anim_4);
		bool L_3 = V_0;
		NullCheck(L_2);
		Animator_SetBool_m2316(L_2, _stringLiteral396, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerShooting::.ctor()
extern "C" void PlayerShooting__ctor_m2454 (PlayerShooting_t512 * __this, const MethodInfo* method)
{
	{
		__this->___damagePerShot_2 = ((int32_t)20);
		__this->___timeBetweenBullets_3 = (0.15f);
		__this->___range_4 = (100.0f);
		__this->___effectsDisplayTime_13 = (0.2f);
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerShooting::Awake()
extern TypeInfo* StringU5BU5D_t63_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisParticleSystem_t355_m2533_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisLineRenderer_t513_m2534_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisLight_t341_m2535_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral397;
extern "C" void PlayerShooting_Awake_m2455 (PlayerShooting_t512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		Component_GetComponent_TisParticleSystem_t355_m2533_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483865);
		Component_GetComponent_TisLineRenderer_t513_m2534_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483866);
		Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483837);
		Component_GetComponent_TisLight_t341_m2535_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		_stringLiteral397 = il2cpp_codegen_string_literal_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t63* L_0 = ((StringU5BU5D_t63*)SZArrayNew(StringU5BU5D_t63_il2cpp_TypeInfo_var, 1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral397);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral397;
		int32_t L_1 = LayerMask_GetMask_m2529(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___shootableMask_8 = L_1;
		ParticleSystem_t355 * L_2 = Component_GetComponent_TisParticleSystem_t355_m2533(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t355_m2533_MethodInfo_var);
		__this->___gunParticles_9 = L_2;
		LineRenderer_t513 * L_3 = Component_GetComponent_TisLineRenderer_t513_m2534(__this, /*hidden argument*/Component_GetComponent_TisLineRenderer_t513_m2534_MethodInfo_var);
		__this->___gunLine_10 = L_3;
		AudioSource_t288 * L_4 = Component_GetComponent_TisAudioSource_t288_m2261(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var);
		__this->___gunAudio_11 = L_4;
		Light_t341 * L_5 = Component_GetComponent_TisLight_t341_m2535(__this, /*hidden argument*/Component_GetComponent_TisLight_t341_m2535_MethodInfo_var);
		__this->___gunLight_12 = L_5;
		return;
	}
}
// System.Void PlayerShooting::Update()
extern TypeInfo* Input_t457_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral398;
extern "C" void PlayerShooting_Update_m2456 (PlayerShooting_t512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		_stringLiteral398 = il2cpp_codegen_string_literal_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___timer_5);
		float L_1 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___timer_5 = ((float)((float)L_0+(float)L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Input_t457_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetButton_m2336(NULL /*static, unused*/, _stringLiteral398, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		float L_3 = (__this->___timer_5);
		float L_4 = (__this->___timeBetweenBullets_3);
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0038;
		}
	}
	{
		PlayerShooting_Shoot_m2458(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		float L_5 = (__this->___timer_5);
		float L_6 = (__this->___timeBetweenBullets_3);
		float L_7 = (__this->___effectsDisplayTime_13);
		if ((!(((float)L_5) >= ((float)((float)((float)L_6*(float)L_7))))))
		{
			goto IL_0056;
		}
	}
	{
		PlayerShooting_DisableEffects_m2457(__this, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void PlayerShooting::DisableEffects()
extern "C" void PlayerShooting_DisableEffects_m2457 (PlayerShooting_t512 * __this, const MethodInfo* method)
{
	{
		LineRenderer_t513 * L_0 = (__this->___gunLine_10);
		NullCheck(L_0);
		Renderer_set_enabled_m2536(L_0, 0, /*hidden argument*/NULL);
		Light_t341 * L_1 = (__this->___gunLight_12);
		NullCheck(L_1);
		Behaviour_set_enabled_m2081(L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerShooting::Shoot()
extern const MethodInfo* Component_GetComponent_TisEnemyHealth_t504_m2539_MethodInfo_var;
extern "C" void PlayerShooting_Shoot_m2458 (PlayerShooting_t512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisEnemyHealth_t504_m2539_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483868);
		s_Il2CppMethodIntialized = true;
	}
	EnemyHealth_t504 * V_0 = {0};
	{
		__this->___timer_5 = (0.0f);
		AudioSource_t288 * L_0 = (__this->___gunAudio_11);
		NullCheck(L_0);
		AudioSource_Play_m2264(L_0, /*hidden argument*/NULL);
		Light_t341 * L_1 = (__this->___gunLight_12);
		NullCheck(L_1);
		Behaviour_set_enabled_m2081(L_1, 1, /*hidden argument*/NULL);
		ParticleSystem_t355 * L_2 = (__this->___gunParticles_9);
		NullCheck(L_2);
		ParticleSystem_Stop_m2537(L_2, /*hidden argument*/NULL);
		ParticleSystem_t355 * L_3 = (__this->___gunParticles_9);
		NullCheck(L_3);
		ParticleSystem_Play_m2519(L_3, /*hidden argument*/NULL);
		LineRenderer_t513 * L_4 = (__this->___gunLine_10);
		NullCheck(L_4);
		Renderer_set_enabled_m2536(L_4, 1, /*hidden argument*/NULL);
		LineRenderer_t513 * L_5 = (__this->___gunLine_10);
		Transform_t4 * L_6 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t7  L_7 = Transform_get_position_m1699(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		LineRenderer_SetPosition_m2538(L_5, 0, L_7, /*hidden argument*/NULL);
		Ray_t277 * L_8 = &(__this->___shootRay_6);
		Transform_t4 * L_9 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t7  L_10 = Transform_get_position_m1699(L_9, /*hidden argument*/NULL);
		Ray_set_origin_m2247(L_8, L_10, /*hidden argument*/NULL);
		Ray_t277 * L_11 = &(__this->___shootRay_6);
		Transform_t4 * L_12 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t7  L_13 = Transform_get_forward_m1732(L_12, /*hidden argument*/NULL);
		Ray_set_direction_m2248(L_11, L_13, /*hidden argument*/NULL);
		Ray_t277  L_14 = (__this->___shootRay_6);
		RaycastHit_t279 * L_15 = &(__this->___shootHit_7);
		float L_16 = (__this->___range_4);
		int32_t L_17 = (__this->___shootableMask_8);
		bool L_18 = Physics_Raycast_m2107(NULL /*static, unused*/, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00f9;
		}
	}
	{
		RaycastHit_t279 * L_19 = &(__this->___shootHit_7);
		Collider_t205 * L_20 = RaycastHit_get_collider_m2098(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		EnemyHealth_t504 * L_21 = Component_GetComponent_TisEnemyHealth_t504_m2539(L_20, /*hidden argument*/Component_GetComponent_TisEnemyHealth_t504_m2539_MethodInfo_var);
		V_0 = L_21;
		EnemyHealth_t504 * L_22 = V_0;
		bool L_23 = Object_op_Inequality_m1694(NULL /*static, unused*/, L_22, (Object_t328 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00dd;
		}
	}
	{
		EnemyHealth_t504 * L_24 = V_0;
		int32_t L_25 = (__this->___damagePerShot_2);
		RaycastHit_t279 * L_26 = &(__this->___shootHit_7);
		Vector3_t7  L_27 = RaycastHit_get_point_m2096(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		EnemyHealth_TakeDamage_m2428(L_24, L_25, L_27, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		LineRenderer_t513 * L_28 = (__this->___gunLine_10);
		RaycastHit_t279 * L_29 = &(__this->___shootHit_7);
		Vector3_t7  L_30 = RaycastHit_get_point_m2096(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		LineRenderer_SetPosition_m2538(L_28, 1, L_30, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_00f9:
	{
		LineRenderer_t513 * L_31 = (__this->___gunLine_10);
		Ray_t277 * L_32 = &(__this->___shootRay_6);
		Vector3_t7  L_33 = Ray_get_origin_m1857(L_32, /*hidden argument*/NULL);
		Ray_t277 * L_34 = &(__this->___shootRay_6);
		Vector3_t7  L_35 = Ray_get_direction_m1856(L_34, /*hidden argument*/NULL);
		float L_36 = (__this->___range_4);
		Vector3_t7  L_37 = Vector3_op_Multiply_m1706(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		Vector3_t7  L_38 = Vector3_op_Addition_m1722(NULL /*static, unused*/, L_33, L_37, /*hidden argument*/NULL);
		NullCheck(L_31);
		LineRenderer_SetPosition_m2538(L_31, 1, L_38, /*hidden argument*/NULL);
	}

IL_012b:
	{
		return;
	}
}
// System.Void CompleteProject.CameraFollow::.ctor()
extern "C" void CameraFollow__ctor_m2459 (CameraFollow_t514 * __this, const MethodInfo* method)
{
	{
		__this->___smoothing_3 = (5.0f);
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.CameraFollow::Start()
extern "C" void CameraFollow_Start_m2460 (CameraFollow_t514 * __this, const MethodInfo* method)
{
	{
		Transform_t4 * L_0 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t7  L_1 = Transform_get_position_m1699(L_0, /*hidden argument*/NULL);
		Transform_t4 * L_2 = (__this->___target_2);
		NullCheck(L_2);
		Vector3_t7  L_3 = Transform_get_position_m1699(L_2, /*hidden argument*/NULL);
		Vector3_t7  L_4 = Vector3_op_Subtraction_m1701(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		__this->___offset_4 = L_4;
		return;
	}
}
// System.Void CompleteProject.CameraFollow::FixedUpdate()
extern "C" void CameraFollow_FixedUpdate_m2461 (CameraFollow_t514 * __this, const MethodInfo* method)
{
	Vector3_t7  V_0 = {0};
	{
		Transform_t4 * L_0 = (__this->___target_2);
		NullCheck(L_0);
		Vector3_t7  L_1 = Transform_get_position_m1699(L_0, /*hidden argument*/NULL);
		Vector3_t7  L_2 = (__this->___offset_4);
		Vector3_t7  L_3 = Vector3_op_Addition_m1722(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Transform_t4 * L_4 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		Transform_t4 * L_5 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t7  L_6 = Transform_get_position_m1699(L_5, /*hidden argument*/NULL);
		Vector3_t7  L_7 = V_0;
		float L_8 = (__this->___smoothing_3);
		float L_9 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t7  L_10 = Vector3_Lerp_m1708(NULL /*static, unused*/, L_6, L_7, ((float)((float)L_8*(float)L_9)), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m1721(L_4, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.EnemyAttack::.ctor()
extern "C" void EnemyAttack__ctor_m2462 (EnemyAttack_t515 * __this, const MethodInfo* method)
{
	{
		__this->___timeBetweenAttacks_2 = (0.5f);
		__this->___attackDamage_3 = ((int32_t)10);
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.EnemyAttack::Awake()
extern const MethodInfo* GameObject_GetComponent_TisPlayerHealth_t516_m2540_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisEnemyHealth_t517_m2541_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral350;
extern "C" void EnemyAttack_Awake_m2463 (EnemyAttack_t515 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisPlayerHealth_t516_m2540_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483869);
		Component_GetComponent_TisEnemyHealth_t517_m2541_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483870);
		Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483842);
		_stringLiteral350 = il2cpp_codegen_string_literal_from_index(350);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t88 * L_0 = GameObject_FindGameObjectWithTag_m2225(NULL /*static, unused*/, _stringLiteral350, /*hidden argument*/NULL);
		__this->___player_5 = L_0;
		GameObject_t88 * L_1 = (__this->___player_5);
		NullCheck(L_1);
		PlayerHealth_t516 * L_2 = GameObject_GetComponent_TisPlayerHealth_t516_m2540(L_1, /*hidden argument*/GameObject_GetComponent_TisPlayerHealth_t516_m2540_MethodInfo_var);
		__this->___playerHealth_6 = L_2;
		EnemyHealth_t517 * L_3 = Component_GetComponent_TisEnemyHealth_t517_m2541(__this, /*hidden argument*/Component_GetComponent_TisEnemyHealth_t517_m2541_MethodInfo_var);
		__this->___enemyHealth_7 = L_3;
		Animator_t300 * L_4 = Component_GetComponent_TisAnimator_t300_m2308(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var);
		__this->___anim_4 = L_4;
		return;
	}
}
// System.Void CompleteProject.EnemyAttack::OnTriggerEnter(UnityEngine.Collider)
extern "C" void EnemyAttack_OnTriggerEnter_m2464 (EnemyAttack_t515 * __this, Collider_t205 * ___other, const MethodInfo* method)
{
	{
		Collider_t205 * L_0 = ___other;
		NullCheck(L_0);
		GameObject_t88 * L_1 = Component_get_gameObject_m1967(L_0, /*hidden argument*/NULL);
		GameObject_t88 * L_2 = (__this->___player_5);
		bool L_3 = Object_op_Equality_m1697(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		__this->___playerInRange_8 = 1;
	}

IL_001d:
	{
		return;
	}
}
// System.Void CompleteProject.EnemyAttack::OnTriggerExit(UnityEngine.Collider)
extern "C" void EnemyAttack_OnTriggerExit_m2465 (EnemyAttack_t515 * __this, Collider_t205 * ___other, const MethodInfo* method)
{
	{
		Collider_t205 * L_0 = ___other;
		NullCheck(L_0);
		GameObject_t88 * L_1 = Component_get_gameObject_m1967(L_0, /*hidden argument*/NULL);
		GameObject_t88 * L_2 = (__this->___player_5);
		bool L_3 = Object_op_Equality_m1697(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		__this->___playerInRange_8 = 0;
	}

IL_001d:
	{
		return;
	}
}
// System.Void CompleteProject.EnemyAttack::Update()
extern Il2CppCodeGenString* _stringLiteral389;
extern "C" void EnemyAttack_Update_m2466 (EnemyAttack_t515 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral389 = il2cpp_codegen_string_literal_from_index(389);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___timer_9);
		float L_1 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___timer_9 = ((float)((float)L_0+(float)L_1));
		float L_2 = (__this->___timer_9);
		float L_3 = (__this->___timeBetweenAttacks_2);
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0045;
		}
	}
	{
		bool L_4 = (__this->___playerInRange_8);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		EnemyHealth_t517 * L_5 = (__this->___enemyHealth_7);
		NullCheck(L_5);
		int32_t L_6 = (L_5->___currentHealth_3);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		EnemyAttack_Attack_m2467(__this, /*hidden argument*/NULL);
	}

IL_0045:
	{
		PlayerHealth_t516 * L_7 = (__this->___playerHealth_6);
		NullCheck(L_7);
		int32_t L_8 = (L_7->___currentHealth_3);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		Animator_t300 * L_9 = (__this->___anim_4);
		NullCheck(L_9);
		Animator_SetTrigger_m2516(L_9, _stringLiteral389, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.Void CompleteProject.EnemyAttack::Attack()
extern "C" void EnemyAttack_Attack_m2467 (EnemyAttack_t515 * __this, const MethodInfo* method)
{
	{
		__this->___timer_9 = (0.0f);
		PlayerHealth_t516 * L_0 = (__this->___playerHealth_6);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___currentHealth_3);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		PlayerHealth_t516 * L_2 = (__this->___playerHealth_6);
		int32_t L_3 = (__this->___attackDamage_3);
		NullCheck(L_2);
		PlayerHealth_TakeDamage_m2489(L_2, L_3, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void CompleteProject.EnemyHealth::.ctor()
extern "C" void EnemyHealth__ctor_m2468 (EnemyHealth_t517 * __this, const MethodInfo* method)
{
	{
		__this->___startingHealth_2 = ((int32_t)100);
		__this->___sinkSpeed_4 = (2.5f);
		__this->___scoreValue_5 = ((int32_t)10);
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.EnemyHealth::Awake()
extern const MethodInfo* Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisParticleSystem_t355_m2517_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCapsuleCollider_t294_m2286_MethodInfo_var;
extern "C" void EnemyHealth_Awake_m2469 (EnemyHealth_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483842);
		Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483837);
		Component_GetComponentInChildren_TisParticleSystem_t355_m2517_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483861);
		Component_GetComponent_TisCapsuleCollider_t294_m2286_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483838);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t300 * L_0 = Component_GetComponent_TisAnimator_t300_m2308(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var);
		__this->___anim_7 = L_0;
		AudioSource_t288 * L_1 = Component_GetComponent_TisAudioSource_t288_m2261(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var);
		__this->___enemyAudio_8 = L_1;
		ParticleSystem_t355 * L_2 = Component_GetComponentInChildren_TisParticleSystem_t355_m2517(__this, /*hidden argument*/Component_GetComponentInChildren_TisParticleSystem_t355_m2517_MethodInfo_var);
		__this->___hitParticles_9 = L_2;
		CapsuleCollider_t294 * L_3 = Component_GetComponent_TisCapsuleCollider_t294_m2286(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t294_m2286_MethodInfo_var);
		__this->___capsuleCollider_10 = L_3;
		int32_t L_4 = (__this->___startingHealth_2);
		__this->___currentHealth_3 = L_4;
		return;
	}
}
// System.Void CompleteProject.EnemyHealth::Update()
extern "C" void EnemyHealth_Update_m2470 (EnemyHealth_t517 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isSinking_12);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		Transform_t4 * L_1 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		Vector3_t7  L_2 = Vector3_get_up_m1727(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t7  L_3 = Vector3_op_UnaryNegation_m2116(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		float L_4 = (__this->___sinkSpeed_4);
		Vector3_t7  L_5 = Vector3_op_Multiply_m1706(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t7  L_7 = Vector3_op_Multiply_m1706(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Translate_m2518(L_1, L_7, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void CompleteProject.EnemyHealth::TakeDamage(System.Int32,UnityEngine.Vector3)
extern "C" void EnemyHealth_TakeDamage_m2471 (EnemyHealth_t517 * __this, int32_t ___amount, Vector3_t7  ___hitPoint, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isDead_11);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		AudioSource_t288 * L_1 = (__this->___enemyAudio_8);
		NullCheck(L_1);
		AudioSource_Play_m2264(L_1, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___currentHealth_3);
		int32_t L_3 = ___amount;
		__this->___currentHealth_3 = ((int32_t)((int32_t)L_2-(int32_t)L_3));
		ParticleSystem_t355 * L_4 = (__this->___hitParticles_9);
		NullCheck(L_4);
		Transform_t4 * L_5 = Component_get_transform_m1689(L_4, /*hidden argument*/NULL);
		Vector3_t7  L_6 = ___hitPoint;
		NullCheck(L_5);
		Transform_set_position_m1721(L_5, L_6, /*hidden argument*/NULL);
		ParticleSystem_t355 * L_7 = (__this->___hitParticles_9);
		NullCheck(L_7);
		ParticleSystem_Play_m2519(L_7, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___currentHealth_3);
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		EnemyHealth_Death_m2472(__this, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void CompleteProject.EnemyHealth::Death()
extern Il2CppCodeGenString* _stringLiteral390;
extern "C" void EnemyHealth_Death_m2472 (EnemyHealth_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral390 = il2cpp_codegen_string_literal_from_index(390);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___isDead_11 = 1;
		CapsuleCollider_t294 * L_0 = (__this->___capsuleCollider_10);
		NullCheck(L_0);
		Collider_set_isTrigger_m2520(L_0, 1, /*hidden argument*/NULL);
		Animator_t300 * L_1 = (__this->___anim_7);
		NullCheck(L_1);
		Animator_SetTrigger_m2516(L_1, _stringLiteral390, /*hidden argument*/NULL);
		AudioSource_t288 * L_2 = (__this->___enemyAudio_8);
		AudioClip_t287 * L_3 = (__this->___deathClip_6);
		NullCheck(L_2);
		AudioSource_set_clip_m2263(L_2, L_3, /*hidden argument*/NULL);
		AudioSource_t288 * L_4 = (__this->___enemyAudio_8);
		NullCheck(L_4);
		AudioSource_Play_m2264(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.EnemyHealth::StartSinking()
extern TypeInfo* ScoreManager_t521_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisNavMeshAgent_t298_m2521_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t12_m1725_MethodInfo_var;
extern "C" void EnemyHealth_StartSinking_m2473 (EnemyHealth_t517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreManager_t521_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(353);
		Component_GetComponent_TisNavMeshAgent_t298_m2521_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483862);
		Component_GetComponent_TisRigidbody_t12_m1725_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	{
		NavMeshAgent_t298 * L_0 = Component_GetComponent_TisNavMeshAgent_t298_m2521(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_t298_m2521_MethodInfo_var);
		NullCheck(L_0);
		Behaviour_set_enabled_m2081(L_0, 0, /*hidden argument*/NULL);
		Rigidbody_t12 * L_1 = Component_GetComponent_TisRigidbody_t12_m1725(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t12_m1725_MethodInfo_var);
		NullCheck(L_1);
		Rigidbody_set_isKinematic_m2384(L_1, 1, /*hidden argument*/NULL);
		__this->___isSinking_12 = 1;
		int32_t L_2 = ((ScoreManager_t521_StaticFields*)ScoreManager_t521_il2cpp_TypeInfo_var->static_fields)->___score_2;
		int32_t L_3 = (__this->___scoreValue_5);
		((ScoreManager_t521_StaticFields*)ScoreManager_t521_il2cpp_TypeInfo_var->static_fields)->___score_2 = ((int32_t)((int32_t)L_2+(int32_t)L_3));
		GameObject_t88 * L_4 = Component_get_gameObject_m1967(__this, /*hidden argument*/NULL);
		Object_Destroy_m2414(NULL /*static, unused*/, L_4, (2.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.EnemyMovement::.ctor()
extern "C" void EnemyMovement__ctor_m2474 (EnemyMovement_t518 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.EnemyMovement::Awake()
extern const MethodInfo* Component_GetComponent_TisPlayerHealth_t516_m2542_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisEnemyHealth_t517_m2541_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisNavMeshAgent_t298_m2521_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral350;
extern "C" void EnemyMovement_Awake_m2475 (EnemyMovement_t518 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisPlayerHealth_t516_m2542_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483871);
		Component_GetComponent_TisEnemyHealth_t517_m2541_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483870);
		Component_GetComponent_TisNavMeshAgent_t298_m2521_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483862);
		_stringLiteral350 = il2cpp_codegen_string_literal_from_index(350);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t88 * L_0 = GameObject_FindGameObjectWithTag_m2225(NULL /*static, unused*/, _stringLiteral350, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t4 * L_1 = GameObject_get_transform_m1881(L_0, /*hidden argument*/NULL);
		__this->___player_2 = L_1;
		Transform_t4 * L_2 = (__this->___player_2);
		NullCheck(L_2);
		PlayerHealth_t516 * L_3 = Component_GetComponent_TisPlayerHealth_t516_m2542(L_2, /*hidden argument*/Component_GetComponent_TisPlayerHealth_t516_m2542_MethodInfo_var);
		__this->___playerHealth_3 = L_3;
		EnemyHealth_t517 * L_4 = Component_GetComponent_TisEnemyHealth_t517_m2541(__this, /*hidden argument*/Component_GetComponent_TisEnemyHealth_t517_m2541_MethodInfo_var);
		__this->___enemyHealth_4 = L_4;
		NavMeshAgent_t298 * L_5 = Component_GetComponent_TisNavMeshAgent_t298_m2521(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_t298_m2521_MethodInfo_var);
		__this->___nav_5 = L_5;
		return;
	}
}
// System.Void CompleteProject.EnemyMovement::Update()
extern "C" void EnemyMovement_Update_m2476 (EnemyMovement_t518 * __this, const MethodInfo* method)
{
	{
		EnemyHealth_t517 * L_0 = (__this->___enemyHealth_4);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___currentHealth_3);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		PlayerHealth_t516 * L_2 = (__this->___playerHealth_3);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___currentHealth_3);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		NavMeshAgent_t298 * L_4 = (__this->___nav_5);
		Transform_t4 * L_5 = (__this->___player_2);
		NullCheck(L_5);
		Vector3_t7  L_6 = Transform_get_position_m1699(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		NavMeshAgent_SetDestination_m2306(L_4, L_6, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_003e:
	{
		NavMeshAgent_t298 * L_7 = (__this->___nav_5);
		NullCheck(L_7);
		Behaviour_set_enabled_m2081(L_7, 0, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void CompleteProject.EnemyManager::.ctor()
extern "C" void EnemyManager__ctor_m2477 (EnemyManager_t519 * __this, const MethodInfo* method)
{
	{
		__this->___spawnTime_4 = (3.0f);
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.EnemyManager::Start()
extern Il2CppCodeGenString* _stringLiteral391;
extern "C" void EnemyManager_Start_m2478 (EnemyManager_t519 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral391 = il2cpp_codegen_string_literal_from_index(391);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___spawnTime_4);
		float L_1 = (__this->___spawnTime_4);
		MonoBehaviour_InvokeRepeating_m2522(__this, _stringLiteral391, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.EnemyManager::Spawn()
extern "C" void EnemyManager_Spawn_m2479 (EnemyManager_t519 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		PlayerHealth_t516 * L_0 = (__this->___playerHealth_2);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___currentHealth_3);
		if ((!(((float)(((float)L_1))) <= ((float)(0.0f)))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		TransformU5BU5D_t350* L_2 = (__this->___spawnPoints_5);
		NullCheck(L_2);
		int32_t L_3 = Random_Range_m2273(NULL /*static, unused*/, 0, (((int32_t)(((Array_t *)L_2)->max_length))), /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t88 * L_4 = (__this->___enemy_3);
		TransformU5BU5D_t350* L_5 = (__this->___spawnPoints_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(Transform_t4 **)(Transform_t4 **)SZArrayLdElema(L_5, L_7, sizeof(Transform_t4 *))));
		Vector3_t7  L_8 = Transform_get_position_m1699((*(Transform_t4 **)(Transform_t4 **)SZArrayLdElema(L_5, L_7, sizeof(Transform_t4 *))), /*hidden argument*/NULL);
		TransformU5BU5D_t350* L_9 = (__this->___spawnPoints_5);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(Transform_t4 **)(Transform_t4 **)SZArrayLdElema(L_9, L_11, sizeof(Transform_t4 *))));
		Quaternion_t206  L_12 = Transform_get_rotation_m1717((*(Transform_t4 **)(Transform_t4 **)SZArrayLdElema(L_9, L_11, sizeof(Transform_t4 *))), /*hidden argument*/NULL);
		Object_Instantiate_m1879(NULL /*static, unused*/, L_4, L_8, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.GameOverManager::.ctor()
extern "C" void GameOverManager__ctor_m2480 (GameOverManager_t520 * __this, const MethodInfo* method)
{
	{
		__this->___restartDelay_3 = (5.0f);
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.GameOverManager::Awake()
extern const MethodInfo* Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var;
extern "C" void GameOverManager_Awake_m2481 (GameOverManager_t520 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483842);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t300 * L_0 = Component_GetComponent_TisAnimator_t300_m2308(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var);
		__this->___anim_4 = L_0;
		return;
	}
}
// System.Void CompleteProject.GameOverManager::Update()
extern Il2CppCodeGenString* _stringLiteral392;
extern "C" void GameOverManager_Update_m2482 (GameOverManager_t520 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral392 = il2cpp_codegen_string_literal_from_index(392);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlayerHealth_t516 * L_0 = (__this->___playerHealth_2);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___currentHealth_3);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		Animator_t300 * L_2 = (__this->___anim_4);
		NullCheck(L_2);
		Animator_SetTrigger_m2516(L_2, _stringLiteral392, /*hidden argument*/NULL);
		float L_3 = (__this->___restartTimer_5);
		float L_4 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___restartTimer_5 = ((float)((float)L_3+(float)L_4));
		float L_5 = (__this->___restartTimer_5);
		float L_6 = (__this->___restartDelay_3);
		if ((!(((float)L_5) >= ((float)L_6))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_7 = Application_get_loadedLevel_m2412(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m2413(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void CompleteProject.ScoreManager::.ctor()
extern "C" void ScoreManager__ctor_m2483 (ScoreManager_t521 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.ScoreManager::Awake()
extern TypeInfo* ScoreManager_t521_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisText_t509_m2523_MethodInfo_var;
extern "C" void ScoreManager_Awake_m2484 (ScoreManager_t521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreManager_t521_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(353);
		Component_GetComponent_TisText_t509_m2523_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483863);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t509 * L_0 = Component_GetComponent_TisText_t509_m2523(__this, /*hidden argument*/Component_GetComponent_TisText_t509_m2523_MethodInfo_var);
		__this->___text_3 = L_0;
		((ScoreManager_t521_StaticFields*)ScoreManager_t521_il2cpp_TypeInfo_var->static_fields)->___score_2 = 0;
		return;
	}
}
// System.Void CompleteProject.ScoreManager::Update()
extern TypeInfo* ScoreManager_t521_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t409_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral393;
extern "C" void ScoreManager_Update_m2485 (ScoreManager_t521 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreManager_t521_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(353);
		Int32_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		_stringLiteral393 = il2cpp_codegen_string_literal_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t509 * L_0 = (__this->___text_3);
		int32_t L_1 = ((ScoreManager_t521_StaticFields*)ScoreManager_t521_il2cpp_TypeInfo_var->static_fields)->___score_2;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t409_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1755(NULL /*static, unused*/, _stringLiteral393, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		return;
	}
}
// System.Void CompleteProject.PlayerHealth::.ctor()
extern "C" void PlayerHealth__ctor_m2486 (PlayerHealth_t516 * __this, const MethodInfo* method)
{
	{
		__this->___startingHealth_2 = ((int32_t)100);
		__this->___flashSpeed_7 = (5.0f);
		Color_t117  L_0 = {0};
		Color__ctor_m1741(&L_0, (1.0f), (0.0f), (0.0f), (0.1f), /*hidden argument*/NULL);
		__this->___flashColour_8 = L_0;
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerHealth::Awake()
extern const MethodInfo* Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisPlayerMovement_t522_m2543_MethodInfo_var;
extern const MethodInfo* Component_GetComponentInChildren_TisPlayerShooting_t523_m2544_MethodInfo_var;
extern "C" void PlayerHealth_Awake_m2487 (PlayerHealth_t516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483842);
		Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483837);
		Component_GetComponent_TisPlayerMovement_t522_m2543_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483872);
		Component_GetComponentInChildren_TisPlayerShooting_t523_m2544_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483873);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animator_t300 * L_0 = Component_GetComponent_TisAnimator_t300_m2308(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var);
		__this->___anim_9 = L_0;
		AudioSource_t288 * L_1 = Component_GetComponent_TisAudioSource_t288_m2261(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var);
		__this->___playerAudio_10 = L_1;
		PlayerMovement_t522 * L_2 = Component_GetComponent_TisPlayerMovement_t522_m2543(__this, /*hidden argument*/Component_GetComponent_TisPlayerMovement_t522_m2543_MethodInfo_var);
		__this->___playerMovement_11 = L_2;
		PlayerShooting_t523 * L_3 = Component_GetComponentInChildren_TisPlayerShooting_t523_m2544(__this, /*hidden argument*/Component_GetComponentInChildren_TisPlayerShooting_t523_m2544_MethodInfo_var);
		__this->___playerShooting_12 = L_3;
		int32_t L_4 = (__this->___startingHealth_2);
		__this->___currentHealth_3 = L_4;
		return;
	}
}
// System.Void CompleteProject.PlayerHealth::Update()
extern "C" void PlayerHealth_Update_m2488 (PlayerHealth_t516 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___damaged_14);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Image_t322 * L_1 = (__this->___damageImage_5);
		Color_t117  L_2 = (__this->___flashColour_8);
		NullCheck(L_1);
		Graphic_set_color_m2525(L_1, L_2, /*hidden argument*/NULL);
		goto IL_004d;
	}

IL_0021:
	{
		Image_t322 * L_3 = (__this->___damageImage_5);
		Image_t322 * L_4 = (__this->___damageImage_5);
		NullCheck(L_4);
		Color_t117  L_5 = Graphic_get_color_m2526(L_4, /*hidden argument*/NULL);
		Color_t117  L_6 = Color_get_clear_m2527(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = (__this->___flashSpeed_7);
		float L_8 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		Color_t117  L_9 = Color_Lerp_m1872(NULL /*static, unused*/, L_5, L_6, ((float)((float)L_7*(float)L_8)), /*hidden argument*/NULL);
		NullCheck(L_3);
		Graphic_set_color_m2525(L_3, L_9, /*hidden argument*/NULL);
	}

IL_004d:
	{
		__this->___damaged_14 = 0;
		return;
	}
}
// System.Void CompleteProject.PlayerHealth::TakeDamage(System.Int32)
extern "C" void PlayerHealth_TakeDamage_m2489 (PlayerHealth_t516 * __this, int32_t ___amount, const MethodInfo* method)
{
	{
		__this->___damaged_14 = 1;
		int32_t L_0 = (__this->___currentHealth_3);
		int32_t L_1 = ___amount;
		__this->___currentHealth_3 = ((int32_t)((int32_t)L_0-(int32_t)L_1));
		Slider_t510 * L_2 = (__this->___healthSlider_4);
		int32_t L_3 = (__this->___currentHealth_3);
		NullCheck(L_2);
		Slider_set_value_m2528(L_2, (((float)L_3)), /*hidden argument*/NULL);
		AudioSource_t288 * L_4 = (__this->___playerAudio_10);
		NullCheck(L_4);
		AudioSource_Play_m2264(L_4, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___currentHealth_3);
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		bool L_6 = (__this->___isDead_13);
		if (L_6)
		{
			goto IL_004f;
		}
	}
	{
		PlayerHealth_Death_m2490(__this, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void CompleteProject.PlayerHealth::Death()
extern Il2CppCodeGenString* _stringLiteral394;
extern "C" void PlayerHealth_Death_m2490 (PlayerHealth_t516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral394 = il2cpp_codegen_string_literal_from_index(394);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___isDead_13 = 1;
		PlayerShooting_t523 * L_0 = (__this->___playerShooting_12);
		NullCheck(L_0);
		PlayerShooting_DisableEffects_m2500(L_0, /*hidden argument*/NULL);
		Animator_t300 * L_1 = (__this->___anim_9);
		NullCheck(L_1);
		Animator_SetTrigger_m2516(L_1, _stringLiteral394, /*hidden argument*/NULL);
		AudioSource_t288 * L_2 = (__this->___playerAudio_10);
		AudioClip_t287 * L_3 = (__this->___deathClip_6);
		NullCheck(L_2);
		AudioSource_set_clip_m2263(L_2, L_3, /*hidden argument*/NULL);
		AudioSource_t288 * L_4 = (__this->___playerAudio_10);
		NullCheck(L_4);
		AudioSource_Play_m2264(L_4, /*hidden argument*/NULL);
		PlayerMovement_t522 * L_5 = (__this->___playerMovement_11);
		NullCheck(L_5);
		Behaviour_set_enabled_m2081(L_5, 0, /*hidden argument*/NULL);
		PlayerShooting_t523 * L_6 = (__this->___playerShooting_12);
		NullCheck(L_6);
		Behaviour_set_enabled_m2081(L_6, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerMovement::.ctor()
extern "C" void PlayerMovement__ctor_m2491 (PlayerMovement_t522 * __this, const MethodInfo* method)
{
	{
		__this->___speed_2 = (6.0f);
		__this->___camRayLength_7 = (100.0f);
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerMovement::Awake()
extern TypeInfo* StringU5BU5D_t63_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t12_m1725_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral395;
extern "C" void PlayerMovement_Awake_m2492 (PlayerMovement_t522 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483842);
		Component_GetComponent_TisRigidbody_t12_m1725_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		_stringLiteral395 = il2cpp_codegen_string_literal_from_index(395);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t63* L_0 = ((StringU5BU5D_t63*)SZArrayNew(StringU5BU5D_t63_il2cpp_TypeInfo_var, 1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral395);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral395;
		int32_t L_1 = LayerMask_GetMask_m2529(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___floorMask_6 = L_1;
		Animator_t300 * L_2 = Component_GetComponent_TisAnimator_t300_m2308(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t300_m2308_MethodInfo_var);
		__this->___anim_4 = L_2;
		Rigidbody_t12 * L_3 = Component_GetComponent_TisRigidbody_t12_m1725(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t12_m1725_MethodInfo_var);
		__this->___playerRigidbody_5 = L_3;
		return;
	}
}
// System.Void CompleteProject.PlayerMovement::FixedUpdate()
extern TypeInfo* Input_t457_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral354;
extern Il2CppCodeGenString* _stringLiteral355;
extern "C" void PlayerMovement_FixedUpdate_m2493 (PlayerMovement_t522 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		_stringLiteral354 = il2cpp_codegen_string_literal_from_index(354);
		_stringLiteral355 = il2cpp_codegen_string_literal_from_index(355);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t457_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxisRaw_m2334(NULL /*static, unused*/, _stringLiteral354, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxisRaw_m2334(NULL /*static, unused*/, _stringLiteral355, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		PlayerMovement_Move_m2494(__this, L_2, L_3, /*hidden argument*/NULL);
		PlayerMovement_Turning_m2495(__this, /*hidden argument*/NULL);
		float L_4 = V_0;
		float L_5 = V_1;
		PlayerMovement_Animating_m2496(__this, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerMovement::Move(System.Single,System.Single)
extern "C" void PlayerMovement_Move_m2494 (PlayerMovement_t522 * __this, float ___h, float ___v, const MethodInfo* method)
{
	{
		Vector3_t7 * L_0 = &(__this->___movement_3);
		float L_1 = ___h;
		float L_2 = ___v;
		Vector3_Set_m2530(L_0, L_1, (0.0f), L_2, /*hidden argument*/NULL);
		Vector3_t7 * L_3 = &(__this->___movement_3);
		Vector3_t7  L_4 = Vector3_get_normalized_m1705(L_3, /*hidden argument*/NULL);
		float L_5 = (__this->___speed_2);
		Vector3_t7  L_6 = Vector3_op_Multiply_m1706(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t7  L_8 = Vector3_op_Multiply_m1706(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		__this->___movement_3 = L_8;
		Rigidbody_t12 * L_9 = (__this->___playerRigidbody_5);
		Transform_t4 * L_10 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t7  L_11 = Transform_get_position_m1699(L_10, /*hidden argument*/NULL);
		Vector3_t7  L_12 = (__this->___movement_3);
		Vector3_t7  L_13 = Vector3_op_Addition_m1722(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody_MovePosition_m2531(L_9, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerMovement::Turning()
extern TypeInfo* Input_t457_il2cpp_TypeInfo_var;
extern "C" void PlayerMovement_Turning_m2495 (PlayerMovement_t522 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t277  V_0 = {0};
	RaycastHit_t279  V_1 = {0};
	Vector3_t7  V_2 = {0};
	Quaternion_t206  V_3 = {0};
	{
		Camera_t100 * L_0 = Camera_get_main_m1900(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t457_il2cpp_TypeInfo_var);
		Vector3_t7  L_1 = Input_get_mousePosition_m2093(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_t277  L_2 = Camera_ScreenPointToRay_m2094(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Ray_t277  L_3 = V_0;
		float L_4 = (__this->___camRayLength_7);
		int32_t L_5 = (__this->___floorMask_6);
		bool L_6 = Physics_Raycast_m2107(NULL /*static, unused*/, L_3, (&V_1), L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		Vector3_t7  L_7 = RaycastHit_get_point_m2096((&V_1), /*hidden argument*/NULL);
		Transform_t4 * L_8 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t7  L_9 = Transform_get_position_m1699(L_8, /*hidden argument*/NULL);
		Vector3_t7  L_10 = Vector3_op_Subtraction_m1701(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		(&V_2)->___y_2 = (0.0f);
		Vector3_t7  L_11 = V_2;
		Quaternion_t206  L_12 = Quaternion_LookRotation_m1718(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		Rigidbody_t12 * L_13 = (__this->___playerRigidbody_5);
		Quaternion_t206  L_14 = V_3;
		NullCheck(L_13);
		Rigidbody_MoveRotation_m2532(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void CompleteProject.PlayerMovement::Animating(System.Single,System.Single)
extern Il2CppCodeGenString* _stringLiteral396;
extern "C" void PlayerMovement_Animating_m2496 (PlayerMovement_t522 * __this, float ___h, float ___v, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral396 = il2cpp_codegen_string_literal_from_index(396);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___h;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		float L_1 = ___v;
		G_B3_0 = ((((int32_t)((((float)L_1) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_0 = G_B3_0;
		Animator_t300 * L_2 = (__this->___anim_4);
		bool L_3 = V_0;
		NullCheck(L_2);
		Animator_SetBool_m2316(L_2, _stringLiteral396, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerShooting::.ctor()
extern "C" void PlayerShooting__ctor_m2497 (PlayerShooting_t523 * __this, const MethodInfo* method)
{
	{
		__this->___damagePerShot_2 = ((int32_t)20);
		__this->___timeBetweenBullets_3 = (0.15f);
		__this->___range_4 = (100.0f);
		__this->___effectsDisplayTime_13 = (0.2f);
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerShooting::Awake()
extern TypeInfo* StringU5BU5D_t63_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisParticleSystem_t355_m2533_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisLineRenderer_t513_m2534_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisLight_t341_m2535_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral397;
extern "C" void PlayerShooting_Awake_m2498 (PlayerShooting_t523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t63_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(73);
		Component_GetComponent_TisParticleSystem_t355_m2533_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483865);
		Component_GetComponent_TisLineRenderer_t513_m2534_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483866);
		Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483837);
		Component_GetComponent_TisLight_t341_m2535_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483867);
		_stringLiteral397 = il2cpp_codegen_string_literal_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t63* L_0 = ((StringU5BU5D_t63*)SZArrayNew(StringU5BU5D_t63_il2cpp_TypeInfo_var, 1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, _stringLiteral397);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0, sizeof(String_t*))) = (String_t*)_stringLiteral397;
		int32_t L_1 = LayerMask_GetMask_m2529(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___shootableMask_8 = L_1;
		ParticleSystem_t355 * L_2 = Component_GetComponent_TisParticleSystem_t355_m2533(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t355_m2533_MethodInfo_var);
		__this->___gunParticles_9 = L_2;
		LineRenderer_t513 * L_3 = Component_GetComponent_TisLineRenderer_t513_m2534(__this, /*hidden argument*/Component_GetComponent_TisLineRenderer_t513_m2534_MethodInfo_var);
		__this->___gunLine_10 = L_3;
		AudioSource_t288 * L_4 = Component_GetComponent_TisAudioSource_t288_m2261(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t288_m2261_MethodInfo_var);
		__this->___gunAudio_11 = L_4;
		Light_t341 * L_5 = Component_GetComponent_TisLight_t341_m2535(__this, /*hidden argument*/Component_GetComponent_TisLight_t341_m2535_MethodInfo_var);
		__this->___gunLight_12 = L_5;
		return;
	}
}
// System.Void CompleteProject.PlayerShooting::Update()
extern TypeInfo* Input_t457_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral398;
extern "C" void PlayerShooting_Update_m2499 (PlayerShooting_t523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		_stringLiteral398 = il2cpp_codegen_string_literal_from_index(398);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___timer_5);
		float L_1 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___timer_5 = ((float)((float)L_0+(float)L_1));
		IL2CPP_RUNTIME_CLASS_INIT(Input_t457_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetButton_m2336(NULL /*static, unused*/, _stringLiteral398, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		float L_3 = (__this->___timer_5);
		float L_4 = (__this->___timeBetweenBullets_3);
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0038;
		}
	}
	{
		PlayerShooting_Shoot_m2501(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		float L_5 = (__this->___timer_5);
		float L_6 = (__this->___timeBetweenBullets_3);
		float L_7 = (__this->___effectsDisplayTime_13);
		if ((!(((float)L_5) >= ((float)((float)((float)L_6*(float)L_7))))))
		{
			goto IL_0056;
		}
	}
	{
		PlayerShooting_DisableEffects_m2500(__this, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void CompleteProject.PlayerShooting::DisableEffects()
extern "C" void PlayerShooting_DisableEffects_m2500 (PlayerShooting_t523 * __this, const MethodInfo* method)
{
	{
		LineRenderer_t513 * L_0 = (__this->___gunLine_10);
		NullCheck(L_0);
		Renderer_set_enabled_m2536(L_0, 0, /*hidden argument*/NULL);
		Light_t341 * L_1 = (__this->___gunLight_12);
		NullCheck(L_1);
		Behaviour_set_enabled_m2081(L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CompleteProject.PlayerShooting::Shoot()
extern const MethodInfo* Component_GetComponent_TisEnemyHealth_t517_m2541_MethodInfo_var;
extern "C" void PlayerShooting_Shoot_m2501 (PlayerShooting_t523 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisEnemyHealth_t517_m2541_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483870);
		s_Il2CppMethodIntialized = true;
	}
	EnemyHealth_t517 * V_0 = {0};
	{
		__this->___timer_5 = (0.0f);
		AudioSource_t288 * L_0 = (__this->___gunAudio_11);
		NullCheck(L_0);
		AudioSource_Play_m2264(L_0, /*hidden argument*/NULL);
		Light_t341 * L_1 = (__this->___gunLight_12);
		NullCheck(L_1);
		Behaviour_set_enabled_m2081(L_1, 1, /*hidden argument*/NULL);
		ParticleSystem_t355 * L_2 = (__this->___gunParticles_9);
		NullCheck(L_2);
		ParticleSystem_Stop_m2537(L_2, /*hidden argument*/NULL);
		ParticleSystem_t355 * L_3 = (__this->___gunParticles_9);
		NullCheck(L_3);
		ParticleSystem_Play_m2519(L_3, /*hidden argument*/NULL);
		LineRenderer_t513 * L_4 = (__this->___gunLine_10);
		NullCheck(L_4);
		Renderer_set_enabled_m2536(L_4, 1, /*hidden argument*/NULL);
		LineRenderer_t513 * L_5 = (__this->___gunLine_10);
		Transform_t4 * L_6 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t7  L_7 = Transform_get_position_m1699(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		LineRenderer_SetPosition_m2538(L_5, 0, L_7, /*hidden argument*/NULL);
		Ray_t277 * L_8 = &(__this->___shootRay_6);
		Transform_t4 * L_9 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t7  L_10 = Transform_get_position_m1699(L_9, /*hidden argument*/NULL);
		Ray_set_origin_m2247(L_8, L_10, /*hidden argument*/NULL);
		Ray_t277 * L_11 = &(__this->___shootRay_6);
		Transform_t4 * L_12 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t7  L_13 = Transform_get_forward_m1732(L_12, /*hidden argument*/NULL);
		Ray_set_direction_m2248(L_11, L_13, /*hidden argument*/NULL);
		Ray_t277  L_14 = (__this->___shootRay_6);
		RaycastHit_t279 * L_15 = &(__this->___shootHit_7);
		float L_16 = (__this->___range_4);
		int32_t L_17 = (__this->___shootableMask_8);
		bool L_18 = Physics_Raycast_m2107(NULL /*static, unused*/, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00f9;
		}
	}
	{
		RaycastHit_t279 * L_19 = &(__this->___shootHit_7);
		Collider_t205 * L_20 = RaycastHit_get_collider_m2098(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		EnemyHealth_t517 * L_21 = Component_GetComponent_TisEnemyHealth_t517_m2541(L_20, /*hidden argument*/Component_GetComponent_TisEnemyHealth_t517_m2541_MethodInfo_var);
		V_0 = L_21;
		EnemyHealth_t517 * L_22 = V_0;
		bool L_23 = Object_op_Inequality_m1694(NULL /*static, unused*/, L_22, (Object_t328 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00dd;
		}
	}
	{
		EnemyHealth_t517 * L_24 = V_0;
		int32_t L_25 = (__this->___damagePerShot_2);
		RaycastHit_t279 * L_26 = &(__this->___shootHit_7);
		Vector3_t7  L_27 = RaycastHit_get_point_m2096(L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		EnemyHealth_TakeDamage_m2471(L_24, L_25, L_27, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		LineRenderer_t513 * L_28 = (__this->___gunLine_10);
		RaycastHit_t279 * L_29 = &(__this->___shootHit_7);
		Vector3_t7  L_30 = RaycastHit_get_point_m2096(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		LineRenderer_SetPosition_m2538(L_28, 1, L_30, /*hidden argument*/NULL);
		goto IL_012b;
	}

IL_00f9:
	{
		LineRenderer_t513 * L_31 = (__this->___gunLine_10);
		Ray_t277 * L_32 = &(__this->___shootRay_6);
		Vector3_t7  L_33 = Ray_get_origin_m1857(L_32, /*hidden argument*/NULL);
		Ray_t277 * L_34 = &(__this->___shootRay_6);
		Vector3_t7  L_35 = Ray_get_direction_m1856(L_34, /*hidden argument*/NULL);
		float L_36 = (__this->___range_4);
		Vector3_t7  L_37 = Vector3_op_Multiply_m1706(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		Vector3_t7  L_38 = Vector3_op_Addition_m1722(NULL /*static, unused*/, L_33, L_37, /*hidden argument*/NULL);
		NullCheck(L_31);
		LineRenderer_SetPosition_m2538(L_31, 1, L_38, /*hidden argument*/NULL);
	}

IL_012b:
	{
		return;
	}
}
// System.Void CameraFollow::.ctor()
extern "C" void CameraFollow__ctor_m2502 (CameraFollow_t524 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraFollow::Update()
extern "C" void CameraFollow_Update_m2503 (CameraFollow_t524 * __this, const MethodInfo* method)
{
	Vector3_t7  V_0 = {0};
	Vector3_t7  V_1 = {0};
	{
		Transform_t4 * L_0 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		Transform_t4 * L_1 = (__this->___player_2);
		NullCheck(L_1);
		Vector3_t7  L_2 = Transform_get_position_m1699(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = ((&V_0)->___x_1);
		Transform_t4 * L_4 = (__this->___player_2);
		NullCheck(L_4);
		Vector3_t7  L_5 = Transform_get_position_m1699(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = ((&V_1)->___z_3);
		Vector3_t7  L_7 = {0};
		Vector3__ctor_m1775(&L_7, L_3, (20.0f), L_6, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m1721(L_0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Move::.ctor()
extern "C" void Move__ctor_m2504 (Move_t525 * __this, const MethodInfo* method)
{
	{
		__this->___speed_2 = (6.0f);
		__this->___jumpSpeed_3 = (8.0f);
		__this->___gravity_4 = (20.0f);
		Vector3_t7  L_0 = Vector3_get_zero_m1707(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___moveDirection_5 = L_0;
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Move::Update()
extern TypeInfo* Input_t457_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCharacterController_t11_m1724_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral354;
extern Il2CppCodeGenString* _stringLiteral355;
extern Il2CppCodeGenString* _stringLiteral353;
extern "C" void Move_Update_m2505 (Move_t525 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		Component_GetComponent_TisCharacterController_t11_m1724_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		_stringLiteral354 = il2cpp_codegen_string_literal_from_index(354);
		_stringLiteral355 = il2cpp_codegen_string_literal_from_index(355);
		_stringLiteral353 = il2cpp_codegen_string_literal_from_index(353);
		s_Il2CppMethodIntialized = true;
	}
	CharacterController_t11 * V_0 = {0};
	{
		CharacterController_t11 * L_0 = Component_GetComponent_TisCharacterController_t11_m1724(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_t11_m1724_MethodInfo_var);
		V_0 = L_0;
		CharacterController_t11 * L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = CharacterController_get_isGrounded_m2262(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t457_il2cpp_TypeInfo_var);
		float L_3 = Input_GetAxis_m2335(NULL /*static, unused*/, _stringLiteral354, /*hidden argument*/NULL);
		float L_4 = Input_GetAxis_m2335(NULL /*static, unused*/, _stringLiteral355, /*hidden argument*/NULL);
		Vector3_t7  L_5 = {0};
		Vector3__ctor_m1775(&L_5, L_3, (0.0f), L_4, /*hidden argument*/NULL);
		__this->___moveDirection_5 = L_5;
		Transform_t4 * L_6 = Component_get_transform_m1689(__this, /*hidden argument*/NULL);
		Vector3_t7  L_7 = (__this->___moveDirection_5);
		NullCheck(L_6);
		Vector3_t7  L_8 = Transform_TransformDirection_m2545(L_6, L_7, /*hidden argument*/NULL);
		__this->___moveDirection_5 = L_8;
		Vector3_t7  L_9 = (__this->___moveDirection_5);
		float L_10 = (__this->___speed_2);
		Vector3_t7  L_11 = Vector3_op_Multiply_m1706(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->___moveDirection_5 = L_11;
		bool L_12 = Input_GetButton_m2336(NULL /*static, unused*/, _stringLiteral353, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		Vector3_t7 * L_13 = &(__this->___moveDirection_5);
		float L_14 = (__this->___jumpSpeed_3);
		L_13->___y_2 = L_14;
	}

IL_0084:
	{
		Vector3_t7 * L_15 = &(__this->___moveDirection_5);
		Vector3_t7 * L_16 = L_15;
		float L_17 = (L_16->___y_2);
		float L_18 = (__this->___gravity_4);
		float L_19 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		L_16->___y_2 = ((float)((float)L_17-(float)((float)((float)L_18*(float)L_19))));
		CharacterController_t11 * L_20 = V_0;
		Vector3_t7  L_21 = (__this->___moveDirection_5);
		float L_22 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t7  L_23 = Vector3_op_Multiply_m1706(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		CharacterController_Move_m2272(L_20, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkeletonSpawn/<SkeletonGenerator>c__Iterator0::.ctor()
extern "C" void U3CSkeletonGeneratorU3Ec__Iterator0__ctor_m2506 (U3CSkeletonGeneratorU3Ec__Iterator0_t526 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1685(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SkeletonSpawn/<SkeletonGenerator>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CSkeletonGeneratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2507 (U3CSkeletonGeneratorU3Ec__Iterator0_t526 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object SkeletonSpawn/<SkeletonGenerator>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CSkeletonGeneratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2508 (U3CSkeletonGeneratorU3Ec__Iterator0_t526 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean SkeletonSpawn/<SkeletonGenerator>c__Iterator0::MoveNext()
extern TypeInfo* WaitForSeconds_t398_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t88_m2546_MethodInfo_var;
extern "C" bool U3CSkeletonGeneratorU3Ec__Iterator0_MoveNext_m2509 (U3CSkeletonGeneratorU3Ec__Iterator0_t526 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Object_Instantiate_TisGameObject_t88_m2546_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483874);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00a2;
	}

IL_0021:
	{
		SkeletonSpawn_t527 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		float L_3 = (L_2->___delay_3);
		WaitForSeconds_t398 * L_4 = (WaitForSeconds_t398 *)il2cpp_codegen_object_new (WaitForSeconds_t398_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m1686(L_4, L_3, /*hidden argument*/NULL);
		__this->___U24current_1 = L_4;
		__this->___U24PC_0 = 1;
		goto IL_00a4;
	}

IL_0043:
	{
		SkeletonSpawn_t527 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		float L_6 = (L_5->___TimeBetweenSpawn_4);
		SkeletonSpawn_t527 * L_7 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_7);
		float L_8 = (L_7->___delay_3);
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_0084;
		}
	}
	{
		SkeletonSpawn_t527 * L_9 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_9);
		GameObject_t88 * L_10 = (L_9->___SkeletonPrefab_2);
		Object_Instantiate_TisGameObject_t88_m2546(NULL /*static, unused*/, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_t88_m2546_MethodInfo_var);
		SkeletonSpawn_t527 * L_11 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_11);
		L_11->___TimeBetweenSpawn_4 = (0.0f);
		goto IL_009b;
	}

IL_0084:
	{
		SkeletonSpawn_t527 * L_12 = (__this->___U3CU3Ef__this_2);
		SkeletonSpawn_t527 * L_13 = L_12;
		NullCheck(L_13);
		float L_14 = (L_13->___TimeBetweenSpawn_4);
		float L_15 = Time_get_deltaTime_m1714(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->___TimeBetweenSpawn_4 = ((float)((float)L_14+(float)L_15));
	}

IL_009b:
	{
		__this->___U24PC_0 = (-1);
	}

IL_00a2:
	{
		return 0;
	}

IL_00a4:
	{
		return 1;
	}
	// Dead block : IL_00a6: ldloc.1
}
// System.Void SkeletonSpawn/<SkeletonGenerator>c__Iterator0::Dispose()
extern "C" void U3CSkeletonGeneratorU3Ec__Iterator0_Dispose_m2510 (U3CSkeletonGeneratorU3Ec__Iterator0_t526 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void SkeletonSpawn/<SkeletonGenerator>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t399_il2cpp_TypeInfo_var;
extern "C" void U3CSkeletonGeneratorU3Ec__Iterator0_Reset_m2511 (U3CSkeletonGeneratorU3Ec__Iterator0_t526 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t399 * L_0 = (NotSupportedException_t399 *)il2cpp_codegen_object_new (NotSupportedException_t399_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1687(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void SkeletonSpawn::.ctor()
extern "C" void SkeletonSpawn__ctor_m2512 (SkeletonSpawn_t527 * __this, const MethodInfo* method)
{
	{
		__this->___delay_3 = (10.0f);
		MonoBehaviour__ctor_m1688(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkeletonSpawn::Start()
extern "C" void SkeletonSpawn_Start_m2513 (SkeletonSpawn_t527 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = SkeletonSpawn_SkeletonGenerator_m2514(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m1693(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator SkeletonSpawn::SkeletonGenerator()
extern TypeInfo* U3CSkeletonGeneratorU3Ec__Iterator0_t526_il2cpp_TypeInfo_var;
extern "C" Object_t * SkeletonSpawn_SkeletonGenerator_m2514 (SkeletonSpawn_t527 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CSkeletonGeneratorU3Ec__Iterator0_t526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		s_Il2CppMethodIntialized = true;
	}
	U3CSkeletonGeneratorU3Ec__Iterator0_t526 * V_0 = {0};
	{
		U3CSkeletonGeneratorU3Ec__Iterator0_t526 * L_0 = (U3CSkeletonGeneratorU3Ec__Iterator0_t526 *)il2cpp_codegen_object_new (U3CSkeletonGeneratorU3Ec__Iterator0_t526_il2cpp_TypeInfo_var);
		U3CSkeletonGeneratorU3Ec__Iterator0__ctor_m2506(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSkeletonGeneratorU3Ec__Iterator0_t526 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CSkeletonGeneratorU3Ec__Iterator0_t526 * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
