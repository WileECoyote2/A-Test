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
// UnityEngine.Mesh
struct Mesh_t226;
// UnityEngine.MeshSubsetCombineUtility/MeshInstance[]
struct MeshInstanceU5BU5D_t815;
// System.String
struct String_t;
// UnityEngine.MeshSubsetCombineUtility/SubMeshInstance[]
struct SubMeshInstanceU5BU5D_t816;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.StaticBatchingUtility::Combine(UnityEngine.GameObject)
extern "C" void StaticBatchingUtility_Combine_m2057 (Object_t * __this /* static, unused */, GameObject_t88 * ___staticBatchRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityEngine.StaticBatchingUtility::InternalCombineVertices(UnityEngine.MeshSubsetCombineUtility/MeshInstance[],System.String)
extern "C" Mesh_t226 * StaticBatchingUtility_InternalCombineVertices_m2689 (Object_t * __this /* static, unused */, MeshInstanceU5BU5D_t815* ___meshes, String_t* ___meshName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StaticBatchingUtility::InternalCombineIndices(UnityEngine.MeshSubsetCombineUtility/SubMeshInstance[],UnityEngine.Mesh)
extern "C" void StaticBatchingUtility_InternalCombineIndices_m2690 (Object_t * __this /* static, unused */, SubMeshInstanceU5BU5D_t816* ___submeshes, Mesh_t226 * ___combinedMesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
