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

// System.IFormatProvider
struct IFormatProvider_t1906;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String[]
struct StringU5BU5D_t63;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t970;
// System.String
struct String_t;
// System.Exception
struct Exception_t52;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_TimeSpan.h"
#include "mscorlib_System_DateTimeKind.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_DateTime_Which.h"
#include "mscorlib_System_DayOfWeek.h"
#include "mscorlib_System_TypeCode.h"
#include "mscorlib_System_Globalization_DateTimeStyles.h"
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.DateTime::.ctor(System.Int64)
extern "C" void DateTime__ctor_m13567 (DateTime_t134 * __this, int64_t ___ticks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void DateTime__ctor_m13568 (DateTime_t134 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void DateTime__ctor_m13569 (DateTime_t134 * __this, int32_t ___year, int32_t ___month, int32_t ___day, int32_t ___hour, int32_t ___minute, int32_t ___second, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void DateTime__ctor_m4232 (DateTime_t134 * __this, int32_t ___year, int32_t ___month, int32_t ___day, int32_t ___hour, int32_t ___minute, int32_t ___second, int32_t ___millisecond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Boolean,System.TimeSpan)
extern "C" void DateTime__ctor_m13570 (DateTime_t134 * __this, bool ___check, TimeSpan_t422  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
extern "C" void DateTime__ctor_m13571 (DateTime_t134 * __this, int64_t ___ticks, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
extern "C" void DateTime__ctor_m2005 (DateTime_t134 * __this, int32_t ___year, int32_t ___month, int32_t ___day, int32_t ___hour, int32_t ___minute, int32_t ___second, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.cctor()
extern "C" void DateTime__cctor_m13572 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool DateTime_System_IConvertible_ToBoolean_m13573 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.DateTime::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t DateTime_System_IConvertible_ToByte_m13574 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.DateTime::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t DateTime_System_IConvertible_ToChar_m13575 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t134  DateTime_System_IConvertible_ToDateTime_m13576 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.DateTime::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t870  DateTime_System_IConvertible_ToDecimal_m13577 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DateTime::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double DateTime_System_IConvertible_ToDouble_m13578 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.DateTime::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t DateTime_System_IConvertible_ToInt16_m13579 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t DateTime_System_IConvertible_ToInt32_m13580 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t DateTime_System_IConvertible_ToInt64_m13581 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.DateTime::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t DateTime_System_IConvertible_ToSByte_m13582 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.DateTime::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float DateTime_System_IConvertible_ToSingle_m13583 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DateTime::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * DateTime_System_IConvertible_ToType_m13584 (DateTime_t134 * __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.DateTime::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t DateTime_System_IConvertible_ToUInt16_m13585 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.DateTime::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t DateTime_System_IConvertible_ToUInt32_m13586 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.DateTime::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t DateTime_System_IConvertible_ToUInt64_m13587 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::AbsoluteDays(System.Int32,System.Int32,System.Int32)
extern "C" int32_t DateTime_AbsoluteDays_m13588 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::FromTicks(System.DateTime/Which)
extern "C" int32_t DateTime_FromTicks_m13589 (DateTime_t134 * __this, int32_t ___what, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Date()
extern "C" DateTime_t134  DateTime_get_Date_m8984 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Month()
extern "C" int32_t DateTime_get_Month_m5160 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Day()
extern "C" int32_t DateTime_get_Day_m5159 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.DateTime::get_DayOfWeek()
extern "C" int32_t DateTime_get_DayOfWeek_m13590 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_DayOfYear()
extern "C" int32_t DateTime_get_DayOfYear_m13591 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTime::get_TimeOfDay()
extern "C" TimeSpan_t422  DateTime_get_TimeOfDay_m13592 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Hour()
extern "C" int32_t DateTime_get_Hour_m5164 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Minute()
extern "C" int32_t DateTime_get_Minute_m5163 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Second()
extern "C" int32_t DateTime_get_Second_m5162 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Millisecond()
extern "C" int32_t DateTime_get_Millisecond_m13593 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetTimeMonotonic()
extern "C" int64_t DateTime_GetTimeMonotonic_m13594 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetNow()
extern "C" int64_t DateTime_GetNow_m13595 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C" DateTime_t134  DateTime_get_Now_m4129 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::get_Ticks()
extern "C" int64_t DateTime_get_Ticks_m1790 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Today()
extern "C" DateTime_t134  DateTime_get_Today_m13596 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_UtcNow()
extern "C" DateTime_t134  DateTime_get_UtcNow_m1789 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Year()
extern "C" int32_t DateTime_get_Year_m5161 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind System.DateTime::get_Kind()
extern "C" int32_t DateTime_get_Kind_m4470 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Add(System.TimeSpan)
extern "C" DateTime_t134  DateTime_Add_m13597 (DateTime_t134 * __this, TimeSpan_t422  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddTicks(System.Int64)
extern "C" DateTime_t134  DateTime_AddTicks_m13598 (DateTime_t134 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
extern "C" DateTime_t134  DateTime_AddMilliseconds_m9045 (DateTime_t134 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddSeconds(System.Double)
extern "C" DateTime_t134  DateTime_AddSeconds_m4233 (DateTime_t134 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::Compare(System.DateTime,System.DateTime)
extern "C" int32_t DateTime_Compare_m13599 (Object_t * __this /* static, unused */, DateTime_t134  ___t1, DateTime_t134  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.Object)
extern "C" int32_t DateTime_CompareTo_m13600 (DateTime_t134 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsDaylightSavingTime()
extern "C" bool DateTime_IsDaylightSavingTime_m5153 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.DateTime)
extern "C" int32_t DateTime_CompareTo_m13601 (DateTime_t134 * __this, DateTime_t134  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.DateTime)
extern "C" bool DateTime_Equals_m8985 (DateTime_t134 * __this, DateTime_t134  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::ToBinary()
extern "C" int64_t DateTime_ToBinary_m13602 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::FromBinary(System.Int64)
extern "C" DateTime_t134  DateTime_FromBinary_m13603 (Object_t * __this /* static, unused */, int64_t ___dateData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
extern "C" DateTime_t134  DateTime_SpecifyKind_m5157 (Object_t * __this /* static, unused */, DateTime_t134  ___value, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
extern "C" int32_t DateTime_DaysInMonth_m13604 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.Object)
extern "C" bool DateTime_Equals_m13605 (DateTime_t134 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::FromFileTimeUtc(System.Int64)
extern "C" DateTime_t134  DateTime_FromFileTimeUtc_m5175 (Object_t * __this /* static, unused */, int64_t ___fileTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::GetDateTimeFormats()
extern "C" StringU5BU5D_t63* DateTime_GetDateTimeFormats_m13606 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::GetDateTimeFormats(System.IFormatProvider)
extern "C" StringU5BU5D_t63* DateTime_GetDateTimeFormats_m13607 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::GetDateTimeFormats(System.Char,System.IFormatProvider)
extern "C" StringU5BU5D_t63* DateTime_GetDateTimeFormats_m13608 (DateTime_t134 * __this, uint16_t ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::GetDateTimeFormats(System.Boolean,System.String[],System.Globalization.DateTimeFormatInfo)
extern "C" StringU5BU5D_t63* DateTime_GetDateTimeFormats_m13609 (DateTime_t134 * __this, bool ___adjustutc, StringU5BU5D_t63* ___patterns, DateTimeFormatInfo_t970 * ___dfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckDateTimeKind(System.DateTimeKind)
extern "C" void DateTime_CheckDateTimeKind_m13610 (DateTime_t134 * __this, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::GetHashCode()
extern "C" int32_t DateTime_GetHashCode_m13611 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.DateTime::GetTypeCode()
extern "C" int32_t DateTime_GetTypeCode_m13612 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLeapYear(System.Int32)
extern "C" bool DateTime_IsLeapYear_m13613 (Object_t * __this /* static, unused */, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String)
extern "C" DateTime_t134  DateTime_Parse_m8982 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider)
extern "C" DateTime_t134  DateTime_Parse_m8983 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C" DateTime_t134  DateTime_Parse_m13614 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::CoreParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&,System.DateTimeOffset&,System.Boolean,System.Exception&)
extern "C" bool DateTime_CoreParse_m13615 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, DateTime_t134 * ___result, DateTimeOffset_t885 * ___dto, bool ___setExceptionOnError, Exception_t52 ** ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::YearMonthDayFormats(System.Globalization.DateTimeFormatInfo,System.Boolean,System.Exception&)
extern "C" StringU5BU5D_t63* DateTime_YearMonthDayFormats_m13616 (Object_t * __this /* static, unused */, DateTimeFormatInfo_t970 * ___dfi, bool ___setExceptionOnError, Exception_t52 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseNumber(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C" int32_t DateTime__ParseNumber_m13617 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___valuePos, int32_t ___min_digits, int32_t ___digits, bool ___leadingzero, bool ___sloppy_parsing, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseEnum(System.String,System.Int32,System.String[],System.String[],System.Boolean,System.Int32&)
extern "C" int32_t DateTime__ParseEnum_m13618 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, StringU5BU5D_t63* ___values, StringU5BU5D_t63* ___invValues, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseString(System.String,System.Int32,System.Int32,System.String,System.Int32&)
extern "C" bool DateTime__ParseString_m13619 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, int32_t ___maxlength, String_t* ___value, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseAmPm(System.String,System.Int32,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&,System.Int32&)
extern "C" bool DateTime__ParseAmPm_m13620 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___valuePos, int32_t ___num, DateTimeFormatInfo_t970 * ___dfi, bool ___exact, int32_t* ___num_parsed, int32_t* ___ampm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseTimeSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
extern "C" bool DateTime__ParseTimeSeparator_m13621 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, DateTimeFormatInfo_t970 * ___dfi, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseDateSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
extern "C" bool DateTime__ParseDateSeparator_m13622 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, DateTimeFormatInfo_t970 * ___dfi, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLetter(System.String,System.Int32)
extern "C" bool DateTime_IsLetter_m13623 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_DoParse(System.String,System.String,System.String,System.Boolean,System.DateTime&,System.DateTimeOffset&,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.Boolean,System.Boolean&,System.Boolean&)
extern "C" bool DateTime__DoParse_m13624 (Object_t * __this /* static, unused */, String_t* ___s, String_t* ___firstPart, String_t* ___secondPart, bool ___exact, DateTime_t134 * ___result, DateTimeOffset_t885 * ___dto, DateTimeFormatInfo_t970 * ___dfi, int32_t ___style, bool ___firstPartIsDate, bool* ___incompleteFormat, bool* ___longYear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C" DateTime_t134  DateTime_ParseExact_m7480 (Object_t * __this /* static, unused */, String_t* ___s, String_t* ___format, Object_t * ___provider, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C" DateTime_t134  DateTime_ParseExact_m13625 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t63* ___formats, Object_t * ___provider, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckStyle(System.Globalization.DateTimeStyles)
extern "C" void DateTime_CheckStyle_m13626 (Object_t * __this /* static, unused */, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::TryParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&)
extern "C" bool DateTime_TryParse_m4513 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, DateTime_t134 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::ParseExact(System.String,System.String[],System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTime&,System.Boolean,System.Boolean&,System.Boolean,System.Exception&)
extern "C" bool DateTime_ParseExact_m13627 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t63* ___formats, DateTimeFormatInfo_t970 * ___dfi, int32_t ___style, DateTime_t134 * ___ret, bool ___exact, bool* ___longYear, bool ___setExceptionOnError, Exception_t52 ** ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Subtract(System.TimeSpan)
extern "C" DateTime_t134  DateTime_Subtract_m13628 (DateTime_t134 * __this, TimeSpan_t422  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::ToFileTime()
extern "C" int64_t DateTime_ToFileTime_m5191 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::ToFileTimeUtc()
extern "C" int64_t DateTime_ToFileTimeUtc_m13629 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToLongDateString()
extern "C" String_t* DateTime_ToLongDateString_m13630 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToLongTimeString()
extern "C" String_t* DateTime_ToLongTimeString_m13631 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DateTime::ToOADate()
extern "C" double DateTime_ToOADate_m13632 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToShortDateString()
extern "C" String_t* DateTime_ToShortDateString_m13633 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToShortTimeString()
extern "C" String_t* DateTime_ToShortTimeString_m13634 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString()
extern "C" String_t* DateTime_ToString_m13635 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.IFormatProvider)
extern "C" String_t* DateTime_ToString_m8986 (DateTime_t134 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String)
extern "C" String_t* DateTime_ToString_m13636 (DateTime_t134 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
extern "C" String_t* DateTime_ToString_m4222 (DateTime_t134 * __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToLocalTime()
extern "C" DateTime_t134  DateTime_ToLocalTime_m5158 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToUniversalTime()
extern "C" DateTime_t134  DateTime_ToUniversalTime_m4221 (DateTime_t134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
extern "C" DateTime_t134  DateTime_op_Addition_m5156 (Object_t * __this /* static, unused */, DateTime_t134  ___d, TimeSpan_t422  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_Equality_m5195 (Object_t * __this /* static, unused */, DateTime_t134  ___d1, DateTime_t134  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_GreaterThan_m7509 (Object_t * __this /* static, unused */, DateTime_t134  ___t1, DateTime_t134  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThanOrEqual(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_GreaterThanOrEqual_m9046 (Object_t * __this /* static, unused */, DateTime_t134  ___t1, DateTime_t134  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Inequality(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_Inequality_m13637 (Object_t * __this /* static, unused */, DateTime_t134  ___d1, DateTime_t134  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_LessThan_m9067 (Object_t * __this /* static, unused */, DateTime_t134  ___t1, DateTime_t134  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
extern "C" bool DateTime_op_LessThanOrEqual_m7510 (Object_t * __this /* static, unused */, DateTime_t134  ___t1, DateTime_t134  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
extern "C" TimeSpan_t422  DateTime_op_Subtraction_m1850 (Object_t * __this /* static, unused */, DateTime_t134  ___d1, DateTime_t134  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Subtraction(System.DateTime,System.TimeSpan)
extern "C" DateTime_t134  DateTime_op_Subtraction_m5155 (Object_t * __this /* static, unused */, DateTime_t134  ___d, TimeSpan_t422  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
