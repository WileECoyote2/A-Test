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

// UnityEngine.GameObject
struct GameObject_t88;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t359;
// System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/MeshInstance>
struct List_1_t847;
// System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>
struct List_1_t848;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t849;
// UnityEngine.Transform
struct Transform_t4;
// UnityEngine.Material
struct Material_t498;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.InternalStaticBatchingUtility::Combine(UnityEngine.GameObject)
extern "C" void InternalStaticBatchingUtility_Combine_m4098 (Object_t * __this /* static, unused */, GameObject_t88 * ___staticBatchRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.InternalStaticBatchingUtility::Combine(UnityEngine.GameObject,System.Boolean)
extern "C" void InternalStaticBatchingUtility_Combine_m4099 (Object_t * __this /* static, unused */, GameObject_t88 * ___staticBatchRoot, bool ___combineOnlyStatic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.InternalStaticBatchingUtility::Combine(UnityEngine.GameObject[],UnityEngine.GameObject)
extern "C" void InternalStaticBatchingUtility_Combine_m4100 (Object_t * __this /* static, unused */, GameObjectU5BU5D_t359* ___gos, GameObject_t88 * ___staticBatchRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.InternalStaticBatchingUtility::MakeBatch(System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/MeshInstance>,System.Collections.Generic.List`1<UnityEngine.MeshSubsetCombineUtility/SubMeshInstance>,System.Collections.Generic.List`1<UnityEngine.GameObject>,UnityEngine.Transform,System.Int32)
extern "C" void InternalStaticBatchingUtility_MakeBatch_m4101 (Object_t * __this /* static, unused */, List_1_t847 * ___meshes, List_1_t848 * ___subsets, List_1_t849 * ___subsetGOs, Transform_t4 * ___staticBatchRootTransform, int32_t ___batchIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.InternalStaticBatchingUtility::<Combine>m__6(UnityEngine.Material)
extern "C" bool InternalStaticBatchingUtility_U3CCombineU3Em__6_m4102 (Object_t * __this /* static, unused */, Material_t498 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
