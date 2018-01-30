// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.6.0/ScriptException.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptException;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ScriptException :5
// {
::g::Uno::Exception_type* ScriptException_typeof();
void ScriptException__get_FileName_fn(ScriptException* __this, uString** __retval);
void ScriptException__set_FileName_fn(ScriptException* __this, uString* value);
void ScriptException__get_LineNumber_fn(ScriptException* __this, int32_t* __retval);
void ScriptException__set_LineNumber_fn(ScriptException* __this, int32_t* value);
void ScriptException__get_Name_fn(ScriptException* __this, uString** __retval);
void ScriptException__set_Name_fn(ScriptException* __this, uString* value);
void ScriptException__get_ScriptStackTrace_fn(ScriptException* __this, uString** __retval);
void ScriptException__set_ScriptStackTrace_fn(ScriptException* __this, uString* value);
void ScriptException__ToString_fn(ScriptException* __this, uString** __retval);

struct ScriptException : ::g::Uno::Exception
{
    uStrong<uString*> _FileName;
    int32_t _LineNumber;
    uStrong<uString*> _Name;
    uStrong<uString*> _ScriptStackTrace;

    uString* FileName();
    void FileName(uString* value);
    int32_t LineNumber();
    void LineNumber(int32_t value);
    uString* Name();
    void Name(uString* value);
    uString* ScriptStackTrace();
    void ScriptStackTrace(uString* value);
};
// }

}}} // ::g::Fuse::Scripting
