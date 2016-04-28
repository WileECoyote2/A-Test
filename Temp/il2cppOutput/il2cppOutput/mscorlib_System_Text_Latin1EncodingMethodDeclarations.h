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

// System.Text.Latin1Encoding
struct Latin1Encoding_t2237;
// System.Char[]
struct CharU5BU5D_t469;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t2232;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.Latin1Encoding::.ctor()
extern "C" void Latin1Encoding__ctor_m13049 (Latin1Encoding_t2237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t Latin1Encoding_GetByteCount_m13050 (Latin1Encoding_t2237 * __this, CharU5BU5D_t469* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.String)
extern "C" int32_t Latin1Encoding_GetByteCount_m13051 (Latin1Encoding_t2237 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Latin1Encoding_GetBytes_m13052 (Latin1Encoding_t2237 * __this, CharU5BU5D_t469* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t29* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t Latin1Encoding_GetBytes_m13053 (Latin1Encoding_t2237 * __this, CharU5BU5D_t469* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t29* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2232 ** ___buffer, CharU5BU5D_t469** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Latin1Encoding_GetBytes_m13054 (Latin1Encoding_t2237 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t29* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t Latin1Encoding_GetBytes_m13055 (Latin1Encoding_t2237 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t29* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2232 ** ___buffer, CharU5BU5D_t469** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t Latin1Encoding_GetCharCount_m13056 (Latin1Encoding_t2237 * __this, ByteU5BU5D_t29* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t Latin1Encoding_GetChars_m13057 (Latin1Encoding_t2237 * __this, ByteU5BU5D_t29* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t469* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxByteCount(System.Int32)
extern "C" int32_t Latin1Encoding_GetMaxByteCount_m13058 (Latin1Encoding_t2237 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxCharCount(System.Int32)
extern "C" int32_t Latin1Encoding_GetMaxCharCount_m13059 (Latin1Encoding_t2237 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* Latin1Encoding_GetString_m13060 (Latin1Encoding_t2237 * __this, ByteU5BU5D_t29* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[])
extern "C" String_t* Latin1Encoding_GetString_m13061 (Latin1Encoding_t2237 * __this, ByteU5BU5D_t29* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::get_HeaderName()
extern "C" String_t* Latin1Encoding_get_HeaderName_m13062 (Latin1Encoding_t2237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::get_WebName()
extern "C" String_t* Latin1Encoding_get_WebName_m13063 (Latin1Encoding_t2237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
