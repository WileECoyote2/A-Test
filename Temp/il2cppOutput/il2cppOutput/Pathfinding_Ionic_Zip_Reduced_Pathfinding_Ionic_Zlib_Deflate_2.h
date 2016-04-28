#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc
struct CompressFunc_t1028;
// System.String[]
struct StringU5BU5D_t63;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1032;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.Int16[]
struct Int16U5BU5D_t1033;
// Pathfinding.Ionic.Zlib.DeflateManager/Config
struct Config_t1029;
// Pathfinding.Ionic.Zlib.Tree
struct Tree_t1034;
// System.Int32[]
struct Int32U5BU5D_t16;
// System.SByte[]
struct SByteU5BU5D_t1035;

#include "mscorlib_System_Object.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres_0.h"

// Pathfinding.Ionic.Zlib.DeflateManager
struct  DeflateManager_t1031  : public Object_t
{
	// Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc Pathfinding.Ionic.Zlib.DeflateManager::DeflateFunction
	CompressFunc_t1028 * ___DeflateFunction_2;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.DeflateManager::_codec
	ZlibCodec_t1032 * ____codec_21;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::status
	int32_t ___status_22;
	// System.Byte[] Pathfinding.Ionic.Zlib.DeflateManager::pending
	ByteU5BU5D_t29* ___pending_23;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::nextPending
	int32_t ___nextPending_24;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::pendingCount
	int32_t ___pendingCount_25;
	// System.SByte Pathfinding.Ionic.Zlib.DeflateManager::data_type
	int8_t ___data_type_26;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::last_flush
	int32_t ___last_flush_27;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::w_size
	int32_t ___w_size_28;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::w_bits
	int32_t ___w_bits_29;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::w_mask
	int32_t ___w_mask_30;
	// System.Byte[] Pathfinding.Ionic.Zlib.DeflateManager::window
	ByteU5BU5D_t29* ___window_31;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::window_size
	int32_t ___window_size_32;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::prev
	Int16U5BU5D_t1033* ___prev_33;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::head
	Int16U5BU5D_t1033* ___head_34;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::ins_h
	int32_t ___ins_h_35;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_size
	int32_t ___hash_size_36;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_bits
	int32_t ___hash_bits_37;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_mask
	int32_t ___hash_mask_38;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_shift
	int32_t ___hash_shift_39;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::block_start
	int32_t ___block_start_40;
	// Pathfinding.Ionic.Zlib.DeflateManager/Config Pathfinding.Ionic.Zlib.DeflateManager::config
	Config_t1029 * ___config_41;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::match_length
	int32_t ___match_length_42;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::prev_match
	int32_t ___prev_match_43;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::match_available
	int32_t ___match_available_44;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::strstart
	int32_t ___strstart_45;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::match_start
	int32_t ___match_start_46;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::lookahead
	int32_t ___lookahead_47;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::prev_length
	int32_t ___prev_length_48;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.DeflateManager::compressionLevel
	int32_t ___compressionLevel_49;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.DeflateManager::compressionStrategy
	int32_t ___compressionStrategy_50;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::dyn_ltree
	Int16U5BU5D_t1033* ___dyn_ltree_51;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::dyn_dtree
	Int16U5BU5D_t1033* ___dyn_dtree_52;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::bl_tree
	Int16U5BU5D_t1033* ___bl_tree_53;
	// Pathfinding.Ionic.Zlib.Tree Pathfinding.Ionic.Zlib.DeflateManager::treeLiterals
	Tree_t1034 * ___treeLiterals_54;
	// Pathfinding.Ionic.Zlib.Tree Pathfinding.Ionic.Zlib.DeflateManager::treeDistances
	Tree_t1034 * ___treeDistances_55;
	// Pathfinding.Ionic.Zlib.Tree Pathfinding.Ionic.Zlib.DeflateManager::treeBitLengths
	Tree_t1034 * ___treeBitLengths_56;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::bl_count
	Int16U5BU5D_t1033* ___bl_count_57;
	// System.Int32[] Pathfinding.Ionic.Zlib.DeflateManager::heap
	Int32U5BU5D_t16* ___heap_58;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::heap_len
	int32_t ___heap_len_59;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::heap_max
	int32_t ___heap_max_60;
	// System.SByte[] Pathfinding.Ionic.Zlib.DeflateManager::depth
	SByteU5BU5D_t1035* ___depth_61;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::_lengthOffset
	int32_t ____lengthOffset_62;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::lit_bufsize
	int32_t ___lit_bufsize_63;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::last_lit
	int32_t ___last_lit_64;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::_distanceOffset
	int32_t ____distanceOffset_65;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::opt_len
	int32_t ___opt_len_66;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::static_len
	int32_t ___static_len_67;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::matches
	int32_t ___matches_68;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::last_eob_len
	int32_t ___last_eob_len_69;
	// System.Int16 Pathfinding.Ionic.Zlib.DeflateManager::bi_buf
	int16_t ___bi_buf_70;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::bi_valid
	int32_t ___bi_valid_71;
	// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::Rfc1950BytesEmitted
	bool ___Rfc1950BytesEmitted_72;
	// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_WantRfc1950HeaderBytes
	bool ____WantRfc1950HeaderBytes_73;
};
struct DeflateManager_t1031_StaticFields{
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MEM_LEVEL_MAX
	int32_t ___MEM_LEVEL_MAX_0;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MEM_LEVEL_DEFAULT
	int32_t ___MEM_LEVEL_DEFAULT_1;
	// System.String[] Pathfinding.Ionic.Zlib.DeflateManager::_ErrorMessage
	StringU5BU5D_t63* ____ErrorMessage_3;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::PRESET_DICT
	int32_t ___PRESET_DICT_4;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::INIT_STATE
	int32_t ___INIT_STATE_5;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::BUSY_STATE
	int32_t ___BUSY_STATE_6;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::FINISH_STATE
	int32_t ___FINISH_STATE_7;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_DEFLATED
	int32_t ___Z_DEFLATED_8;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::STORED_BLOCK
	int32_t ___STORED_BLOCK_9;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::STATIC_TREES
	int32_t ___STATIC_TREES_10;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::DYN_TREES
	int32_t ___DYN_TREES_11;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_BINARY
	int32_t ___Z_BINARY_12;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_ASCII
	int32_t ___Z_ASCII_13;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_UNKNOWN
	int32_t ___Z_UNKNOWN_14;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Buf_size
	int32_t ___Buf_size_15;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MIN_MATCH
	int32_t ___MIN_MATCH_16;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MAX_MATCH
	int32_t ___MAX_MATCH_17;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MIN_LOOKAHEAD
	int32_t ___MIN_LOOKAHEAD_18;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::HEAP_SIZE
	int32_t ___HEAP_SIZE_19;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::END_BLOCK
	int32_t ___END_BLOCK_20;
};
