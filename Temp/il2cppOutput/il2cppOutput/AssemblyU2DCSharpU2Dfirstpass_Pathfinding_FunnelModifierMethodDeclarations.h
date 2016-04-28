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

// Pathfinding.FunnelModifier
struct FunnelModifier_t242;
// Pathfinding.Path
struct Path_t10;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t18;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.FunnelModifier::.ctor()
extern "C" void FunnelModifier__ctor_m1147 (FunnelModifier_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.FunnelModifier::get_Order()
extern "C" int32_t FunnelModifier_get_Order_m1148 (FunnelModifier_t242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.FunnelModifier::Apply(Pathfinding.Path)
extern "C" void FunnelModifier_Apply_m1149 (FunnelModifier_t242 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.FunnelModifier::RunFunnel(System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" bool FunnelModifier_RunFunnel_m1150 (Object_t * __this /* static, unused */, List_1_t18 * ___left, List_1_t18 * ___right, List_1_t18 * ___funnelPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
