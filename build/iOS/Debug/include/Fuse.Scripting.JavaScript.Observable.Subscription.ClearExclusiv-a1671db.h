// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.6.0/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription__ClearExclusiveOperation;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class Observable.Subscription.ClearExclusiveOperation :185
// {
uType* Observable__Subscription__ClearExclusiveOperation_typeof();
void Observable__Subscription__ClearExclusiveOperation__ctor__fn(Observable__Subscription__ClearExclusiveOperation* __this, ::g::Fuse::Scripting::Object* obj, int32_t* origin);
void Observable__Subscription__ClearExclusiveOperation__New1_fn(::g::Fuse::Scripting::Object* obj, int32_t* origin, Observable__Subscription__ClearExclusiveOperation** __retval);
void Observable__Subscription__ClearExclusiveOperation__Perform_fn(Observable__Subscription__ClearExclusiveOperation* __this, ::g::Fuse::Scripting::Context* context);

struct Observable__Subscription__ClearExclusiveOperation : uObject
{
    uStrong< ::g::Fuse::Scripting::Object*> Object;
    int32_t Origin;

    void ctor_(::g::Fuse::Scripting::Object* obj, int32_t origin);
    void Perform(::g::Fuse::Scripting::Context* context);
    static Observable__Subscription__ClearExclusiveOperation* New1(::g::Fuse::Scripting::Object* obj, int32_t origin);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
