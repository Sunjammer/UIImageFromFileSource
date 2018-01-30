using Fuse.Elements;
using Uno.IO;
using Uno.UX;
using Uno.Compiler.ExportTargetInterop;
class UIImageNode : Fuse.Controls.Panel{

    // UX ImageFile property. We want to use this as the source for making a UIImage
    FileSource _imageFile;
    public FileSource ImageFile
    {
        get { return _imageFile; }
        set { 
            _imageFile = value; 
            if(_imageFile!=null) OnImageFileSet();
        }
    }

    void OnImageFileSet(){
        FileSourceToUIImageTest(_imageFile);
    }

    // This is our test method. 

    static void FileSourceToUIImageTest(FileSource src){
        ObjC.Object imagePtr = FileSourceToUIImageIOS(src.ReadAllBytes());
        UIImageFromUnoToObjC(imagePtr);
    }

    // Foreign code begins


    // Get a UIImage pointer from Uno and do something with it
    [Foreign(Language.ObjC)]
    extern (iOS) static void UIImageFromUnoToObjC(ObjC.Object imageHandle)
    @{
        UIImage* img = (UIImage*)imageHandle;
        NSLog(@"Received UI Image with dims %f/%f", img.size.width, img.size.height);
    @}


    // Get a UIImage pointer from a uno byteArray
    [Foreign(Language.ObjC)]
    extern (iOS) static ObjC.Object FileSourceToUIImageIOS(byte[] byteArray)
    @{
        uArray* arr = [byteArray unoArray];
		NSData* data = [NSData dataWithBytes:arr->Ptr() length:[byteArray count]];
        UIImage* img = [UIImage imageWithData:data];
        NSLog(@"Created UI Image with dims %f/%f", img.size.width, img.size.height);
        return img;
    @}
}