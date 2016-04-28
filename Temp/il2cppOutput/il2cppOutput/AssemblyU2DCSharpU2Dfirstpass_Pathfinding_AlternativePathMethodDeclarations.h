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

// Pathfinding.AlternativePath
struct AlternativePath_t240;
// Pathfinding.Path
struct Path_t10;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.AlternativePath::.ctor()
extern "C" void AlternativePath__ctor_m1140 (AlternativePath_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AlternativePath::get_Order()
extern "C" int32_t AlternativePath_get_Order_m1141 (AlternativePath_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AlternativePath::Apply(Pathfinding.Path)
extern "C" void AlternativePath_Apply_m1142 (AlternativePath_t240 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AlternativePath::OnDestroy()
extern "C" void AlternativePath_OnDestroy_m1143 (AlternativePath_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AlternativePath::ClearOnDestroy(Pathfinding.Path)
extern "C" void AlternativePath_ClearOnDestroy_m1144 (AlternativePath_t240 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AlternativePath::InversePrevious()
extern "C" void AlternativePath_InversePrevious_m1145 (AlternativePath_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AlternativePath::ApplyNow(Pathfinding.Path)
extern "C" void AlternativePath_ApplyNow_m1146 (AlternativePath_t240 * __this, Path_t10 * ___somePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
