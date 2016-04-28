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

// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1032;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_FlushTy.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres.h"

// System.Void Pathfinding.Ionic.Zlib.ZlibCodec::.ctor()
extern "C" void ZlibCodec__ctor_m5098 (ZlibCodec_t1032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::InitializeInflate(System.Boolean)
extern "C" int32_t ZlibCodec_InitializeInflate_m5099 (ZlibCodec_t1032 * __this, bool ___expectRfc1950Header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::InitializeInflate(System.Int32,System.Boolean)
extern "C" int32_t ZlibCodec_InitializeInflate_m5100 (ZlibCodec_t1032 * __this, int32_t ___windowBits, bool ___expectRfc1950Header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::Inflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C" int32_t ZlibCodec_Inflate_m5101 (ZlibCodec_t1032 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::EndInflate()
extern "C" int32_t ZlibCodec_EndInflate_m5102 (ZlibCodec_t1032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::InitializeDeflate(Pathfinding.Ionic.Zlib.CompressionLevel,System.Boolean)
extern "C" int32_t ZlibCodec_InitializeDeflate_m5103 (ZlibCodec_t1032 * __this, int32_t ___level, bool ___wantRfc1950Header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::_InternalInitializeDeflate(System.Boolean)
extern "C" int32_t ZlibCodec__InternalInitializeDeflate_m5104 (ZlibCodec_t1032 * __this, bool ___wantRfc1950Header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::Deflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C" int32_t ZlibCodec_Deflate_m5105 (ZlibCodec_t1032 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::EndDeflate()
extern "C" int32_t ZlibCodec_EndDeflate_m5106 (ZlibCodec_t1032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibCodec::ResetDeflate()
extern "C" void ZlibCodec_ResetDeflate_m5107 (ZlibCodec_t1032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibCodec::flush_pending()
extern "C" void ZlibCodec_flush_pending_m5108 (ZlibCodec_t1032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::read_buf(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZlibCodec_read_buf_m5109 (ZlibCodec_t1032 * __this, ByteU5BU5D_t29* ___buf, int32_t ___start, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
