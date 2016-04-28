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

// System.ComponentModel.UInt32Converter
struct UInt32Converter_t1558;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t959;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.UInt32Converter::.ctor()
extern "C" void UInt32Converter__ctor_m8133 (UInt32Converter_t1558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.UInt32Converter::get_SupportHex()
extern "C" bool UInt32Converter_get_SupportHex_m8134 (UInt32Converter_t1558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.UInt32Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* UInt32Converter_ConvertToString_m8135 (UInt32Converter_t1558 * __this, Object_t * ___value, NumberFormatInfo_t959 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt32Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * UInt32Converter_ConvertFromString_m8136 (UInt32Converter_t1558 * __this, String_t* ___value, NumberFormatInfo_t959 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt32Converter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * UInt32Converter_ConvertFromString_m8137 (UInt32Converter_t1558 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
