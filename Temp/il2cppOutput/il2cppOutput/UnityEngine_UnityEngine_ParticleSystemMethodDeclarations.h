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

// UnityEngine.ParticleSystem
struct ParticleSystem_t355;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t354;
// UnityEngine.Transform
struct Transform_t4;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t821;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)
extern "C" void ParticleSystem_set_enableEmission_m2409 (ParticleSystem_t355 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.ParticleSystem::get_startLifetime()
extern "C" float ParticleSystem_get_startLifetime_m2407 (ParticleSystem_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Play()
extern "C" void ParticleSystem_Internal_Play_m3385 (ParticleSystem_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Internal_Stop()
extern "C" void ParticleSystem_Internal_Stop_m3386 (ParticleSystem_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play()
extern "C" void ParticleSystem_Play_m2519 (ParticleSystem_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
extern "C" void ParticleSystem_Play_m3387 (ParticleSystem_t355 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C" void ParticleSystem_Stop_m2537 (ParticleSystem_t355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C" void ParticleSystem_Stop_m3388 (ParticleSystem_t355 * __this, bool ___withChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem[] UnityEngine.ParticleSystem::GetParticleSystems(UnityEngine.ParticleSystem)
extern "C" ParticleSystemU5BU5D_t354* ParticleSystem_GetParticleSystems_m3389 (Object_t * __this /* static, unused */, ParticleSystem_t355 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::GetDirectParticleSystemChildrenRecursive(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.ParticleSystem>)
extern "C" void ParticleSystem_GetDirectParticleSystemChildrenRecursive_m3390 (Object_t * __this /* static, unused */, Transform_t4 * ___transform, List_1_t821 * ___particleSystems, const MethodInfo* method) IL2CPP_METHOD_ATTR;
