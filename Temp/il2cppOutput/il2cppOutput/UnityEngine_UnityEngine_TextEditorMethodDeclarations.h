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

// UnityEngine.TextEditor
struct TextEditor_t781;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.TextEditor::.ctor()
extern "C" void TextEditor__ctor_m4019 (TextEditor_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m4020 (TextEditor_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C" void TextEditor_OnFocus_m4021 (TextEditor_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m4022 (TextEditor_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C" bool TextEditor_DeleteSelection_m4023 (TextEditor_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m4024 (TextEditor_t781 * __this, String_t* ___replace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m4025 (TextEditor_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Copy()
extern "C" void TextEditor_Copy_m4026 (TextEditor_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m4027 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Paste()
extern "C" bool TextEditor_Paste_m4028 (TextEditor_t781 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
