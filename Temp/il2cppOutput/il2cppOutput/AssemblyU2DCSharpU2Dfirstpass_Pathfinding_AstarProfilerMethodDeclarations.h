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

// Pathfinding.AstarProfiler
struct AstarProfiler_t254;
// System.String[]
struct StringU5BU5D_t63;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.AstarProfiler::.ctor()
extern "C" void AstarProfiler__ctor_m1211 (AstarProfiler_t254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::.cctor()
extern "C" void AstarProfiler__cctor_m1212 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::InitializeFastProfile(System.String[])
extern "C" void AstarProfiler_InitializeFastProfile_m1213 (Object_t * __this /* static, unused */, StringU5BU5D_t63* ___profileNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::StartFastProfile(System.Int32)
extern "C" void AstarProfiler_StartFastProfile_m1214 (Object_t * __this /* static, unused */, int32_t ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::EndFastProfile(System.Int32)
extern "C" void AstarProfiler_EndFastProfile_m1215 (Object_t * __this /* static, unused */, int32_t ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::EndProfile()
extern "C" void AstarProfiler_EndProfile_m1216 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::StartProfile(System.String)
extern "C" void AstarProfiler_StartProfile_m1217 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::EndProfile(System.String)
extern "C" void AstarProfiler_EndProfile_m1218 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::Reset()
extern "C" void AstarProfiler_Reset_m1219 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::PrintFastResults()
extern "C" void AstarProfiler_PrintFastResults_m1220 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarProfiler::PrintResults()
extern "C" void AstarProfiler_PrintResults_m1221 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
