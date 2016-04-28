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

// Pathfinding.Ionic.Zlib.InflateBlocks
struct InflateBlocks_t1042;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1032;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::.ctor(Pathfinding.Ionic.Zlib.ZlibCodec,System.Object,System.Int32)
extern "C" void InflateBlocks__ctor_m5017 (InflateBlocks_t1042 * __this, ZlibCodec_t1032 * ___codec, Object_t * ___checkfn, int32_t ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::.cctor()
extern "C" void InflateBlocks__cctor_m5018 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Ionic.Zlib.InflateBlocks::Reset()
extern "C" uint32_t InflateBlocks_Reset_m5019 (InflateBlocks_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::Process(System.Int32)
extern "C" int32_t InflateBlocks_Process_m5020 (InflateBlocks_t1042 * __this, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::Free()
extern "C" void InflateBlocks_Free_m5021 (InflateBlocks_t1042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::Flush(System.Int32)
extern "C" int32_t InflateBlocks_Flush_m5022 (InflateBlocks_t1042 * __this, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
