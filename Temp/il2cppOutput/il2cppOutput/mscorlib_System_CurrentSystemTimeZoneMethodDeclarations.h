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

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t2328;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1711;
// System.String[]
struct StringU5BU5D_t63;
// System.Globalization.DaylightTime
struct DaylightTime_t1872;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m14063 (CurrentSystemTimeZone_t2328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m14064 (CurrentSystemTimeZone_t2328 * __this, int64_t ___lnow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m14065 (CurrentSystemTimeZone_t2328 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m14066 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t1711** ___data, StringU5BU5D_t63** ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t1872 * CurrentSystemTimeZone_GetDaylightChanges_m14067 (CurrentSystemTimeZone_t2328 * __this, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t422  CurrentSystemTimeZone_GetUtcOffset_m14068 (CurrentSystemTimeZone_t2328 * __this, DateTime_t134  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m14069 (CurrentSystemTimeZone_t2328 * __this, DaylightTime_t1872 * ___dlt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t1872 * CurrentSystemTimeZone_GetDaylightTimeFromData_m14070 (CurrentSystemTimeZone_t2328 * __this, Int64U5BU5D_t1711* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
