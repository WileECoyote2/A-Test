#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t88;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// ProceduralWorld/ProceduralPrefab
struct  ProceduralPrefab_t188  : public Object_t
{
	// UnityEngine.GameObject ProceduralWorld/ProceduralPrefab::prefab
	GameObject_t88 * ___prefab_0;
	// System.Single ProceduralWorld/ProceduralPrefab::density
	float ___density_1;
	// System.Single ProceduralWorld/ProceduralPrefab::perlin
	float ___perlin_2;
	// System.Single ProceduralWorld/ProceduralPrefab::perlinPower
	float ___perlinPower_3;
	// UnityEngine.Vector2 ProceduralWorld/ProceduralPrefab::perlinOffset
	Vector2_t189  ___perlinOffset_4;
	// System.Single ProceduralWorld/ProceduralPrefab::perlinScale
	float ___perlinScale_5;
	// System.Single ProceduralWorld/ProceduralPrefab::random
	float ___random_6;
	// System.Boolean ProceduralWorld/ProceduralPrefab::singleFixed
	bool ___singleFixed_7;
};
