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

// System.OperatingSystem
struct OperatingSystem_t2293;
// System.Version
struct Version_t165;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_PlatformID.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OperatingSystem::.ctor(System.PlatformID,System.Version)
extern "C" void OperatingSystem__ctor_m13969 (OperatingSystem_t2293 * __this, int32_t ___platform, Version_t165 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.OperatingSystem::get_Platform()
extern "C" int32_t OperatingSystem_get_Platform_m13970 (OperatingSystem_t2293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OperatingSystem::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OperatingSystem_GetObjectData_m13971 (OperatingSystem_t2293 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.OperatingSystem::ToString()
extern "C" String_t* OperatingSystem_ToString_m13972 (OperatingSystem_t2293 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
