// This file was generated based on UIImageTest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{struct UIImageNode;}

namespace g{

// internal sealed class UIImageNode :5
// {
::g::Fuse::Controls::Panel_type* UIImageNode_typeof();
void UIImageNode__ctor_7_fn(UIImageNode* __this);
void UIImageNode__FileSourceToUIImageIOS_fn(uArray* byteArray, ::g::ObjC::Object** __retval);
void UIImageNode__FileSourceToUIImageTest_fn(::g::Uno::UX::FileSource* src);
void UIImageNode__get_ImageFile_fn(UIImageNode* __this, ::g::Uno::UX::FileSource** __retval);
void UIImageNode__set_ImageFile_fn(UIImageNode* __this, ::g::Uno::UX::FileSource* value);
void UIImageNode__New4_fn(UIImageNode** __retval);
void UIImageNode__OnImageFileSet_fn(UIImageNode* __this);
void UIImageNode__UIImageFromUnoToObjC_fn(::g::ObjC::Object* imageHandle);

struct UIImageNode : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::FileSource*> _imageFile;

    void ctor_7();
    ::g::Uno::UX::FileSource* ImageFile();
    void ImageFile(::g::Uno::UX::FileSource* value);
    void OnImageFileSet();
    static ::g::ObjC::Object* FileSourceToUIImageIOS(uArray* byteArray);
    static void FileSourceToUIImageTest(::g::Uno::UX::FileSource* src);
    static UIImageNode* New4();
    static void UIImageFromUnoToObjC(::g::ObjC::Object* imageHandle);
};
// }

} // ::g
