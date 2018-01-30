// This file was generated based on UIImageFromBundle.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.UIImageFromBundle_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class UIImageFromBundle_bundle :0
// {
// static UIImageFromBundle_bundle() :0
static void UIImageFromBundle_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    UIImageFromBundle_bundle::fracture347f1648_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"UIImageFrom...*/]))->GetFile(::STRINGS[1/*"fracture-25...*/]);
}

static void UIImageFromBundle_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("UIImageFromBundle");
    ::STRINGS[1] = uString::Const("fracture-2563dbc7.jpg");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&UIImageFromBundle_bundle::fracture347f1648_, uFieldFlagsStatic);
}

uClassType* UIImageFromBundle_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("UIImageFromBundle_bundle", options);
    type->fp_build_ = UIImageFromBundle_bundle_build;
    type->fp_cctor_ = UIImageFromBundle_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> UIImageFromBundle_bundle::fracture347f1648_;
// }

} // ::g
