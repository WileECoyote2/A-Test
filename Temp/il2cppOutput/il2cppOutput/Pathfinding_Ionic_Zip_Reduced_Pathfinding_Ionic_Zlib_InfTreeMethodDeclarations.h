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

// Pathfinding.Ionic.Zlib.InfTree
struct InfTree_t1040;
// System.Int32[]
struct Int32U5BU5D_t16;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1032;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t1076;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Ionic.Zlib.InfTree::.ctor()
extern "C" void InfTree__ctor_m5010 (InfTree_t1040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.InfTree::.cctor()
extern "C" void InfTree__cctor_m5011 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
extern "C" int32_t InfTree_huft_build_m5012 (InfTree_t1040 * __this, Int32U5BU5D_t16* ___b, int32_t ___bindex, int32_t ___n, int32_t ___s, Int32U5BU5D_t16* ___d, Int32U5BU5D_t16* ___e, Int32U5BU5D_t16* ___t, Int32U5BU5D_t16* ___m, Int32U5BU5D_t16* ___hp, Int32U5BU5D_t16* ___hn, Int32U5BU5D_t16* ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C" int32_t InfTree_inflate_trees_bits_m5013 (InfTree_t1040 * __this, Int32U5BU5D_t16* ___c, Int32U5BU5D_t16* ___bb, Int32U5BU5D_t16* ___tb, Int32U5BU5D_t16* ___hp, ZlibCodec_t1032 * ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C" int32_t InfTree_inflate_trees_dynamic_m5014 (InfTree_t1040 * __this, int32_t ___nl, int32_t ___nd, Int32U5BU5D_t16* ___c, Int32U5BU5D_t16* ___bl, Int32U5BU5D_t16* ___bd, Int32U5BU5D_t16* ___tl, Int32U5BU5D_t16* ___td, Int32U5BU5D_t16* ___hp, ZlibCodec_t1032 * ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],Pathfinding.Ionic.Zlib.ZlibCodec)
extern "C" int32_t InfTree_inflate_trees_fixed_m5015 (Object_t * __this /* static, unused */, Int32U5BU5D_t16* ___bl, Int32U5BU5D_t16* ___bd, Int32U5BU5DU5BU5D_t1076* ___tl, Int32U5BU5DU5BU5D_t1076* ___td, ZlibCodec_t1032 * ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.InfTree::initWorkArea(System.Int32)
extern "C" void InfTree_initWorkArea_m5016 (InfTree_t1040 * __this, int32_t ___vsize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
