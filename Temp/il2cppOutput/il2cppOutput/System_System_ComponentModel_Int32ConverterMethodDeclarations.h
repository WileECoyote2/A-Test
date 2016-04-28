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

// System.ComponentModel.Int32Converter
struct Int32Converter_t1528;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t959;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Int32Converter::.ctor()
extern "C" void Int32Converter__ctor_m7855 (Int32Converter_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Int32Converter::get_SupportHex()
extern "C" bool Int32Converter_get_SupportHex_m7856 (Int32Converter_t1528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Int32Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* Int32Converter_ConvertToString_m7857 (Int32Converter_t1528 * __this, Object_t * ___value, NumberFormatInfo_t959 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int32Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * Int32Converter_ConvertFromString_m7858 (Int32Converter_t1528 * __this, String_t* ___value, NumberFormatInfo_t959 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int32Converter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * Int32Converter_ConvertFromString_m7859 (Int32Converter_t1528 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
