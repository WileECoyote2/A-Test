#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t194;
// ProceduralWorld
struct ProceduralWorld_t195;
// UnityEngine.Transform
struct Transform_t4;
// System.Collections.IEnumerator
struct IEnumerator_t79;

#include "mscorlib_System_Object.h"

// ProceduralWorld/ProceduralTile
struct  ProceduralTile_t191  : public Object_t
{
	// System.Int32 ProceduralWorld/ProceduralTile::x
	int32_t ___x_0;
	// System.Int32 ProceduralWorld/ProceduralTile::z
	int32_t ___z_1;
	// System.Random ProceduralWorld/ProceduralTile::rnd
	Random_t194 * ___rnd_2;
	// System.Boolean ProceduralWorld/ProceduralTile::staticBatching
	bool ___staticBatching_3;
	// ProceduralWorld ProceduralWorld/ProceduralTile::world
	ProceduralWorld_t195 * ___world_4;
	// UnityEngine.Transform ProceduralWorld/ProceduralTile::root
	Transform_t4 * ___root_5;
	// System.Collections.IEnumerator ProceduralWorld/ProceduralTile::ie
	Object_t * ___ie_6;
	// System.Boolean ProceduralWorld/ProceduralTile::<destroyed>k__BackingField
	bool ___U3CdestroyedU3Ek__BackingField_7;
};
