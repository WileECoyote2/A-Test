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

// Pathfinding.Ionic.Zip.ZipCrypto
struct ZipCrypto_t996;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t392;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Ionic.Zip.ZipCrypto::.ctor()
extern "C" void ZipCrypto__ctor_m4630 (ZipCrypto_t996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipCrypto::ForWrite(System.String)
extern "C" ZipCrypto_t996 * ZipCrypto_ForWrite_m4631 (Object_t * __this /* static, unused */, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipCrypto::ForRead(System.String,Pathfinding.Ionic.Zip.ZipEntry)
extern "C" ZipCrypto_t996 * ZipCrypto_ForRead_m4632 (Object_t * __this /* static, unused */, String_t* ___password, ZipEntry_t392 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Pathfinding.Ionic.Zip.ZipCrypto::get_MagicByte()
extern "C" uint8_t ZipCrypto_get_MagicByte_m4633 (ZipCrypto_t996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.ZipCrypto::DecryptMessage(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t29* ZipCrypto_DecryptMessage_m4634 (ZipCrypto_t996 * __this, ByteU5BU5D_t29* ___cipherText, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.ZipCrypto::EncryptMessage(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t29* ZipCrypto_EncryptMessage_m4635 (ZipCrypto_t996 * __this, ByteU5BU5D_t29* ___plainText, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipCrypto::InitCipher(System.String)
extern "C" void ZipCrypto_InitCipher_m4636 (ZipCrypto_t996 * __this, String_t* ___passphrase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipCrypto::UpdateKeys(System.Byte)
extern "C" void ZipCrypto_UpdateKeys_m4637 (ZipCrypto_t996 * __this, uint8_t ___byteValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
