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

// Pathfinding.Ionic.Zlib.InflateCodes
struct InflateCodes_t1043;
// System.Int32[]
struct Int32U5BU5D_t16;
// Pathfinding.Ionic.Zlib.InflateBlocks
struct InflateBlocks_t1042;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1032;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Ionic.Zlib.InflateCodes::.ctor()
extern "C" void InflateCodes__ctor_m5024 (InflateCodes_t1043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.InflateCodes::Init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
extern "C" void InflateCodes_Init_m5025 (InflateCodes_t1043 * __this, int32_t ___bl, int32_t ___bd, Int32U5BU5D_t16* ___tl, int32_t ___tl_index, Int32U5BU5D_t16* ___td, int32_t ___td_index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::Process(Pathfinding.Ionic.Zlib.InflateBlocks,System.Int32)
extern "C" int32_t InflateCodes_Process_m5026 (InflateCodes_t1043 * __this, InflateBlocks_t1042 * ___blocks, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::InflateFast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Pathfinding.Ionic.Zlib.InflateBlocks,Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C" int32_t InflateCodes_InflateFast_m5027 (InflateCodes_t1043 * __this, int32_t ___bl, int32_t ___bd, Int32U5BU5D_t16* ___tl, int32_t ___tl_index, Int32U5BU5D_t16* ___td, int32_t ___td_index, InflateBlocks_t1042 * ___s, ZlibCodec_t1032 * ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
