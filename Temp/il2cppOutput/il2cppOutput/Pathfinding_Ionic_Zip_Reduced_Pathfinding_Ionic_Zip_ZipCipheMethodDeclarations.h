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

// Pathfinding.Ionic.Zip.ZipCipherStream
struct ZipCipherStream_t999;
// System.IO.Stream
struct Stream_t448;
// Pathfinding.Ionic.Zip.ZipCrypto
struct ZipCrypto_t996;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_CryptoMo.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Pathfinding.Ionic.Zip.ZipCipherStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zip.ZipCrypto,Pathfinding.Ionic.Zip.CryptoMode)
extern "C" void ZipCipherStream__ctor_m4638 (ZipCipherStream_t999 * __this, Stream_t448 * ___s, ZipCrypto_t996 * ___cipher, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipCipherStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZipCipherStream_Read_m4639 (ZipCipherStream_t999 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipCipherStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ZipCipherStream_Write_m4640 (ZipCipherStream_t999 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipCipherStream::get_CanRead()
extern "C" bool ZipCipherStream_get_CanRead_m4641 (ZipCipherStream_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipCipherStream::get_CanSeek()
extern "C" bool ZipCipherStream_get_CanSeek_m4642 (ZipCipherStream_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipCipherStream::get_CanWrite()
extern "C" bool ZipCipherStream_get_CanWrite_m4643 (ZipCipherStream_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipCipherStream::Flush()
extern "C" void ZipCipherStream_Flush_m4644 (ZipCipherStream_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipCipherStream::get_Length()
extern "C" int64_t ZipCipherStream_get_Length_m4645 (ZipCipherStream_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipCipherStream::get_Position()
extern "C" int64_t ZipCipherStream_get_Position_m4646 (ZipCipherStream_t999 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipCipherStream::set_Position(System.Int64)
extern "C" void ZipCipherStream_set_Position_m4647 (ZipCipherStream_t999 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipCipherStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t ZipCipherStream_Seek_m4648 (ZipCipherStream_t999 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipCipherStream::SetLength(System.Int64)
extern "C" void ZipCipherStream_SetLength_m4649 (ZipCipherStream_t999 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
