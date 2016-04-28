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

// Pathfinding.Ionic.Zip.AddProgressEventArgs
struct AddProgressEventArgs_t983;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t392;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipProgr.h"

// System.Void Pathfinding.Ionic.Zip.AddProgressEventArgs::.ctor(System.String,Pathfinding.Ionic.Zip.ZipProgressEventType)
extern "C" void AddProgressEventArgs__ctor_m4555 (AddProgressEventArgs_t983 * __this, String_t* ___archiveName, int32_t ___flavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.AddProgressEventArgs Pathfinding.Ionic.Zip.AddProgressEventArgs::AfterEntry(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Int32)
extern "C" AddProgressEventArgs_t983 * AddProgressEventArgs_AfterEntry_m4556 (Object_t * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t392 * ___entry, int32_t ___entriesTotal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
