#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1032;
// Pathfinding.Ionic.Zlib.InflateBlocks
struct InflateBlocks_t1042;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "mscorlib_System_Object.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Inflate_2.h"

// Pathfinding.Ionic.Zlib.InflateManager
struct  InflateManager_t1046  : public Object_t
{
	// Pathfinding.Ionic.Zlib.InflateManager/InflateManagerMode Pathfinding.Ionic.Zlib.InflateManager::mode
	int32_t ___mode_0;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.InflateManager::_codec
	ZlibCodec_t1032 * ____codec_1;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::method
	int32_t ___method_2;
	// System.UInt32 Pathfinding.Ionic.Zlib.InflateManager::computedCheck
	uint32_t ___computedCheck_3;
	// System.UInt32 Pathfinding.Ionic.Zlib.InflateManager::expectedCheck
	uint32_t ___expectedCheck_4;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::marker
	int32_t ___marker_5;
	// System.Boolean Pathfinding.Ionic.Zlib.InflateManager::_handleRfc1950HeaderBytes
	bool ____handleRfc1950HeaderBytes_6;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateManager::wbits
	int32_t ___wbits_7;
	// Pathfinding.Ionic.Zlib.InflateBlocks Pathfinding.Ionic.Zlib.InflateManager::blocks
	InflateBlocks_t1042 * ___blocks_8;
};
struct InflateManager_t1046_StaticFields{
	// System.Byte[] Pathfinding.Ionic.Zlib.InflateManager::mark
	ByteU5BU5D_t29* ___mark_9;
};
