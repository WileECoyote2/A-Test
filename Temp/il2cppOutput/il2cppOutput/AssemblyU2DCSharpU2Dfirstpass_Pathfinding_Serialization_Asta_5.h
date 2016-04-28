#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Pathfinding.AstarData
struct AstarData_t23;
// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct JsonWriterSettings_t157;
// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct JsonReaderSettings_t158;
// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_t159;
// System.IO.MemoryStream
struct MemoryStream_t160;
// Pathfinding.Serialization.GraphMeta
struct GraphMeta_t161;
// Pathfinding.Serialization.SerializeSettings
struct SerializeSettings_t162;
// Pathfinding.NavGraph[]
struct NavGraphU5BU5D_t28;
// System.Collections.Generic.Dictionary`2<Pathfinding.NavGraph,System.Int32>
struct Dictionary_2_t163;
// System.Text.UTF8Encoding
struct UTF8Encoding_t164;
// System.Text.StringBuilder
struct StringBuilder_t95;

#include "mscorlib_System_Object.h"

// Pathfinding.Serialization.AstarSerializer
struct  AstarSerializer_t156  : public Object_t
{
	// Pathfinding.AstarData Pathfinding.Serialization.AstarSerializer::data
	AstarData_t23 * ___data_2;
	// Pathfinding.Serialization.JsonFx.JsonWriterSettings Pathfinding.Serialization.AstarSerializer::writerSettings
	JsonWriterSettings_t157 * ___writerSettings_3;
	// Pathfinding.Serialization.JsonFx.JsonReaderSettings Pathfinding.Serialization.AstarSerializer::readerSettings
	JsonReaderSettings_t158 * ___readerSettings_4;
	// Pathfinding.Ionic.Zip.ZipFile Pathfinding.Serialization.AstarSerializer::zip
	ZipFile_t159 * ___zip_5;
	// System.IO.MemoryStream Pathfinding.Serialization.AstarSerializer::zipStream
	MemoryStream_t160 * ___zipStream_6;
	// Pathfinding.Serialization.GraphMeta Pathfinding.Serialization.AstarSerializer::meta
	GraphMeta_t161 * ___meta_7;
	// Pathfinding.Serialization.SerializeSettings Pathfinding.Serialization.AstarSerializer::settings
	SerializeSettings_t162 * ___settings_8;
	// Pathfinding.NavGraph[] Pathfinding.Serialization.AstarSerializer::graphs
	NavGraphU5BU5D_t28* ___graphs_9;
	// System.Collections.Generic.Dictionary`2<Pathfinding.NavGraph,System.Int32> Pathfinding.Serialization.AstarSerializer::graphIndexInZip
	Dictionary_2_t163 * ___graphIndexInZip_10;
	// System.Int32 Pathfinding.Serialization.AstarSerializer::graphIndexOffset
	int32_t ___graphIndexOffset_11;
	// System.UInt32 Pathfinding.Serialization.AstarSerializer::checksum
	uint32_t ___checksum_12;
	// System.Text.UTF8Encoding Pathfinding.Serialization.AstarSerializer::encoding
	UTF8Encoding_t164 * ___encoding_13;
};
struct AstarSerializer_t156_StaticFields{
	// System.Text.StringBuilder Pathfinding.Serialization.AstarSerializer::_stringBuilder
	StringBuilder_t95 * ____stringBuilder_14;
};
