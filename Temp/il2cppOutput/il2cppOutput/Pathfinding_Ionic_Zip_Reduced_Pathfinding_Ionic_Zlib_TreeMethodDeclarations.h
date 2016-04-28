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

// Pathfinding.Ionic.Zlib.Tree
struct Tree_t1034;
// Pathfinding.Ionic.Zlib.DeflateManager
struct DeflateManager_t1031;
// System.Int16[]
struct Int16U5BU5D_t1033;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Ionic.Zlib.Tree::.ctor()
extern "C" void Tree__ctor_m5063 (Tree_t1034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.Tree::.cctor()
extern "C" void Tree__cctor_m5064 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.Tree::DistanceCode(System.Int32)
extern "C" int32_t Tree_DistanceCode_m5065 (Object_t * __this /* static, unused */, int32_t ___dist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.Tree::gen_bitlen(Pathfinding.Ionic.Zlib.DeflateManager)
extern "C" void Tree_gen_bitlen_m5066 (Tree_t1034 * __this, DeflateManager_t1031 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.Tree::build_tree(Pathfinding.Ionic.Zlib.DeflateManager)
extern "C" void Tree_build_tree_m5067 (Tree_t1034 * __this, DeflateManager_t1031 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.Tree::gen_codes(System.Int16[],System.Int32,System.Int16[])
extern "C" void Tree_gen_codes_m5068 (Object_t * __this /* static, unused */, Int16U5BU5D_t1033* ___tree, int32_t ___max_code, Int16U5BU5D_t1033* ___bl_count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.Tree::bi_reverse(System.Int32,System.Int32)
extern "C" int32_t Tree_bi_reverse_m5069 (Object_t * __this /* static, unused */, int32_t ___code, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
