#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t448;
// System.Object
struct Object_t;
// Pathfinding.Ionic.Zip.ZipCrypto
struct ZipCrypto_t996;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.Text.Encoding
struct Encoding_t442;
// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_t1001;
// Pathfinding.Ionic.Zip.WriteDelegate
struct WriteDelegate_t975;
// Pathfinding.Ionic.Zip.OpenDelegate
struct OpenDelegate_t976;
// Pathfinding.Ionic.Zip.CloseDelegate
struct CloseDelegate_t977;
// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_t978;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_DateTime.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipEntry_1.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_Encrypti.h"
#include "mscorlib_System_Nullable_1_gen.h"
#include "mscorlib_System_Nullable_1_gen_0.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipEntry_2.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ExtractE.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipError_0.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipOptio.h"

// Pathfinding.Ionic.Zip.ZipEntry
struct  ZipEntry_t392  : public Object_t
{
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_VersionMadeBy
	int16_t ____VersionMadeBy_0;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_InternalFileAttrs
	int16_t ____InternalFileAttrs_1;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_ExternalFileAttrs
	int32_t ____ExternalFileAttrs_2;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_filenameLength
	int16_t ____filenameLength_3;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_extraFieldLength
	int16_t ____extraFieldLength_4;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_commentLength
	int16_t ____commentLength_5;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_inputDecryptorStream
	Stream_t448 * ____inputDecryptorStream_6;
	// System.Object Pathfinding.Ionic.Zip.ZipEntry::_outputLock
	Object_t * ____outputLock_7;
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipEntry::_zipCrypto_forExtract
	ZipCrypto_t996 * ____zipCrypto_forExtract_8;
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipEntry::_zipCrypto_forWrite
	ZipCrypto_t996 * ____zipCrypto_forWrite_9;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_LastModified
	DateTime_t134  ____LastModified_10;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Mtime
	DateTime_t134  ____Mtime_11;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Atime
	DateTime_t134  ____Atime_12;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Ctime
	DateTime_t134  ____Ctime_13;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_ntfsTimesAreSet
	bool ____ntfsTimesAreSet_14;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_emitNtfsTimes
	bool ____emitNtfsTimes_15;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_emitUnixTimes
	bool ____emitUnixTimes_16;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_TrimVolumeFromFullyQualifiedPaths
	bool ____TrimVolumeFromFullyQualifiedPaths_17;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_LocalFileName
	String_t* ____LocalFileName_18;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_FileNameInArchive
	String_t* ____FileNameInArchive_19;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_VersionNeeded
	int16_t ____VersionNeeded_20;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_BitField
	int16_t ____BitField_21;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_CompressionMethod
	int16_t ____CompressionMethod_22;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_CompressionMethod_FromZipFile
	int16_t ____CompressionMethod_FromZipFile_23;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipEntry::_CompressionLevel
	int32_t ____CompressionLevel_24;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_Comment
	String_t* ____Comment_25;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_IsDirectory
	bool ____IsDirectory_26;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_CommentBytes
	ByteU5BU5D_t29* ____CommentBytes_27;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_CompressedSize
	int64_t ____CompressedSize_28;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_CompressedFileDataSize
	int64_t ____CompressedFileDataSize_29;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_UncompressedSize
	int64_t ____UncompressedSize_30;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_TimeBlob
	int32_t ____TimeBlob_31;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_crcCalculated
	bool ____crcCalculated_32;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_Crc32
	int32_t ____Crc32_33;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_Extra
	ByteU5BU5D_t29* ____Extra_34;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_metadataChanged
	bool ____metadataChanged_35;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_restreamRequiredOnSave
	bool ____restreamRequiredOnSave_36;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_sourceIsEncrypted
	bool ____sourceIsEncrypted_37;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_skippedDuringSave
	bool ____skippedDuringSave_38;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipEntry::_diskNumber
	uint32_t ____diskNumber_39;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::_actualEncoding
	Encoding_t442 * ____actualEncoding_41;
	// Pathfinding.Ionic.Zip.ZipContainer Pathfinding.Ionic.Zip.ZipEntry::_container
	ZipContainer_t1001 * ____container_42;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::__FileDataPosition
	int64_t _____FileDataPosition_43;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_EntryHeader
	ByteU5BU5D_t29* ____EntryHeader_44;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_RelativeOffsetOfLocalHeader
	int64_t ____RelativeOffsetOfLocalHeader_45;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_future_ROLH
	int64_t ____future_ROLH_46;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_TotalEntrySize
	int64_t ____TotalEntrySize_47;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_LengthOfHeader
	int32_t ____LengthOfHeader_48;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_LengthOfTrailer
	int32_t ____LengthOfTrailer_49;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_InputUsesZip64
	bool ____InputUsesZip64_50;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipEntry::_UnsupportedAlgorithmId
	uint32_t ____UnsupportedAlgorithmId_51;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_Password
	String_t* ____Password_52;
	// Pathfinding.Ionic.Zip.ZipEntrySource Pathfinding.Ionic.Zip.ZipEntry::_Source
	int32_t ____Source_53;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::_Encryption
	int32_t ____Encryption_54;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::_Encryption_FromZipFile
	int32_t ____Encryption_FromZipFile_55;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_WeakEncryptionHeader
	ByteU5BU5D_t29* ____WeakEncryptionHeader_56;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_archiveStream
	Stream_t448 * ____archiveStream_57;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_sourceStream
	Stream_t448 * ____sourceStream_58;
	// System.Nullable`1<System.Int64> Pathfinding.Ionic.Zip.ZipEntry::_sourceStreamOriginalPosition
	Nullable_1_t1002  ____sourceStreamOriginalPosition_59;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_ioOperationCanceled
	bool ____ioOperationCanceled_60;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_presumeZip64
	bool ____presumeZip64_61;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::_entryRequiresZip64
	Nullable_1_t1003  ____entryRequiresZip64_62;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::_OutputUsesZip64
	Nullable_1_t1003  ____OutputUsesZip64_63;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_IsText
	bool ____IsText_64;
	// Pathfinding.Ionic.Zip.ZipEntryTimestamp Pathfinding.Ionic.Zip.ZipEntry::_timestamp
	int32_t ____timestamp_65;
	// Pathfinding.Ionic.Zip.WriteDelegate Pathfinding.Ionic.Zip.ZipEntry::_WriteDelegate
	WriteDelegate_t975 * ____WriteDelegate_69;
	// Pathfinding.Ionic.Zip.OpenDelegate Pathfinding.Ionic.Zip.ZipEntry::_OpenDelegate
	OpenDelegate_t976 * ____OpenDelegate_70;
	// Pathfinding.Ionic.Zip.CloseDelegate Pathfinding.Ionic.Zip.ZipEntry::_CloseDelegate
	CloseDelegate_t977 * ____CloseDelegate_71;
	// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipEntry::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_72;
	// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipEntry::<ZipErrorAction>k__BackingField
	int32_t ___U3CZipErrorActionU3Ek__BackingField_73;
	// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipEntry::<SetCompression>k__BackingField
	SetCompressionCallback_t978 * ___U3CSetCompressionU3Ek__BackingField_74;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::<AlternateEncoding>k__BackingField
	Encoding_t442 * ___U3CAlternateEncodingU3Ek__BackingField_75;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipEntry::<AlternateEncodingUsage>k__BackingField
	int32_t ___U3CAlternateEncodingUsageU3Ek__BackingField_76;
};
struct ZipEntry_t392_StaticFields{
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::ibm437
	Encoding_t442 * ___ibm437_40;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_unixEpoch
	DateTime_t134  ____unixEpoch_66;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_win32Epoch
	DateTime_t134  ____win32Epoch_67;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_zeroHour
	DateTime_t134  ____zeroHour_68;
};
