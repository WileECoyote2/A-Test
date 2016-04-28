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

// Pathfinding.Ionic.Zip.ZipProgressEventArgs
struct ZipProgressEventArgs_t980;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t392;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipProgr.h"

// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::.ctor()
extern "C" void ZipProgressEventArgs__ctor_m4540 (ZipProgressEventArgs_t980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
extern "C" void ZipProgressEventArgs__ctor_m4541 (ZipProgressEventArgs_t980 * __this, String_t* ___archiveName, int32_t ___flavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_EntriesTotal(System.Int32)
extern "C" void ZipProgressEventArgs_set_EntriesTotal_m4542 (ZipProgressEventArgs_t980 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_CurrentEntry(Pathfinding.Ionic.Zip.ZipEntry)
extern "C" void ZipProgressEventArgs_set_CurrentEntry_m4543 (ZipProgressEventArgs_t980 * __this, ZipEntry_t392 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipProgressEventArgs::get_Cancel()
extern "C" bool ZipProgressEventArgs_get_Cancel_m4544 (ZipProgressEventArgs_t980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_EventType(Pathfinding.Ionic.Zip.ZipProgressEventType)
extern "C" void ZipProgressEventArgs_set_EventType_m4545 (ZipProgressEventArgs_t980 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_ArchiveName(System.String)
extern "C" void ZipProgressEventArgs_set_ArchiveName_m4546 (ZipProgressEventArgs_t980 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_BytesTransferred(System.Int64)
extern "C" void ZipProgressEventArgs_set_BytesTransferred_m4547 (ZipProgressEventArgs_t980 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipProgressEventArgs::set_TotalBytesToTransfer(System.Int64)
extern "C" void ZipProgressEventArgs_set_TotalBytesToTransfer_m4548 (ZipProgressEventArgs_t980 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
