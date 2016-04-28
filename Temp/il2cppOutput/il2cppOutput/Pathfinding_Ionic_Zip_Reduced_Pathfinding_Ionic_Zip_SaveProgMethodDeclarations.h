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

// Pathfinding.Ionic.Zip.SaveProgressEventArgs
struct SaveProgressEventArgs_t984;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t392;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipProgr.h"

// System.Void Pathfinding.Ionic.Zip.SaveProgressEventArgs::.ctor(System.String,System.Boolean,System.Int32,System.Int32,Pathfinding.Ionic.Zip.ZipEntry)
extern "C" void SaveProgressEventArgs__ctor_m4557 (SaveProgressEventArgs_t984 * __this, String_t* ___archiveName, bool ___before, int32_t ___entriesTotal, int32_t ___entriesSaved, ZipEntry_t392 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.SaveProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
extern "C" void SaveProgressEventArgs__ctor_m4558 (SaveProgressEventArgs_t984 * __this, String_t* ___archiveName, int32_t ___flavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.SaveProgressEventArgs Pathfinding.Ionic.Zip.SaveProgressEventArgs::ByteUpdate(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C" SaveProgressEventArgs_t984 * SaveProgressEventArgs_ByteUpdate_m4559 (Object_t * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t392 * ___entry, int64_t ___bytesXferred, int64_t ___totalBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.SaveProgressEventArgs Pathfinding.Ionic.Zip.SaveProgressEventArgs::Started(System.String)
extern "C" SaveProgressEventArgs_t984 * SaveProgressEventArgs_Started_m4560 (Object_t * __this /* static, unused */, String_t* ___archiveName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.SaveProgressEventArgs Pathfinding.Ionic.Zip.SaveProgressEventArgs::Completed(System.String)
extern "C" SaveProgressEventArgs_t984 * SaveProgressEventArgs_Completed_m4561 (Object_t * __this /* static, unused */, String_t* ___archiveName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
