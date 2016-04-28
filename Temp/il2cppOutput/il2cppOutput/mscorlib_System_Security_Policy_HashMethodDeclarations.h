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

// System.Security.Policy.Hash
struct Hash_t2204;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t845;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.Policy.Hash::.ctor()
extern "C" void Hash__ctor_m12853 (Hash_t2204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Hash::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hash__ctor_m12854 (Hash_t2204 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Hash::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hash_GetObjectData_m12855 (Hash_t2204 * __this, SerializationInfo_t845 * ___info, StreamingContext_t846  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.Hash::ToString()
extern "C" String_t* Hash_ToString_m12856 (Hash_t2204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Policy.Hash::GetData()
extern "C" ByteU5BU5D_t29* Hash_GetData_m12857 (Hash_t2204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
