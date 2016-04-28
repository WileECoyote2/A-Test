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

// Pathfinding.Ionic.Crc.CRC32
struct CRC32_t997;
// System.IO.Stream
struct Stream_t448;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.UInt32[]
struct UInt32U5BU5D_t130;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Ionic.Crc.CRC32::.ctor()
extern "C" void CRC32__ctor_m5110 (CRC32_t997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CRC32::.ctor(System.Boolean)
extern "C" void CRC32__ctor_m5111 (CRC32_t997 * __this, bool ___reverseBits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CRC32::.ctor(System.Int32,System.Boolean)
extern "C" void CRC32__ctor_m5112 (CRC32_t997 * __this, int32_t ___polynomial, bool ___reverseBits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Crc.CRC32::get_TotalBytesRead()
extern "C" int64_t CRC32_get_TotalBytesRead_m5113 (CRC32_t997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Crc.CRC32::get_Crc32Result()
extern "C" int32_t CRC32_get_Crc32Result_m5114 (CRC32_t997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Crc.CRC32::GetCrc32(System.IO.Stream)
extern "C" int32_t CRC32_GetCrc32_m5115 (CRC32_t997 * __this, Stream_t448 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Crc.CRC32::GetCrc32AndCopy(System.IO.Stream,System.IO.Stream)
extern "C" int32_t CRC32_GetCrc32AndCopy_m5116 (CRC32_t997 * __this, Stream_t448 * ___input, Stream_t448 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Crc.CRC32::ComputeCrc32(System.Int32,System.Byte)
extern "C" int32_t CRC32_ComputeCrc32_m5117 (CRC32_t997 * __this, int32_t ___W, uint8_t ___B, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Crc.CRC32::_InternalComputeCrc32(System.UInt32,System.Byte)
extern "C" int32_t CRC32__InternalComputeCrc32_m5118 (CRC32_t997 * __this, uint32_t ___W, uint8_t ___B, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CRC32::SlurpBlock(System.Byte[],System.Int32,System.Int32)
extern "C" void CRC32_SlurpBlock_m5119 (CRC32_t997 * __this, ByteU5BU5D_t29* ___block, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Ionic.Crc.CRC32::ReverseBits(System.UInt32)
extern "C" uint32_t CRC32_ReverseBits_m5120 (Object_t * __this /* static, unused */, uint32_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Pathfinding.Ionic.Crc.CRC32::ReverseBits(System.Byte)
extern "C" uint8_t CRC32_ReverseBits_m5121 (Object_t * __this /* static, unused */, uint8_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CRC32::GenerateLookupTable()
extern "C" void CRC32_GenerateLookupTable_m5122 (CRC32_t997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Ionic.Crc.CRC32::gf2_matrix_times(System.UInt32[],System.UInt32)
extern "C" uint32_t CRC32_gf2_matrix_times_m5123 (CRC32_t997 * __this, UInt32U5BU5D_t130* ___matrix, uint32_t ___vec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CRC32::gf2_matrix_square(System.UInt32[],System.UInt32[])
extern "C" void CRC32_gf2_matrix_square_m5124 (CRC32_t997 * __this, UInt32U5BU5D_t130* ___square, UInt32U5BU5D_t130* ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CRC32::Combine(System.Int32,System.Int32)
extern "C" void CRC32_Combine_m5125 (CRC32_t997 * __this, int32_t ___crc, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
