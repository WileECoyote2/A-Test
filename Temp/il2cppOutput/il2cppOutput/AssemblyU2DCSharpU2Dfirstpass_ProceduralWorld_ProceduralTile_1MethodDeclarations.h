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

// ProceduralWorld/ProceduralTile
struct ProceduralTile_t191;
// ProceduralWorld
struct ProceduralWorld_t195;
// System.Collections.IEnumerator
struct IEnumerator_t79;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void ProceduralWorld/ProceduralTile::.ctor(ProceduralWorld,System.Int32,System.Int32)
extern "C" void ProceduralTile__ctor_m855 (ProceduralTile_t191 * __this, ProceduralWorld_t195 * ___world, int32_t ___x, int32_t ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProceduralWorld/ProceduralTile::get_destroyed()
extern "C" bool ProceduralTile_get_destroyed_m856 (ProceduralTile_t191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralWorld/ProceduralTile::set_destroyed(System.Boolean)
extern "C" void ProceduralTile_set_destroyed_m857 (ProceduralTile_t191 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ProceduralWorld/ProceduralTile::Generate()
extern "C" Object_t * ProceduralTile_Generate_m858 (ProceduralTile_t191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralWorld/ProceduralTile::ForceFinish()
extern "C" void ProceduralTile_ForceFinish_m859 (ProceduralTile_t191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProceduralWorld/ProceduralTile::RandomInside()
extern "C" Vector3_t7  ProceduralTile_RandomInside_m860 (ProceduralTile_t191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ProceduralWorld/ProceduralTile::RandomInside(System.Single,System.Single)
extern "C" Vector3_t7  ProceduralTile_RandomInside_m861 (ProceduralTile_t191 * __this, float ___px, float ___pz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion ProceduralWorld/ProceduralTile::RandomYRot()
extern "C" Quaternion_t206  ProceduralTile_RandomYRot_m862 (ProceduralTile_t191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ProceduralWorld/ProceduralTile::InternalGenerate()
extern "C" Object_t * ProceduralTile_InternalGenerate_m863 (ProceduralTile_t191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProceduralWorld/ProceduralTile::Destroy()
extern "C" void ProceduralTile_Destroy_m864 (ProceduralTile_t191 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
