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

// Pathfinding.AnimationLink
struct AnimationLink_t86;
// UnityEngine.Transform
struct Transform_t4;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t18;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Pathfinding.AnimationLink::.ctor()
extern "C" void AnimationLink__ctor_m408 (AnimationLink_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Pathfinding.AnimationLink::SearchRec(UnityEngine.Transform,System.String)
extern "C" Transform_t4 * AnimationLink_SearchRec_m409 (Object_t * __this /* static, unused */, Transform_t4 * ___tr, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AnimationLink::CalculateOffsets(System.Collections.Generic.List`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
extern "C" void AnimationLink_CalculateOffsets_m410 (AnimationLink_t86 * __this, List_1_t18 * ___trace, Vector3_t7 * ___endPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AnimationLink::OnDrawGizmosSelected()
extern "C" void AnimationLink_OnDrawGizmosSelected_m411 (AnimationLink_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
