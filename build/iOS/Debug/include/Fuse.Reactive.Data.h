// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.6.0/Expression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Data;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Data :66
// {
::g::Fuse::Reactive::Expression_type* Data_typeof();
void Data__get_Key_fn(Data* __this, uString** __retval);
void Data__set_Key_fn(Data* __this, uString* value);
void Data__Subscribe_fn(Data* __this, uObject* context, uObject* listener, uObject** __retval);
void Data__ToString_fn(Data* __this, uString** __retval);

struct Data : ::g::Fuse::Reactive::Expression
{
    uStrong<uString*> _Key;

    uString* Key();
    void Key(uString* value);
};
// }

}}} // ::g::Fuse::Reactive
