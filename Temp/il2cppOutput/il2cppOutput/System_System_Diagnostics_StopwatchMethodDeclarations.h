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

// System.Diagnostics.Stopwatch
struct Stopwatch_t253;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Diagnostics.Stopwatch::.ctor()
extern "C" void Stopwatch__ctor_m2191 (Stopwatch_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::.cctor()
extern "C" void Stopwatch__cctor_m8151 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
extern "C" int64_t Stopwatch_GetTimestamp_m8152 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Stopwatch System.Diagnostics.Stopwatch::StartNew()
extern "C" Stopwatch_t253 * Stopwatch_StartNew_m2180 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
extern "C" TimeSpan_t422  Stopwatch_get_Elapsed_m2195 (Stopwatch_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
extern "C" int64_t Stopwatch_get_ElapsedTicks_m8153 (Stopwatch_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Start()
extern "C" void Stopwatch_Start_m2194 (Stopwatch_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Stop()
extern "C" void Stopwatch_Stop_m2181 (Stopwatch_t253 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
