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

// UnityEngine.Material
struct Material_t498;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.StencilMaterial::.cctor()
extern "C" void StencilMaterial__cctor_m6094 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.StencilMaterial::Add(UnityEngine.Material,System.Int32)
extern "C" Material_t498 * StencilMaterial_Add_m6095 (Object_t * __this /* static, unused */, Material_t498 * ___baseMat, int32_t ___stencilID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.StencilMaterial::Remove(UnityEngine.Material)
extern "C" void StencilMaterial_Remove_m6096 (Object_t * __this /* static, unused */, Material_t498 * ___customMat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
