// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AlienImage_AidaAlienData_HeaderFile
#define _AlienImage_AidaAlienData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AlienImage_AidaAlienData_HeaderFile
#include <Handle_AlienImage_AidaAlienData.hxx>
#endif

#ifndef _Image_DitheringMethod_HeaderFile
#include <Image_DitheringMethod.hxx>
#endif
#ifndef _Handle_Aspect_ColorMap_HeaderFile
#include <Handle_Aspect_ColorMap.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfInteger_HeaderFile
#include <Handle_TColStd_HArray2OfInteger.hxx>
#endif
#ifndef _AlienImage_AlienImageData_HeaderFile
#include <AlienImage_AlienImageData.hxx>
#endif
#ifndef _Handle_Image_Image_HeaderFile
#include <Handle_Image_Image.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Image_PseudoColorImage_HeaderFile
#include <Handle_Image_PseudoColorImage.hxx>
#endif
#ifndef _Handle_Image_ColorImage_HeaderFile
#include <Handle_Image_ColorImage.hxx>
#endif
class Aspect_ColorMap;
class TColStd_HArray2OfInteger;
class Standard_OutOfRange;
class Standard_TypeMismatch;
class OSD_File;
class Image_Image;
class Image_PseudoColorImage;
class Image_ColorImage;


//! This class defines an Aida Alien image. <br>
class AlienImage_AidaAlienData : public AlienImage_AlienImageData {

public:

  
  Standard_EXPORT   AlienImage_AidaAlienData();
  //! Frees memory allocated by AidaAlienData <br>
  Standard_EXPORT     void Clear() ;
~AlienImage_AidaAlienData()
{
  Clear();
}
  //! Read content of a  AidaAlienData object from a file . <br>
//!          Returns True if file is a Aida file . <br>
  Standard_EXPORT     Standard_Boolean Read(OSD_File& afile) ;
  //! Write content of a  AidaAlienData object to a file . <br>
  Standard_EXPORT     Standard_Boolean Write(OSD_File& afile) const;
  //! Converts a AidaAlienData object to a Image object. <br>
  Standard_EXPORT     Handle_Image_Image ToImage() const;
  //! Converts a Image object to a AidaAlienData object. <br>
  Standard_EXPORT     void FromImage(const Handle(Image_Image)& anImage) ;
  //! Set the ImageDitheringMethod and the ColorMap when <br>
//!          FromImage is called with a ColorImage . <br>
//!	      Aida BYTEMAPS file handle only PseudoColorImage . <br>
//!          Default value is DM_NearestColor, <br>
//!		ColorCubeColorMap( 40, 5,1, 8,6, 3,54 ) <br>
  Standard_EXPORT     void SetColorImageDitheringMethod(const Image_DitheringMethod aMethod,const Handle(Aspect_ColorMap)& aColorMap) ;



  DEFINE_STANDARD_RTTI(AlienImage_AidaAlienData)

protected:


Image_DitheringMethod myDitheringMethod;
Handle_Aspect_ColorMap myDitheringColorMap;
Handle_Aspect_ColorMap myColors;
Standard_Boolean myColorsIsDef;
Standard_Boolean myDataIsDef;


private: 

  //! Allocate HArray2 to store Image data <br>
  Standard_EXPORT     void AllocData(const Standard_Integer DX,const Standard_Integer DY) ;
  
  Standard_EXPORT     Standard_Integer Pixel(const Standard_Integer X,const Standard_Integer Y) const;
  
  Standard_EXPORT     void SetPixel(const Standard_Integer X,const Standard_Integer Y,const Standard_Integer Value) ;
  //! convert a Image object to a AidaAlienData object. <br>
  Standard_EXPORT     void FromPseudoColorImage(const Handle(Image_PseudoColorImage)& anImage) ;
  //! convert a Image object to a AidaAlienData object. <br>
  Standard_EXPORT     void FromColorImage(const Handle(Image_ColorImage)& anImage) ;

Handle_TColStd_HArray2OfInteger myData;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif