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

// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t392;
// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_t159;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t390;
// System.IO.Stream
struct Stream_t448;
// Pathfinding.Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_t1022;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t408;
// System.Text.Encoding
struct Encoding_t442;
// System.Byte[]
struct ByteU5BU5D_t29;
// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_t1001;
// Pathfinding.Ionic.Zip.CountingStream
struct CountingStream_t995;
// System.Exception
struct Exception_t52;
// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t978;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Nullable_1_gen_0.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_Compress.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_Encrypti.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ExtractE.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipError_0.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipOptio.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipEntry_1.h"

// System.Void Pathfinding.Ionic.Zip.ZipEntry::.ctor()
extern "C" void ZipEntry__ctor_m4652 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::.cctor()
extern "C" void ZipEntry__cctor_m4653 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::get_AttributesIndicateDirectory()
extern "C" bool ZipEntry_get_AttributesIndicateDirectory_m4654 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::ResetDirEntry()
extern "C" void ZipEntry_ResetDirEntry_m4655 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipEntry::ReadDirEntry(Pathfinding.Ionic.Zip.ZipFile,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" ZipEntry_t392 * ZipEntry_ReadDirEntry_m4656 (Object_t * __this /* static, unused */, ZipFile_t159 * ___zf, Dictionary_2_t390 * ___previouslySeen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::IsNotValidZipDirEntrySig(System.Int32)
extern "C" bool ZipEntry_IsNotValidZipDirEntrySig_m4657 (Object_t * __this /* static, unused */, int32_t ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::Extract(System.IO.Stream)
extern "C" void ZipEntry_Extract_m2033 (ZipEntry_t392 * __this, Stream_t448 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Crc.CrcCalculatorStream Pathfinding.Ionic.Zip.ZipEntry::InternalOpenReader(System.String)
extern "C" CrcCalculatorStream_t1022 * ZipEntry_InternalOpenReader_m4658 (ZipEntry_t392 * __this, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::OnExtractProgress(System.Int64,System.Int64)
extern "C" void ZipEntry_OnExtractProgress_m4659 (ZipEntry_t392 * __this, int64_t ___bytesWritten, int64_t ___totalBytesToWrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::OnBeforeExtract(System.String)
extern "C" void ZipEntry_OnBeforeExtract_m4660 (ZipEntry_t392 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::OnAfterExtract(System.String)
extern "C" void ZipEntry_OnAfterExtract_m4661 (ZipEntry_t392 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::OnExtractExisting(System.String)
extern "C" void ZipEntry_OnExtractExisting_m4662 (ZipEntry_t392 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::ReallyDelete(System.String)
extern "C" void ZipEntry_ReallyDelete_m4663 (Object_t * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::WriteStatus(System.String,System.Object[])
extern "C" void ZipEntry_WriteStatus_m4664 (ZipEntry_t392 * __this, String_t* ___format, ObjectU5BU5D_t408* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::InternalExtract(System.String,System.IO.Stream,System.String)
extern "C" void ZipEntry_InternalExtract_m4665 (ZipEntry_t392 * __this, String_t* ___baseDir, Stream_t448 * ___outstream, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::VerifyCrcAfterExtract(System.Int32)
extern "C" void ZipEntry_VerifyCrcAfterExtract_m4666 (ZipEntry_t392 * __this, int32_t ___actualCrc32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::CheckExtractExistingFile(System.String,System.String)
extern "C" int32_t ZipEntry_CheckExtractExistingFile_m4667 (ZipEntry_t392 * __this, String_t* ___baseDir, String_t* ___targetFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::_CheckRead(System.Int32)
extern "C" void ZipEntry__CheckRead_m4668 (ZipEntry_t392 * __this, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ExtractOne(System.IO.Stream)
extern "C" int32_t ZipEntry_ExtractOne_m4669 (ZipEntry_t392 * __this, Stream_t448 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::GetExtractDecompressor(System.IO.Stream)
extern "C" Stream_t448 * ZipEntry_GetExtractDecompressor_m4670 (ZipEntry_t392 * __this, Stream_t448 * ___input2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::GetExtractDecryptor(System.IO.Stream)
extern "C" Stream_t448 * ZipEntry_GetExtractDecryptor_m4671 (ZipEntry_t392 * __this, Stream_t448 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::_SetTimes(System.String,System.Boolean)
extern "C" void ZipEntry__SetTimes_m4672 (ZipEntry_t392 * __this, String_t* ___fileOrDirectory, bool ___isFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipEntry::get_UnsupportedAlgorithm()
extern "C" String_t* ZipEntry_get_UnsupportedAlgorithm_m4673 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipEntry::get_UnsupportedCompressionMethod()
extern "C" String_t* ZipEntry_get_UnsupportedCompressionMethod_m4674 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::ValidateEncryption()
extern "C" void ZipEntry_ValidateEncryption_m4675 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::ValidateCompression()
extern "C" void ZipEntry_ValidateCompression_m4676 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::SetupCryptoForExtract(System.String)
extern "C" void ZipEntry_SetupCryptoForExtract_m4677 (ZipEntry_t392 * __this, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::ValidateOutput(System.String,System.IO.Stream,System.String&)
extern "C" bool ZipEntry_ValidateOutput_m4678 (ZipEntry_t392 * __this, String_t* ___basedir, Stream_t448 * ___outstream, String_t** ___outFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::ReadHeader(Pathfinding.Ionic.Zip.ZipEntry,System.Text.Encoding)
extern "C" bool ZipEntry_ReadHeader_m4679 (Object_t * __this /* static, unused */, ZipEntry_t392 * ___ze, Encoding_t442 * ___defaultEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ReadWeakEncryptionHeader(System.IO.Stream,System.Byte[])
extern "C" int32_t ZipEntry_ReadWeakEncryptionHeader_m4680 (Object_t * __this /* static, unused */, Stream_t448 * ___s, ByteU5BU5D_t29* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::IsNotValidSig(System.Int32)
extern "C" bool ZipEntry_IsNotValidSig_m4681 (Object_t * __this /* static, unused */, int32_t ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipEntry::ReadEntry(Pathfinding.Ionic.Zip.ZipContainer,System.Boolean)
extern "C" ZipEntry_t392 * ZipEntry_ReadEntry_m4682 (Object_t * __this /* static, unused */, ZipContainer_t1001 * ___zc, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::HandlePK00Prefix(System.IO.Stream)
extern "C" void ZipEntry_HandlePK00Prefix_m4683 (Object_t * __this /* static, unused */, Stream_t448 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::HandleUnexpectedDataDescriptor(Pathfinding.Ionic.Zip.ZipEntry)
extern "C" void ZipEntry_HandleUnexpectedDataDescriptor_m4684 (Object_t * __this /* static, unused */, ZipEntry_t392 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ProcessExtraField(System.IO.Stream,System.Int16)
extern "C" int32_t ZipEntry_ProcessExtraField_m4685 (ZipEntry_t392 * __this, Stream_t448 * ___s, int16_t ___extraFieldLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ProcessExtraFieldPkwareStrongEncryption(System.Byte[],System.Int32)
extern "C" int32_t ZipEntry_ProcessExtraFieldPkwareStrongEncryption_m4686 (ZipEntry_t392 * __this, ByteU5BU5D_t29* ___Buffer, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ProcessExtraFieldZip64(System.Byte[],System.Int32,System.Int16,System.Int64)
extern "C" int32_t ZipEntry_ProcessExtraFieldZip64_m4687 (ZipEntry_t392 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___j, int16_t ___dataSize, int64_t ___posn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ProcessExtraFieldInfoZipTimes(System.Byte[],System.Int32,System.Int16,System.Int64)
extern "C" int32_t ZipEntry_ProcessExtraFieldInfoZipTimes_m4688 (ZipEntry_t392 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___j, int16_t ___dataSize, int64_t ___posn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ProcessExtraFieldUnixTimes(System.Byte[],System.Int32,System.Int16,System.Int64)
extern "C" int32_t ZipEntry_ProcessExtraFieldUnixTimes_m4689 (ZipEntry_t392 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___j, int16_t ___dataSize, int64_t ___posn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::ProcessExtraFieldWindowsTimes(System.Byte[],System.Int32,System.Int16,System.Int64)
extern "C" int32_t ZipEntry_ProcessExtraFieldWindowsTimes_m4690 (ZipEntry_t392 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___j, int16_t ___dataSize, int64_t ___posn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::WriteCentralDirectoryEntry(System.IO.Stream)
extern "C" void ZipEntry_WriteCentralDirectoryEntry_m4691 (ZipEntry_t392 * __this, Stream_t448 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::ConstructExtraField(System.Boolean)
extern "C" ByteU5BU5D_t29* ZipEntry_ConstructExtraField_m4692 (ZipEntry_t392 * __this, bool ___forCentralDirectory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipEntry::NormalizeFileName()
extern "C" String_t* ZipEntry_NormalizeFileName_m4693 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::GetEncodedFileNameBytes()
extern "C" ByteU5BU5D_t29* ZipEntry_GetEncodedFileNameBytes_m4694 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::WantReadAgain()
extern "C" bool ZipEntry_WantReadAgain_m4695 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::MaybeUnsetCompressionMethodForWriting(System.Int32)
extern "C" void ZipEntry_MaybeUnsetCompressionMethodForWriting_m4696 (ZipEntry_t392 * __this, int32_t ___cycle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::WriteHeader(System.IO.Stream,System.Int32)
extern "C" void ZipEntry_WriteHeader_m4697 (ZipEntry_t392 * __this, Stream_t448 * ___s, int32_t ___cycle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::FigureCrc32()
extern "C" int32_t ZipEntry_FigureCrc32_m4698 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::PrepSourceStream()
extern "C" void ZipEntry_PrepSourceStream_m4699 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::CopyMetaData(Pathfinding.Ionic.Zip.ZipEntry)
extern "C" void ZipEntry_CopyMetaData_m4700 (ZipEntry_t392 * __this, ZipEntry_t392 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::OnWriteBlock(System.Int64,System.Int64)
extern "C" void ZipEntry_OnWriteBlock_m4701 (ZipEntry_t392 * __this, int64_t ___bytesXferred, int64_t ___totalBytesToXfer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::_WriteEntryData(System.IO.Stream)
extern "C" void ZipEntry__WriteEntryData_m4702 (ZipEntry_t392 * __this, Stream_t448 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::SetInputAndFigureFileLength(System.IO.Stream&)
extern "C" int64_t ZipEntry_SetInputAndFigureFileLength_m4703 (ZipEntry_t392 * __this, Stream_t448 ** ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::FinishOutputStream(System.IO.Stream,Pathfinding.Ionic.Zip.CountingStream,System.IO.Stream,System.IO.Stream,Pathfinding.Ionic.Crc.CrcCalculatorStream)
extern "C" void ZipEntry_FinishOutputStream_m4704 (ZipEntry_t392 * __this, Stream_t448 * ___s, CountingStream_t995 * ___entryCounter, Stream_t448 * ___encryptor, Stream_t448 * ___compressor, CrcCalculatorStream_t1022 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::PostProcessOutput(System.IO.Stream)
extern "C" void ZipEntry_PostProcessOutput_m4705 (ZipEntry_t392 * __this, Stream_t448 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::SetZip64Flags()
extern "C" void ZipEntry_SetZip64Flags_m4706 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::PrepOutputStream(System.IO.Stream,System.Int64,Pathfinding.Ionic.Zip.CountingStream&,System.IO.Stream&,System.IO.Stream&,Pathfinding.Ionic.Crc.CrcCalculatorStream&)
extern "C" void ZipEntry_PrepOutputStream_m4707 (ZipEntry_t392 * __this, Stream_t448 * ___s, int64_t ___streamLength, CountingStream_t995 ** ___outputCounter, Stream_t448 ** ___encryptor, Stream_t448 ** ___compressor, CrcCalculatorStream_t1022 ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::MaybeApplyCompression(System.IO.Stream,System.Int64)
extern "C" Stream_t448 * ZipEntry_MaybeApplyCompression_m4708 (ZipEntry_t392 * __this, Stream_t448 * ___s, int64_t ___streamLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::MaybeApplyEncryption(System.IO.Stream)
extern "C" Stream_t448 * ZipEntry_MaybeApplyEncryption_m4709 (ZipEntry_t392 * __this, Stream_t448 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::OnZipErrorWhileSaving(System.Exception)
extern "C" void ZipEntry_OnZipErrorWhileSaving_m4710 (ZipEntry_t392 * __this, Exception_t52 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::Write(System.IO.Stream)
extern "C" void ZipEntry_Write_m4711 (ZipEntry_t392 * __this, Stream_t448 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::StoreRelativeOffset()
extern "C" void ZipEntry_StoreRelativeOffset_m4712 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::NotifySaveComplete()
extern "C" void ZipEntry_NotifySaveComplete_m4713 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::WriteSecurityMetadata(System.IO.Stream)
extern "C" void ZipEntry_WriteSecurityMetadata_m4714 (ZipEntry_t392 * __this, Stream_t448 * ___outstream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::CopyThroughOneEntry(System.IO.Stream)
extern "C" void ZipEntry_CopyThroughOneEntry_m4715 (ZipEntry_t392 * __this, Stream_t448 * ___outStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::CopyThroughWithRecompute(System.IO.Stream)
extern "C" void ZipEntry_CopyThroughWithRecompute_m4716 (ZipEntry_t392 * __this, Stream_t448 * ___outstream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::CopyThroughWithNoChange(System.IO.Stream)
extern "C" void ZipEntry_CopyThroughWithNoChange_m4717 (ZipEntry_t392 * __this, Stream_t448 * ___outstream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::get_LastModified()
extern "C" DateTime_t134  ZipEntry_get_LastModified_m4718 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_LastModified(System.DateTime)
extern "C" void ZipEntry_set_LastModified_m2009 (ZipEntry_t392 * __this, DateTime_t134  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::get_BufferSize()
extern "C" int32_t ZipEntry_get_BufferSize_m4719 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_ModifiedTime(System.DateTime)
extern "C" void ZipEntry_set_ModifiedTime_m2010 (ZipEntry_t392 * __this, DateTime_t134  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_AccessedTime(System.DateTime)
extern "C" void ZipEntry_set_AccessedTime_m2007 (ZipEntry_t392 * __this, DateTime_t134  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_CreationTime(System.DateTime)
extern "C" void ZipEntry_set_CreationTime_m2008 (ZipEntry_t392 * __this, DateTime_t134  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::SetEntryTimes(System.DateTime,System.DateTime,System.DateTime)
extern "C" void ZipEntry_SetEntryTimes_m4720 (ZipEntry_t392 * __this, DateTime_t134  ___created, DateTime_t134  ___accessed, DateTime_t134  ___modified, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_EmitTimesInWindowsFormatWhenSaving(System.Boolean)
extern "C" void ZipEntry_set_EmitTimesInWindowsFormatWhenSaving_m4721 (ZipEntry_t392 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_EmitTimesInUnixFormatWhenSaving(System.Boolean)
extern "C" void ZipEntry_set_EmitTimesInUnixFormatWhenSaving_m4722 (ZipEntry_t392 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipEntry::get_LocalFileName()
extern "C" String_t* ZipEntry_get_LocalFileName_m4723 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipEntry::get_FileName()
extern "C" String_t* ZipEntry_get_FileName_m4724 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::get_VersionNeeded()
extern "C" int16_t ZipEntry_get_VersionNeeded_m4725 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipEntry::get_Comment()
extern "C" String_t* ZipEntry_get_Comment_m4726 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::get_OutputUsedZip64()
extern "C" Nullable_1_t1003  ZipEntry_get_OutputUsedZip64_m4727 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.CompressionMethod Pathfinding.Ionic.Zip.ZipEntry::get_CompressionMethod()
extern "C" int32_t ZipEntry_get_CompressionMethod_m4728 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_CompressionMethod(Pathfinding.Ionic.Zip.CompressionMethod)
extern "C" void ZipEntry_set_CompressionMethod_m4729 (ZipEntry_t392 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipEntry::get_CompressionLevel()
extern "C" int32_t ZipEntry_get_CompressionLevel_m4730 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_CompressionLevel(Pathfinding.Ionic.Zlib.CompressionLevel)
extern "C" void ZipEntry_set_CompressionLevel_m4731 (ZipEntry_t392 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::get_CompressedSize()
extern "C" int64_t ZipEntry_get_CompressedSize_m4732 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::get_UncompressedSize()
extern "C" int64_t ZipEntry_get_UncompressedSize_m4733 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::get_IsDirectory()
extern "C" bool ZipEntry_get_IsDirectory_m4734 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::get_Encryption()
extern "C" int32_t ZipEntry_get_Encryption_m4735 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_Encryption(Pathfinding.Ionic.Zip.EncryptionAlgorithm)
extern "C" void ZipEntry_set_Encryption_m4736 (ZipEntry_t392 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_Password(System.String)
extern "C" void ZipEntry_set_Password_m4737 (ZipEntry_t392 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipEntry::get_ExtractExistingFile()
extern "C" int32_t ZipEntry_get_ExtractExistingFile_m4738 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_ExtractExistingFile(Pathfinding.Ionic.Zip.ExtractExistingFileAction)
extern "C" void ZipEntry_set_ExtractExistingFile_m4739 (ZipEntry_t392 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipEntry::get_ZipErrorAction()
extern "C" int32_t ZipEntry_get_ZipErrorAction_m4740 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_ZipErrorAction(Pathfinding.Ionic.Zip.ZipErrorAction)
extern "C" void ZipEntry_set_ZipErrorAction_m4741 (ZipEntry_t392 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::get_IncludedInMostRecentSave()
extern "C" bool ZipEntry_get_IncludedInMostRecentSave_m4742 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipEntry::get_SetCompression()
extern "C" SetCompressionCallback_t978 * ZipEntry_get_SetCompression_m4743 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_SetCompression(Pathfinding.Ionic.Zip.SetCompressionCallback)
extern "C" void ZipEntry_set_SetCompression_m4744 (ZipEntry_t392 * __this, SetCompressionCallback_t978 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::get_AlternateEncoding()
extern "C" Encoding_t442 * ZipEntry_get_AlternateEncoding_m4745 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_AlternateEncoding(System.Text.Encoding)
extern "C" void ZipEntry_set_AlternateEncoding_m4746 (ZipEntry_t392 * __this, Encoding_t442 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipEntry::get_AlternateEncodingUsage()
extern "C" int32_t ZipEntry_get_AlternateEncodingUsage_m4747 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_AlternateEncodingUsage(Pathfinding.Ionic.Zip.ZipOption)
extern "C" void ZipEntry_set_AlternateEncodingUsage_m4748 (ZipEntry_t392 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipEntry::CreateForStream(System.String,System.IO.Stream)
extern "C" ZipEntry_t392 * ZipEntry_CreateForStream_m4749 (Object_t * __this /* static, unused */, String_t* ___entryName, Stream_t448 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipEntry::Create(System.String,Pathfinding.Ionic.Zip.ZipEntrySource,System.Object,System.Object)
extern "C" ZipEntry_t392 * ZipEntry_Create_m4750 (Object_t * __this /* static, unused */, String_t* ___nameInArchive, int32_t ___source, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::MarkAsDirectory()
extern "C" void ZipEntry_MarkAsDirectory_m4751 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::set_IsText(System.Boolean)
extern "C" void ZipEntry_set_IsText_m4752 (ZipEntry_t392 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipEntry::ToString()
extern "C" String_t* ZipEntry_ToString_m4753 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::get_ArchiveStream()
extern "C" Stream_t448 * ZipEntry_get_ArchiveStream_m4754 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::SetFdpLoh()
extern "C" void ZipEntry_SetFdpLoh_m4755 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::GetLengthOfCryptoHeaderBytes(Pathfinding.Ionic.Zip.EncryptionAlgorithm)
extern "C" int32_t ZipEntry_GetLengthOfCryptoHeaderBytes_m4756 (Object_t * __this /* static, unused */, int32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::get_FileDataPosition()
extern "C" int64_t ZipEntry_get_FileDataPosition_m4757 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::get_LengthOfHeader()
extern "C" int32_t ZipEntry_get_LengthOfHeader_m4758 (ZipEntry_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
