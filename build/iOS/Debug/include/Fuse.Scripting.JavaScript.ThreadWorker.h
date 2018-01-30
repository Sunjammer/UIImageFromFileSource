// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.6.0/ThreadWorker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IThreadWorker.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ThreadWorker;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue;}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent;}}}
namespace g{namespace Uno{namespace Threading{struct Thread;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal sealed class ThreadWorker :15
// {
struct ThreadWorker_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Scripting::IThreadWorker interface1;
};

ThreadWorker_type* ThreadWorker_typeof();
void ThreadWorker__Dispose_fn(ThreadWorker* __this);
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action);
void ThreadWorker__Invoke1_fn(ThreadWorker* __this, uDelegate* action);
void ThreadWorker__OnTerminating_fn(ThreadWorker* __this, int32_t* newState);

struct ThreadWorker : uObject
{
    uStrong< ::g::Uno::Threading::Thread*> _thread;
    uStrong< ::g::Uno::Threading::ManualResetEvent*> _idle;
    uStrong< ::g::Uno::Threading::ManualResetEvent*> _terminate;
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _queue;

    void Dispose();
    void Invoke(uDelegate* action);
    void Invoke1(uDelegate* action);
    void OnTerminating(int32_t newState);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
