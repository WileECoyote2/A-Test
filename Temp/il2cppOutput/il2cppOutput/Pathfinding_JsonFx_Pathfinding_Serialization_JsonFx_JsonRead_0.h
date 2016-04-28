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
// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct JsonReaderSettings_t158;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t133;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t941;

#include "mscorlib_System_Object.h"

// Pathfinding.Serialization.JsonFx.JsonReader
struct  JsonReader_t446  : public Object_t
{
	// Pathfinding.Serialization.JsonFx.JsonReaderSettings Pathfinding.Serialization.JsonFx.JsonReader::Settings
	JsonReaderSettings_t158 * ___Settings_8;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::Source
	String_t* ___Source_9;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonReader::SourceLength
	int32_t ___SourceLength_10;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonReader::index
	int32_t ___index_11;
	// System.Collections.Generic.List`1<System.Object> Pathfinding.Serialization.JsonFx.JsonReader::previouslyDeserialized
	List_1_t133 * ___previouslyDeserialized_12;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>> Pathfinding.Serialization.JsonFx.JsonReader::jsArrays
	Stack_1_t941 * ___jsArrays_13;
};
struct JsonReader_t446_StaticFields{
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralFalse
	String_t* ___LiteralFalse_0;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralTrue
	String_t* ___LiteralTrue_1;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralNull
	String_t* ___LiteralNull_2;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralUndefined
	String_t* ___LiteralUndefined_3;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralNotANumber
	String_t* ___LiteralNotANumber_4;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralPositiveInfinity
	String_t* ___LiteralPositiveInfinity_5;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralNegativeInfinity
	String_t* ___LiteralNegativeInfinity_6;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::TypeGenericIDictionary
	String_t* ___TypeGenericIDictionary_7;
};
