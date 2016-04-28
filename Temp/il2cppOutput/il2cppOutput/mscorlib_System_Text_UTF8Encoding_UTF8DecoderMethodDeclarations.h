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

// System.Text.UTF8Encoding/UTF8Decoder
struct UTF8Decoder_t2242;
// System.Text.DecoderFallback
struct DecoderFallback_t2222;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.Char[]
struct CharU5BU5D_t469;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UTF8Encoding/UTF8Decoder::.ctor(System.Text.DecoderFallback)
extern "C" void UTF8Decoder__ctor_m13126 (UTF8Decoder_t2242 * __this, DecoderFallback_t2222 * ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding/UTF8Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF8Decoder_GetChars_m13127 (UTF8Decoder_t2242 * __this, ByteU5BU5D_t29* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t469* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
