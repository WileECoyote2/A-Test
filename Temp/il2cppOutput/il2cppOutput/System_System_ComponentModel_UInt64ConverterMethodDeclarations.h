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

// System.ComponentModel.UInt64Converter
struct UInt64Converter_t1559;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t959;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.UInt64Converter::.ctor()
extern "C" void UInt64Converter__ctor_m8138 (UInt64Converter_t1559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.UInt64Converter::get_SupportHex()
extern "C" bool UInt64Converter_get_SupportHex_m8139 (UInt64Converter_t1559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.UInt64Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* UInt64Converter_ConvertToString_m8140 (UInt64Converter_t1559 * __this, Object_t * ___value, NumberFormatInfo_t959 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt64Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * UInt64Converter_ConvertFromString_m8141 (UInt64Converter_t1559 * __this, String_t* ___value, NumberFormatInfo_t959 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt64Converter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * UInt64Converter_ConvertFromString_m8142 (UInt64Converter_t1559 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
