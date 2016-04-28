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

// Pathfinding.Ionic.Zip.ExtractProgressEventArgs
struct ExtractProgressEventArgs_t985;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t392;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipProgr.h"

// System.Void Pathfinding.Ionic.Zip.ExtractProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
extern "C" void ExtractProgressEventArgs__ctor_m4562 (ExtractProgressEventArgs_t985 * __this, String_t* ___archiveName, int32_t ___flavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ExtractProgressEventArgs::.ctor()
extern "C" void ExtractProgressEventArgs__ctor_m4563 (ExtractProgressEventArgs_t985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ExtractProgressEventArgs Pathfinding.Ionic.Zip.ExtractProgressEventArgs::BeforeExtractEntry(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.String)
extern "C" ExtractProgressEventArgs_t985 * ExtractProgressEventArgs_BeforeExtractEntry_m4564 (Object_t * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t392 * ___entry, String_t* ___extractLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ExtractProgressEventArgs Pathfinding.Ionic.Zip.ExtractProgressEventArgs::ExtractExisting(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.String)
extern "C" ExtractProgressEventArgs_t985 * ExtractProgressEventArgs_ExtractExisting_m4565 (Object_t * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t392 * ___entry, String_t* ___extractLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ExtractProgressEventArgs Pathfinding.Ionic.Zip.ExtractProgressEventArgs::AfterExtractEntry(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.String)
extern "C" ExtractProgressEventArgs_t985 * ExtractProgressEventArgs_AfterExtractEntry_m4566 (Object_t * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t392 * ___entry, String_t* ___extractLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ExtractProgressEventArgs Pathfinding.Ionic.Zip.ExtractProgressEventArgs::ByteUpdate(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C" ExtractProgressEventArgs_t985 * ExtractProgressEventArgs_ByteUpdate_m4567 (Object_t * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t392 * ___entry, int64_t ___bytesWritten, int64_t ___totalBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
