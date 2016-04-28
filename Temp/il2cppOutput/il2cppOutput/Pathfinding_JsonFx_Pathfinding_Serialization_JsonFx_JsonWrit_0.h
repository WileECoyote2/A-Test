#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t949;
// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct JsonWriterSettings_t157;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t950;

#include "mscorlib_System_Object.h"

// Pathfinding.Serialization.JsonFx.JsonWriter
struct  JsonWriter_t445  : public Object_t
{
	// System.IO.TextWriter Pathfinding.Serialization.JsonFx.JsonWriter::Writer
	TextWriter_t949 * ___Writer_0;
	// Pathfinding.Serialization.JsonFx.JsonWriterSettings Pathfinding.Serialization.JsonFx.JsonWriter::settings
	JsonWriterSettings_t157 * ___settings_1;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonWriter::depth
	int32_t ___depth_2;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Int32> Pathfinding.Serialization.JsonFx.JsonWriter::previouslySerializedObjects
	Dictionary_2_t950 * ___previouslySerializedObjects_3;
};
