﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Globalization.GregorianCalendar
struct GregorianCalendar_t1873;
// System.Int32[]
struct Int32U5BU5D_t16;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_GregorianCalendarTypes.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.GregorianCalendar::.ctor(System.Globalization.GregorianCalendarTypes)
extern "C" void GregorianCalendar__ctor_m10873 (GregorianCalendar_t1873 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::.ctor()
extern "C" void GregorianCalendar__ctor_m10874 (GregorianCalendar_t1873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.GregorianCalendar::get_Eras()
extern "C" Int32U5BU5D_t16* GregorianCalendar_get_Eras_m10875 (GregorianCalendar_t1873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::set_CalendarType(System.Globalization.GregorianCalendarTypes)
extern "C" void GregorianCalendar_set_CalendarType_m10876 (GregorianCalendar_t1873 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetDayOfMonth(System.DateTime)
extern "C" int32_t GregorianCalendar_GetDayOfMonth_m10877 (GregorianCalendar_t1873 * __this, DateTime_t134  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.Globalization.GregorianCalendar::GetDayOfWeek(System.DateTime)
extern "C" int32_t GregorianCalendar_GetDayOfWeek_m10878 (GregorianCalendar_t1873 * __this, DateTime_t134  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetEra(System.DateTime)
extern "C" int32_t GregorianCalendar_GetEra_m10879 (GregorianCalendar_t1873 * __this, DateTime_t134  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetMonth(System.DateTime)
extern "C" int32_t GregorianCalendar_GetMonth_m10880 (GregorianCalendar_t1873 * __this, DateTime_t134  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetYear(System.DateTime)
extern "C" int32_t GregorianCalendar_GetYear_m10881 (GregorianCalendar_t1873 * __this, DateTime_t134  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
