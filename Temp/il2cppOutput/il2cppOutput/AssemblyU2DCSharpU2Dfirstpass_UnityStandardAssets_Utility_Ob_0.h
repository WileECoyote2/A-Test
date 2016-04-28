#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t352;
// UnityEngine.Rigidbody
struct Rigidbody_t12;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// UnityStandardAssets.Utility.ObjectResetter
struct  ObjectResetter_t351  : public MonoBehaviour_t3
{
	// UnityEngine.Vector3 UnityStandardAssets.Utility.ObjectResetter::originalPosition
	Vector3_t7  ___originalPosition_2;
	// UnityEngine.Quaternion UnityStandardAssets.Utility.ObjectResetter::originalRotation
	Quaternion_t206  ___originalRotation_3;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityStandardAssets.Utility.ObjectResetter::originalStructure
	List_1_t352 * ___originalStructure_4;
	// UnityEngine.Rigidbody UnityStandardAssets.Utility.ObjectResetter::Rigidbody
	Rigidbody_t12 * ___Rigidbody_5;
};
