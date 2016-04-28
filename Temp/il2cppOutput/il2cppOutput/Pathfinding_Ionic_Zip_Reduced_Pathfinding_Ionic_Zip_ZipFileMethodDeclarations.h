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

// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_t159;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs>
struct EventHandler_1_t1014;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t392;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t448;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.Exception
struct Exception_t52;
// System.IO.TextWriter
struct TextWriter_t949;
// System.Text.Encoding
struct Encoding_t442;
// System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry>
struct ICollection_1_t1075;
// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t978;
// System.Collections.Generic.IEnumerator`1<Pathfinding.Ionic.Zip.ZipEntry>
struct IEnumerator_1_t444;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipProgr.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres_0.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_Compress.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_Zip64Opt.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipOptio.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ExtractE.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipError_0.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_Encrypti.h"

// System.Void Pathfinding.Ionic.Zip.ZipFile::.ctor()
extern "C" void ZipFile__ctor_m1999 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::.cctor()
extern "C" void ZipFile__cctor_m4764 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::add_ReadProgress(System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs>)
extern "C" void ZipFile_add_ReadProgress_m4765 (ZipFile_t159 * __this, EventHandler_1_t1014 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::remove_ReadProgress(System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs>)
extern "C" void ZipFile_remove_ReadProgress_m4766 (ZipFile_t159 * __this, EventHandler_1_t1014 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Pathfinding.Ionic.Zip.ZipFile::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ZipFile_System_Collections_IEnumerable_GetEnumerator_m4767 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipFile::AddEntry(System.String,System.IO.Stream)
extern "C" ZipEntry_t392 * ZipFile_AddEntry_m4768 (ZipFile_t159 * __this, String_t* ___entryName, Stream_t448 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipFile::_InternalAddEntry(Pathfinding.Ionic.Zip.ZipEntry)
extern "C" ZipEntry_t392 * ZipFile__InternalAddEntry_m4769 (ZipFile_t159 * __this, ZipEntry_t392 * ___ze, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipFile::AddEntry(System.String,System.Byte[])
extern "C" ZipEntry_t392 * ZipFile_AddEntry_m2004 (ZipFile_t159 * __this, String_t* ___entryName, ByteU5BU5D_t29* ___byteContent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::InternalAddEntry(System.String,Pathfinding.Ionic.Zip.ZipEntry)
extern "C" void ZipFile_InternalAddEntry_m4770 (ZipFile_t159 * __this, String_t* ___name, ZipEntry_t392 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipFile::get_ArchiveNameForEvent()
extern "C" String_t* ZipFile_get_ArchiveNameForEvent_m4771 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::OnSaveBlock(Pathfinding.Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C" bool ZipFile_OnSaveBlock_m4772 (ZipFile_t159 * __this, ZipEntry_t392 * ___entry, int64_t ___bytesXferred, int64_t ___totalBytesToXfer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnSaveEntry(System.Int32,Pathfinding.Ionic.Zip.ZipEntry,System.Boolean)
extern "C" void ZipFile_OnSaveEntry_m4773 (ZipFile_t159 * __this, int32_t ___current, ZipEntry_t392 * ___entry, bool ___before, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnSaveEvent(Pathfinding.Ionic.Zip.ZipProgressEventType)
extern "C" void ZipFile_OnSaveEvent_m4774 (ZipFile_t159 * __this, int32_t ___eventFlavor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnSaveStarted()
extern "C" void ZipFile_OnSaveStarted_m4775 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnSaveCompleted()
extern "C" void ZipFile_OnSaveCompleted_m4776 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnReadStarted()
extern "C" void ZipFile_OnReadStarted_m4777 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnReadCompleted()
extern "C" void ZipFile_OnReadCompleted_m4778 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnReadBytes(Pathfinding.Ionic.Zip.ZipEntry)
extern "C" void ZipFile_OnReadBytes_m4779 (ZipFile_t159 * __this, ZipEntry_t392 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::OnReadEntry(System.Boolean,Pathfinding.Ionic.Zip.ZipEntry)
extern "C" void ZipFile_OnReadEntry_m4780 (ZipFile_t159 * __this, bool ___before, ZipEntry_t392 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipFile::get_LengthOfReadStream()
extern "C" int64_t ZipFile_get_LengthOfReadStream_m4781 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::OnExtractBlock(Pathfinding.Ionic.Zip.ZipEntry,System.Int64,System.Int64)
extern "C" bool ZipFile_OnExtractBlock_m4782 (ZipFile_t159 * __this, ZipEntry_t392 * ___entry, int64_t ___bytesWritten, int64_t ___totalBytesToWrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::OnSingleEntryExtract(Pathfinding.Ionic.Zip.ZipEntry,System.String,System.Boolean)
extern "C" bool ZipFile_OnSingleEntryExtract_m4783 (ZipFile_t159 * __this, ZipEntry_t392 * ___entry, String_t* ___path, bool ___before, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::OnExtractExisting(Pathfinding.Ionic.Zip.ZipEntry,System.String)
extern "C" bool ZipFile_OnExtractExisting_m4784 (ZipFile_t159 * __this, ZipEntry_t392 * ___entry, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::AfterAddEntry(Pathfinding.Ionic.Zip.ZipEntry)
extern "C" void ZipFile_AfterAddEntry_m4785 (ZipFile_t159 * __this, ZipEntry_t392 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::OnZipErrorSaving(Pathfinding.Ionic.Zip.ZipEntry,System.Exception)
extern "C" bool ZipFile_OnZipErrorSaving_m4786 (ZipFile_t159 * __this, ZipEntry_t392 * ___entry, Exception_t52 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipFile Pathfinding.Ionic.Zip.ZipFile::Read(System.IO.Stream)
extern "C" ZipFile_t159 * ZipFile_Read_m2017 (Object_t * __this /* static, unused */, Stream_t448 * ___zipStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipFile Pathfinding.Ionic.Zip.ZipFile::Read(System.IO.Stream,System.IO.TextWriter,System.Text.Encoding,System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs>)
extern "C" ZipFile_t159 * ZipFile_Read_m4787 (Object_t * __this /* static, unused */, Stream_t448 * ___zipStream, TextWriter_t949 * ___statusMessageWriter, Encoding_t442 * ___encoding, EventHandler_1_t1014 * ___readProgress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::ReadIntoInstance(Pathfinding.Ionic.Zip.ZipFile)
extern "C" void ZipFile_ReadIntoInstance_m4788 (Object_t * __this /* static, unused */, ZipFile_t159 * ___zf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::Zip64SeekToCentralDirectory(Pathfinding.Ionic.Zip.ZipFile)
extern "C" void ZipFile_Zip64SeekToCentralDirectory_m4789 (Object_t * __this /* static, unused */, ZipFile_t159 * ___zf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::ReadFirstFourBytes(System.IO.Stream)
extern "C" uint32_t ZipFile_ReadFirstFourBytes_m4790 (Object_t * __this /* static, unused */, Stream_t448 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::ReadCentralDirectory(Pathfinding.Ionic.Zip.ZipFile)
extern "C" void ZipFile_ReadCentralDirectory_m4791 (Object_t * __this /* static, unused */, ZipFile_t159 * ___zf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::ReadIntoInstance_Orig(Pathfinding.Ionic.Zip.ZipFile)
extern "C" void ZipFile_ReadIntoInstance_Orig_m4792 (Object_t * __this /* static, unused */, ZipFile_t159 * ___zf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::ReadCentralDirectoryFooter(Pathfinding.Ionic.Zip.ZipFile)
extern "C" void ZipFile_ReadCentralDirectoryFooter_m4793 (Object_t * __this /* static, unused */, ZipFile_t159 * ___zf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::ReadZipFileComment(Pathfinding.Ionic.Zip.ZipFile)
extern "C" void ZipFile_ReadZipFileComment_m4794 (Object_t * __this /* static, unused */, ZipFile_t159 * ___zf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::DeleteFileWithRetry(System.String)
extern "C" void ZipFile_DeleteFileWithRetry_m4795 (ZipFile_t159 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::Save()
extern "C" void ZipFile_Save_m4796 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::NotifyEntriesSaveComplete(System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry>)
extern "C" void ZipFile_NotifyEntriesSaveComplete_m4797 (Object_t * __this /* static, unused */, Object_t* ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::RemoveTempFile()
extern "C" void ZipFile_RemoveTempFile_m4798 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::CleanupAfterSaveOperation()
extern "C" void ZipFile_CleanupAfterSaveOperation_m4799 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::Save(System.IO.Stream)
extern "C" void ZipFile_Save_m2012 (ZipFile_t159 * __this, Stream_t448 * ___outputStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::get_FullScan()
extern "C" bool ZipFile_get_FullScan_m4800 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::get_SortEntriesBeforeSaving()
extern "C" bool ZipFile_get_SortEntriesBeforeSaving_m4801 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::set_AddDirectoryWillTraverseReparsePoints(System.Boolean)
extern "C" void ZipFile_set_AddDirectoryWillTraverseReparsePoints_m4802 (ZipFile_t159 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipFile::get_BufferSize()
extern "C" int32_t ZipFile_get_BufferSize_m4803 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipFile::get_CodecBufferSize()
extern "C" int32_t ZipFile_get_CodecBufferSize_m4804 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::get_FlattenFoldersOnExtract()
extern "C" bool ZipFile_get_FlattenFoldersOnExtract_m4805 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipFile::get_Strategy()
extern "C" int32_t ZipFile_get_Strategy_m4806 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipFile::get_Name()
extern "C" String_t* ZipFile_get_Name_m4807 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipFile::get_CompressionLevel()
extern "C" int32_t ZipFile_get_CompressionLevel_m4808 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::set_CompressionLevel(Pathfinding.Ionic.Zlib.CompressionLevel)
extern "C" void ZipFile_set_CompressionLevel_m4809 (ZipFile_t159 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.CompressionMethod Pathfinding.Ionic.Zip.ZipFile::get_CompressionMethod()
extern "C" int32_t ZipFile_get_CompressionMethod_m4810 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipFile::get_Comment()
extern "C" String_t* ZipFile_get_Comment_m4811 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::set_Comment(System.String)
extern "C" void ZipFile_set_Comment_m4812 (ZipFile_t159 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::get_Verbose()
extern "C" bool ZipFile_get_Verbose_m4813 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipFile::get_CaseSensitiveRetrieval()
extern "C" bool ZipFile_get_CaseSensitiveRetrieval_m4814 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipFile::get_UseZip64WhenSaving()
extern "C" int32_t ZipFile_get_UseZip64WhenSaving_m4815 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::set_UseZip64WhenSaving(Pathfinding.Ionic.Zip.Zip64Option)
extern "C" void ZipFile_set_UseZip64WhenSaving_m4816 (ZipFile_t159 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::get_AlternateEncoding()
extern "C" Encoding_t442 * ZipFile_get_AlternateEncoding_m4817 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::set_AlternateEncoding(System.Text.Encoding)
extern "C" void ZipFile_set_AlternateEncoding_m2001 (ZipFile_t159 * __this, Encoding_t442 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipFile::get_AlternateEncodingUsage()
extern "C" int32_t ZipFile_get_AlternateEncodingUsage_m4818 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::set_AlternateEncodingUsage(Pathfinding.Ionic.Zip.ZipOption)
extern "C" void ZipFile_set_AlternateEncodingUsage_m2002 (ZipFile_t159 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::get_DefaultEncoding()
extern "C" Encoding_t442 * ZipFile_get_DefaultEncoding_m4819 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter Pathfinding.Ionic.Zip.ZipFile::get_StatusMessageTextWriter()
extern "C" TextWriter_t949 * ZipFile_get_StatusMessageTextWriter_m4820 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipFile::get_TempFileFolder()
extern "C" String_t* ZipFile_get_TempFileFolder_m4821 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipFile::get_ExtractExistingFile()
extern "C" int32_t ZipFile_get_ExtractExistingFile_m4822 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipFile::get_ZipErrorAction()
extern "C" int32_t ZipFile_get_ZipErrorAction_m4823 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipFile::get_Encryption()
extern "C" int32_t ZipFile_get_Encryption_m4824 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipFile::get_SetCompression()
extern "C" SetCompressionCallback_t978 * ZipFile_get_SetCompression_m4825 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipFile::get_MaxOutputSegmentSize()
extern "C" int32_t ZipFile_get_MaxOutputSegmentSize_m4826 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::set_ParallelDeflateThreshold(System.Int64)
extern "C" void ZipFile_set_ParallelDeflateThreshold_m4827 (ZipFile_t159 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipFile::get_ParallelDeflateThreshold()
extern "C" int64_t ZipFile_get_ParallelDeflateThreshold_m4828 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipFile::get_ParallelDeflateMaxBufferPairs()
extern "C" int32_t ZipFile_get_ParallelDeflateMaxBufferPairs_m4829 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipFile::ToString()
extern "C" String_t* ZipFile_ToString_m4830 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::NotifyEntryChanged()
extern "C" void ZipFile_NotifyEntryChanged_m4831 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::StreamForDiskNumber(System.UInt32)
extern "C" Stream_t448 * ZipFile_StreamForDiskNumber_m4832 (ZipFile_t159 * __this, uint32_t ___diskNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::Reset(System.Boolean)
extern "C" void ZipFile_Reset_m4833 (ZipFile_t159 * __this, bool ___whileSaving, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::_initEntriesDictionary()
extern "C" void ZipFile__initEntriesDictionary_m4834 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::_InitInstance(System.String,System.IO.TextWriter)
extern "C" void ZipFile__InitInstance_m4835 (ZipFile_t159 * __this, String_t* ___zipFileName, TextWriter_t949 * ___statusMessageWriter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipFile::get_Item(System.String)
extern "C" ZipEntry_t392 * ZipFile_get_Item_m2018 (ZipFile_t159 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::get_Entries()
extern "C" Object_t* ZipFile_get_Entries_m2006 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::get_EntriesSorted()
extern "C" Object_t* ZipFile_get_EntriesSorted_m4836 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::Dispose()
extern "C" void ZipFile_Dispose_m4837 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipFile::Dispose(System.Boolean)
extern "C" void ZipFile_Dispose_m4838 (ZipFile_t159 * __this, bool ___disposeManagedResources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::get_ReadStream()
extern "C" Stream_t448 * ZipFile_get_ReadStream_m4839 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::get_WriteStream()
extern "C" Stream_t448 * ZipFile_get_WriteStream_m4840 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::GetEnumerator()
extern "C" Object_t* ZipFile_GetEnumerator_m4841 (ZipFile_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
