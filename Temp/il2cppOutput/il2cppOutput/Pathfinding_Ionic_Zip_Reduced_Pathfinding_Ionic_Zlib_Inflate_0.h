#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t16;
// Pathfinding.Ionic.Zlib.InflateCodes
struct InflateCodes_t1043;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1032;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.Object
struct Object_t;
// Pathfinding.Ionic.Zlib.InfTree
struct InfTree_t1040;

#include "mscorlib_System_Object.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Inflate.h"

// Pathfinding.Ionic.Zlib.InflateBlocks
struct  InflateBlocks_t1042  : public Object_t
{
	// Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode Pathfinding.Ionic.Zlib.InflateBlocks::mode
	int32_t ___mode_1;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::left
	int32_t ___left_2;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::table
	int32_t ___table_3;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::index
	int32_t ___index_4;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::blens
	Int32U5BU5D_t16* ___blens_5;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::bb
	Int32U5BU5D_t16* ___bb_6;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::tb
	Int32U5BU5D_t16* ___tb_7;
	// Pathfinding.Ionic.Zlib.InflateCodes Pathfinding.Ionic.Zlib.InflateBlocks::codes
	InflateCodes_t1043 * ___codes_8;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::last
	int32_t ___last_9;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.InflateBlocks::_codec
	ZlibCodec_t1032 * ____codec_10;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::bitk
	int32_t ___bitk_11;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::bitb
	int32_t ___bitb_12;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::hufts
	Int32U5BU5D_t16* ___hufts_13;
	// System.Byte[] Pathfinding.Ionic.Zlib.InflateBlocks::window
	ByteU5BU5D_t29* ___window_14;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::end
	int32_t ___end_15;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::readAt
	int32_t ___readAt_16;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::writeAt
	int32_t ___writeAt_17;
	// System.Object Pathfinding.Ionic.Zlib.InflateBlocks::checkfn
	Object_t * ___checkfn_18;
	// System.UInt32 Pathfinding.Ionic.Zlib.InflateBlocks::check
	uint32_t ___check_19;
	// Pathfinding.Ionic.Zlib.InfTree Pathfinding.Ionic.Zlib.InflateBlocks::inftree
	InfTree_t1040 * ___inftree_20;
};
struct InflateBlocks_t1042_StaticFields{
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::border
	Int32U5BU5D_t16* ___border_0;
};
