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

// Pathfinding.Ionic.Zlib.DeflateManager
struct DeflateManager_t1031;
// System.Int16[]
struct Int16U5BU5D_t1033;
// System.SByte[]
struct SByteU5BU5D_t1035;
// System.Byte[]
struct ByteU5BU5D_t29;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1032;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_BlockSt.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_FlushTy.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres_0.h"

// System.Void Pathfinding.Ionic.Zlib.DeflateManager::.ctor()
extern "C" void DeflateManager__ctor_m4940 (DeflateManager_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::.cctor()
extern "C" void DeflateManager__cctor_m4941 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeLazyMatch()
extern "C" void DeflateManager__InitializeLazyMatch_m4942 (DeflateManager_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeTreeData()
extern "C" void DeflateManager__InitializeTreeData_m4943 (DeflateManager_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeBlocks()
extern "C" void DeflateManager__InitializeBlocks_m4944 (DeflateManager_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::pqdownheap(System.Int16[],System.Int32)
extern "C" void DeflateManager_pqdownheap_m4945 (DeflateManager_t1031 * __this, Int16U5BU5D_t1033* ___tree, int32_t ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_IsSmaller(System.Int16[],System.Int32,System.Int32,System.SByte[])
extern "C" bool DeflateManager__IsSmaller_m4946 (Object_t * __this /* static, unused */, Int16U5BU5D_t1033* ___tree, int32_t ___n, int32_t ___m, SByteU5BU5D_t1035* ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::scan_tree(System.Int16[],System.Int32)
extern "C" void DeflateManager_scan_tree_m4947 (DeflateManager_t1031 * __this, Int16U5BU5D_t1033* ___tree, int32_t ___max_code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::build_bl_tree()
extern "C" int32_t DeflateManager_build_bl_tree_m4948 (DeflateManager_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_all_trees(System.Int32,System.Int32,System.Int32)
extern "C" void DeflateManager_send_all_trees_m4949 (DeflateManager_t1031 * __this, int32_t ___lcodes, int32_t ___dcodes, int32_t ___blcodes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_tree(System.Int16[],System.Int32)
extern "C" void DeflateManager_send_tree_m4950 (DeflateManager_t1031 * __this, Int16U5BU5D_t1033* ___tree, int32_t ___max_code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::put_bytes(System.Byte[],System.Int32,System.Int32)
extern "C" void DeflateManager_put_bytes_m4951 (DeflateManager_t1031 * __this, ByteU5BU5D_t29* ___p, int32_t ___start, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_code(System.Int32,System.Int16[])
extern "C" void DeflateManager_send_code_m4952 (DeflateManager_t1031 * __this, int32_t ___c, Int16U5BU5D_t1033* ___tree, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_bits(System.Int32,System.Int32)
extern "C" void DeflateManager_send_bits_m4953 (DeflateManager_t1031 * __this, int32_t ___value, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_align()
extern "C" void DeflateManager__tr_align_m4954 (DeflateManager_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_tr_tally(System.Int32,System.Int32)
extern "C" bool DeflateManager__tr_tally_m4955 (DeflateManager_t1031 * __this, int32_t ___dist, int32_t ___lc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_compressed_block(System.Int16[],System.Int16[])
extern "C" void DeflateManager_send_compressed_block_m4956 (DeflateManager_t1031 * __this, Int16U5BU5D_t1033* ___ltree, Int16U5BU5D_t1033* ___dtree, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::set_data_type()
extern "C" void DeflateManager_set_data_type_m4957 (DeflateManager_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::bi_flush()
extern "C" void DeflateManager_bi_flush_m4958 (DeflateManager_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::bi_windup()
extern "C" void DeflateManager_bi_windup_m4959 (DeflateManager_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::copy_block(System.Int32,System.Int32,System.Boolean)
extern "C" void DeflateManager_copy_block_m4960 (DeflateManager_t1031 * __this, int32_t ___buf, int32_t ___len, bool ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::flush_block_only(System.Boolean)
extern "C" void DeflateManager_flush_block_only_m4961 (DeflateManager_t1031 * __this, bool ___eof, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager::DeflateNone(Pathfinding.Ionic.Zlib.FlushType)
extern "C" int32_t DeflateManager_DeflateNone_m4962 (DeflateManager_t1031 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
extern "C" void DeflateManager__tr_stored_block_m4963 (DeflateManager_t1031 * __this, int32_t ___buf, int32_t ___stored_len, bool ___eof, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
extern "C" void DeflateManager__tr_flush_block_m4964 (DeflateManager_t1031 * __this, int32_t ___buf, int32_t ___stored_len, bool ___eof, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_fillWindow()
extern "C" void DeflateManager__fillWindow_m4965 (DeflateManager_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager::DeflateFast(Pathfinding.Ionic.Zlib.FlushType)
extern "C" int32_t DeflateManager_DeflateFast_m4966 (DeflateManager_t1031 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager::DeflateSlow(Pathfinding.Ionic.Zlib.FlushType)
extern "C" int32_t DeflateManager_DeflateSlow_m4967 (DeflateManager_t1031 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::longest_match(System.Int32)
extern "C" int32_t DeflateManager_longest_match_m4968 (DeflateManager_t1031 * __this, int32_t ___cur_match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::get_WantRfc1950HeaderBytes()
extern "C" bool DeflateManager_get_WantRfc1950HeaderBytes_m4969 (DeflateManager_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::set_WantRfc1950HeaderBytes(System.Boolean)
extern "C" void DeflateManager_set_WantRfc1950HeaderBytes_m4970 (DeflateManager_t1031 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,Pathfinding.Ionic.Zlib.CompressionLevel,System.Int32,Pathfinding.Ionic.Zlib.CompressionStrategy)
extern "C" int32_t DeflateManager_Initialize_m4971 (DeflateManager_t1031 * __this, ZlibCodec_t1032 * ___codec, int32_t ___level, int32_t ___bits, int32_t ___compressionStrategy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,Pathfinding.Ionic.Zlib.CompressionLevel,System.Int32,System.Int32,Pathfinding.Ionic.Zlib.CompressionStrategy)
extern "C" int32_t DeflateManager_Initialize_m4972 (DeflateManager_t1031 * __this, ZlibCodec_t1032 * ___codec, int32_t ___level, int32_t ___windowBits, int32_t ___memLevel, int32_t ___strategy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::Reset()
extern "C" void DeflateManager_Reset_m4973 (DeflateManager_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::SetDeflater()
extern "C" void DeflateManager_SetDeflater_m4974 (DeflateManager_t1031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Deflate(Pathfinding.Ionic.Zlib.FlushType)
extern "C" int32_t DeflateManager_Deflate_m4975 (DeflateManager_t1031 * __this, int32_t ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
