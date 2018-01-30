// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.6.0/FuseJS/Builtins.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Builtins;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal sealed class Builtins :7
// {
uType* Builtins_typeof();

struct Builtins : uObject
{
    uStrong< ::g::Fuse::Scripting::Function*> Observable;
    uStrong< ::g::Fuse::Scripting::Function*> TreeObservable;
    uStrong< ::g::Fuse::Scripting::Function*> Date;
    uStrong< ::g::Fuse::Scripting::Function*> DateCtor;
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
