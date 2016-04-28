#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Regex
struct Regex_t901;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1627;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t1081;
// System.Text.RegularExpressions.Match
struct Match_t1079;

#include "System_System_Text_RegularExpressions_Group.h"

// System.Text.RegularExpressions.Match
struct  Match_t1079  : public Group_t1082
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t901 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	Object_t * ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t1081 * ___groups_9;
};
struct Match_t1079_StaticFields{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t1079 * ___empty_10;
};
