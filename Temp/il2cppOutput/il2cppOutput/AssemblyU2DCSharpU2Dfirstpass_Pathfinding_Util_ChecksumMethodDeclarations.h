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

// Pathfinding.Util.Checksum
struct Checksum_t250;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Util.Checksum::.ctor()
extern "C" void Checksum__ctor_m1205 (Checksum_t250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Util.Checksum::.cctor()
extern "C" void Checksum__cctor_m1206 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Util.Checksum::GetChecksum(System.Byte[])
extern "C" uint32_t Checksum_GetChecksum_m1207 (Object_t * __this /* static, unused */, ByteU5BU5D_t29* ___Value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Util.Checksum::GetChecksum(System.Byte[],System.UInt32)
extern "C" uint32_t Checksum_GetChecksum_m1208 (Object_t * __this /* static, unused */, ByteU5BU5D_t29* ___Value, uint32_t ___CRCVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
