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

// System.Text.DecoderFallbackException
struct DecoderFallbackException_t2226;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.DecoderFallbackException::.ctor()
extern "C" void DecoderFallbackException__ctor_m12966 (DecoderFallbackException_t2226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderFallbackException::.ctor(System.String)
extern "C" void DecoderFallbackException__ctor_m12967 (DecoderFallbackException_t2226 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderFallbackException::.ctor(System.String,System.Byte[],System.Int32)
extern "C" void DecoderFallbackException__ctor_m12968 (DecoderFallbackException_t2226 * __this, String_t* ___message, ByteU5BU5D_t29* ___bytesUnknown, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
