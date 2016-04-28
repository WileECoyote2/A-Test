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

// UnityEngine.Renderer
struct Renderer_t424;
// UnityEngine.Transform
struct Transform_t4;
// UnityEngine.Material
struct Material_t498;
// UnityEngine.Material[]
struct MaterialU5BU5D_t497;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UnityEngine.Renderer::set_staticBatchRootTransform(UnityEngine.Transform)
extern "C" void Renderer_set_staticBatchRootTransform_m2671 (Renderer_t424 * __this, Transform_t4 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_staticBatchIndex()
extern "C" int32_t Renderer_get_staticBatchIndex_m2672 (Renderer_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::SetSubsetIndex(System.Int32,System.Int32)
extern "C" void Renderer_SetSubsetIndex_m2673 (Renderer_t424 * __this, int32_t ___index, int32_t ___subSetIndexForMaterial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Renderer::get_enabled()
extern "C" bool Renderer_get_enabled_m2674 (Renderer_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" void Renderer_set_enabled_m2536 (Renderer_t424 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C" Material_t498 * Renderer_get_sharedMaterial_m2675 (Renderer_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C" MaterialU5BU5D_t497* Renderer_get_materials_m2363 (Renderer_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
extern "C" void Renderer_set_materials_m2366 (Renderer_t424 * __this, MaterialU5BU5D_t497* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
extern "C" MaterialU5BU5D_t497* Renderer_get_sharedMaterials_m2361 (Renderer_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
extern "C" void Renderer_set_sharedMaterials_m2676 (Renderer_t424 * __this, MaterialU5BU5D_t497* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C" Bounds_t171  Renderer_get_bounds_m1865 (Renderer_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" void Renderer_INTERNAL_get_bounds_m2677 (Renderer_t424 * __this, Bounds_t171 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_lightmapIndex()
extern "C" int32_t Renderer_get_lightmapIndex_m2678 (Renderer_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Renderer::get_lightmapScaleOffset()
extern "C" Vector4_t435  Renderer_get_lightmapScaleOffset_m2679 (Renderer_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::INTERNAL_get_lightmapScaleOffset(UnityEngine.Vector4&)
extern "C" void Renderer_INTERNAL_get_lightmapScaleOffset_m2680 (Renderer_t424 * __this, Vector4_t435 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Renderer::get_realtimeLightmapScaleOffset()
extern "C" Vector4_t435  Renderer_get_realtimeLightmapScaleOffset_m2681 (Renderer_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::INTERNAL_get_realtimeLightmapScaleOffset(UnityEngine.Vector4&)
extern "C" void Renderer_INTERNAL_get_realtimeLightmapScaleOffset_m2682 (Renderer_t424 * __this, Vector4_t435 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m2683 (Renderer_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m2684 (Renderer_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
