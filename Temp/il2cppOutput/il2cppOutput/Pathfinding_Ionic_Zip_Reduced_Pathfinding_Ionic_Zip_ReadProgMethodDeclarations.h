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

// Pathfinding.Ionic.Zip.ReadProgressEventArgs
struct ReadProgressEventArgs_t982;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t392;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipProgr.h"

// System.Void Pathfinding.Ionic.Zip.ReadProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
extern "C" void ReadProgressEventArgs__ctor_m4549 (ReadProgressEventArgs_t982 * __this, String_t* ___archiveName, int32_t ___flavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ReadProgressEventArgs Pathfinding.Ionic.Zip.ReadProgressEventArgs::Before(System.String,System.Int32)
extern "C" ReadProgressEventArgs_t982 * ReadProgressEventArgs_Before_m4550 (Object_t * __this /* static, unused */, String_t* ___archiveName, int32_t ___entriesTotal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ReadProgressEventArgs Pathfinding.Ionic.Zip.ReadProgressEventArgs::After(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Int32)
extern "C" ReadProgressEventArgs_t982 * ReadProgressEventArgs_After_m4551 (Object_t * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t392 * ___entry, int32_t ___entriesTotal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ReadProgressEventArgs Pathfinding.Ionic.Zip.ReadProgressEventArgs::Started(System.String)
extern "C" ReadProgressEventArgs_t982 * ReadProgressEventArgs_Started_m4552 (Object_t * __this /* static, unused */, String_t* ___archiveName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ReadProgressEventArgs Pathfinding.Ionic.Zip.ReadProgressEventArgs::ByteUpdate(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C" ReadProgressEventArgs_t982 * ReadProgressEventArgs_ByteUpdate_m4553 (Object_t * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t392 * ___entry, int64_t ___bytesXferred, int64_t ___totalBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ReadProgressEventArgs Pathfinding.Ionic.Zip.ReadProgressEventArgs::Completed(System.String)
extern "C" ReadProgressEventArgs_t982 * ReadProgressEventArgs_Completed_m4554 (Object_t * __this /* static, unused */, String_t* ___archiveName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
