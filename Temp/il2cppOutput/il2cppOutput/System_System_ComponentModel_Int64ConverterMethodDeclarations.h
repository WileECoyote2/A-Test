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

// System.ComponentModel.Int64Converter
struct Int64Converter_t1529;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t959;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Int64Converter::.ctor()
extern "C" void Int64Converter__ctor_m7860 (Int64Converter_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Int64Converter::get_SupportHex()
extern "C" bool Int64Converter_get_SupportHex_m7861 (Int64Converter_t1529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Int64Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* Int64Converter_ConvertToString_m7862 (Int64Converter_t1529 * __this, Object_t * ___value, NumberFormatInfo_t959 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int64Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * Int64Converter_ConvertFromString_m7863 (Int64Converter_t1529 * __this, String_t* ___value, NumberFormatInfo_t959 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int64Converter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * Int64Converter_ConvertFromString_m7864 (Int64Converter_t1529 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
