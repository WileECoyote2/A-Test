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

// Pathfinding.Profile
struct Profile_t266;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Profile::.ctor(System.String)
extern "C" void Profile__ctor_m1257 (Profile_t266 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Profile::ControlValue()
extern "C" int32_t Profile_ControlValue_m1258 (Profile_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Profile::Start()
extern "C" void Profile_Start_m1259 (Profile_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Profile::Stop()
extern "C" void Profile_Stop_m1260 (Profile_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Profile::Log()
extern "C" void Profile_Log_m1261 (Profile_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Profile::ConsoleLog()
extern "C" void Profile_ConsoleLog_m1262 (Profile_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Profile::Stop(System.Int32)
extern "C" void Profile_Stop_m1263 (Profile_t266 * __this, int32_t ___control, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Profile::Control(Pathfinding.Profile)
extern "C" void Profile_Control_m1264 (Profile_t266 * __this, Profile_t266 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Profile::ToString()
extern "C" String_t* Profile_ToString_m1265 (Profile_t266 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
