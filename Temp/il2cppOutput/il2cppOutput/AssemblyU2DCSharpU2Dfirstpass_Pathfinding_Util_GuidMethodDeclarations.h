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

// System.Byte[]
struct ByteU5BU5D_t29;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Util_Guid.h"

// System.Void Pathfinding.Util.Guid::.ctor(System.Byte[])
extern "C" void Guid__ctor_m1222 (Guid_t257 * __this, ByteU5BU5D_t29* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Util.Guid::.ctor(System.String)
extern "C" void Guid__ctor_m1223 (Guid_t257 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Util.Guid::.cctor()
extern "C" void Guid__cctor_m1224 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Util.Guid Pathfinding.Util.Guid::Parse(System.String)
extern "C" Guid_t257  Guid_Parse_m1225 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Pathfinding.Util.Guid::SwapEndianness(System.UInt64)
extern "C" uint64_t Guid_SwapEndianness_m1226 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Util.Guid::ToByteArray()
extern "C" ByteU5BU5D_t29* Guid_ToByteArray_m1227 (Guid_t257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Util.Guid Pathfinding.Util.Guid::NewGuid()
extern "C" Guid_t257  Guid_NewGuid_m1228 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Util.Guid::Equals(System.Object)
extern "C" bool Guid_Equals_m1229 (Guid_t257 * __this, Object_t * ____rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Util.Guid::GetHashCode()
extern "C" int32_t Guid_GetHashCode_m1230 (Guid_t257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Util.Guid::ToString()
extern "C" String_t* Guid_ToString_m1231 (Guid_t257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Util.Guid::op_Equality(Pathfinding.Util.Guid,Pathfinding.Util.Guid)
extern "C" bool Guid_op_Equality_m1232 (Object_t * __this /* static, unused */, Guid_t257  ___lhs, Guid_t257  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Util.Guid::op_Inequality(Pathfinding.Util.Guid,Pathfinding.Util.Guid)
extern "C" bool Guid_op_Inequality_m1233 (Object_t * __this /* static, unused */, Guid_t257  ___lhs, Guid_t257  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
