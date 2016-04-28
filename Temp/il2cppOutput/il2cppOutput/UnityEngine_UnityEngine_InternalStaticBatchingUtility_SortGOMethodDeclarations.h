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

// UnityEngine.InternalStaticBatchingUtility/SortGO
struct SortGO_t800;
// System.Object
struct Object_t;
// UnityEngine.Renderer
struct Renderer_t424;
// UnityEngine.GameObject
struct GameObject_t88;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.InternalStaticBatchingUtility/SortGO::.ctor()
extern "C" void SortGO__ctor_m4093 (SortGO_t800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.InternalStaticBatchingUtility/SortGO::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" int32_t SortGO_System_Collections_IComparer_Compare_m4094 (SortGO_t800 * __this, Object_t * ___a, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.InternalStaticBatchingUtility/SortGO::GetMaterialId(UnityEngine.Renderer)
extern "C" int32_t SortGO_GetMaterialId_m4095 (Object_t * __this /* static, unused */, Renderer_t424 * ___renderer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.InternalStaticBatchingUtility/SortGO::GetLightmapIndex(UnityEngine.Renderer)
extern "C" int32_t SortGO_GetLightmapIndex_m4096 (Object_t * __this /* static, unused */, Renderer_t424 * ___renderer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer UnityEngine.InternalStaticBatchingUtility/SortGO::GetRenderer(UnityEngine.GameObject)
extern "C" Renderer_t424 * SortGO_GetRenderer_m4097 (Object_t * __this /* static, unused */, GameObject_t88 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
