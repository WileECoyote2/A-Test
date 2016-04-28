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

// Pathfinding.SimpleSmoothModifier
struct SimpleSmoothModifier_t246;
// Pathfinding.Path
struct Path_t10;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t18;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Pathfinding.SimpleSmoothModifier::.ctor()
extern "C" void SimpleSmoothModifier__ctor_m1165 (SimpleSmoothModifier_t246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.SimpleSmoothModifier::get_Order()
extern "C" int32_t SimpleSmoothModifier_get_Order_m1166 (SimpleSmoothModifier_t246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.SimpleSmoothModifier::Apply(Pathfinding.Path)
extern "C" void SimpleSmoothModifier_Apply_m1167 (SimpleSmoothModifier_t246 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.SimpleSmoothModifier::CurvedNonuniform(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" List_1_t18 * SimpleSmoothModifier_CurvedNonuniform_m1168 (SimpleSmoothModifier_t246 * __this, List_1_t18 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pathfinding.SimpleSmoothModifier::GetPointOnCubic(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" Vector3_t7  SimpleSmoothModifier_GetPointOnCubic_m1169 (Object_t * __this /* static, unused */, Vector3_t7  ___a, Vector3_t7  ___b, Vector3_t7  ___tan1, Vector3_t7  ___tan2, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.SimpleSmoothModifier::SmoothOffsetSimple(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" List_1_t18 * SimpleSmoothModifier_SmoothOffsetSimple_m1170 (SimpleSmoothModifier_t246 * __this, List_1_t18 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.SimpleSmoothModifier::SmoothSimple(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" List_1_t18 * SimpleSmoothModifier_SmoothSimple_m1171 (SimpleSmoothModifier_t246 * __this, List_1_t18 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.SimpleSmoothModifier::SmoothBezier(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" List_1_t18 * SimpleSmoothModifier_SmoothBezier_m1172 (SimpleSmoothModifier_t246 * __this, List_1_t18 * ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
