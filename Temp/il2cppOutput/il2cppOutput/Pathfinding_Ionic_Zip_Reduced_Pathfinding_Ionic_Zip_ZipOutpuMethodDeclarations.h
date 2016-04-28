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

// System.IO.Stream
struct Stream_t448;
// System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry>
struct ICollection_1_t1075;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_t1001;
// System.Text.Encoding
struct Encoding_t442;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_Zip64Opt.h"

// System.Boolean Pathfinding.Ionic.Zip.ZipOutput::WriteCentralDirectoryStructure(System.IO.Stream,System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry>,System.UInt32,Pathfinding.Ionic.Zip.Zip64Option,System.String,Pathfinding.Ionic.Zip.ZipContainer)
extern "C" bool ZipOutput_WriteCentralDirectoryStructure_m4842 (Object_t * __this /* static, unused */, Stream_t448 * ___s, Object_t* ___entries, uint32_t ___numSegments, int32_t ___zip64, String_t* ___comment, ZipContainer_t1001 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutput::GetEncoding(Pathfinding.Ionic.Zip.ZipContainer,System.String)
extern "C" Encoding_t442 * ZipOutput_GetEncoding_m4843 (Object_t * __this /* static, unused */, ZipContainer_t1001 * ___container, String_t* ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.ZipOutput::GenCentralDirectoryFooter(System.Int64,System.Int64,Pathfinding.Ionic.Zip.Zip64Option,System.Int32,System.String,Pathfinding.Ionic.Zip.ZipContainer)
extern "C" ByteU5BU5D_t29* ZipOutput_GenCentralDirectoryFooter_m4844 (Object_t * __this /* static, unused */, int64_t ___StartOfCentralDirectory, int64_t ___EndOfCentralDirectory, int32_t ___zip64, int32_t ___entryCount, String_t* ___comment, ZipContainer_t1001 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.ZipOutput::GenZip64EndOfCentralDirectory(System.Int64,System.Int64,System.Int32,System.UInt32)
extern "C" ByteU5BU5D_t29* ZipOutput_GenZip64EndOfCentralDirectory_m4845 (Object_t * __this /* static, unused */, int64_t ___StartOfCentralDirectory, int64_t ___EndOfCentralDirectory, int32_t ___entryCount, uint32_t ___numSegments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipOutput::CountEntries(System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry>)
extern "C" int32_t ZipOutput_CountEntries_m4846 (Object_t * __this /* static, unused */, Object_t* ____entries, const MethodInfo* method) IL2CPP_METHOD_ATTR;
