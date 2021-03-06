// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_DataMapIteratorOfDataMapOfLabelExternFile_HeaderFile
#define _STEPCAFControl_DataMapIteratorOfDataMapOfLabelExternFile_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_STEPCAFControl_ExternFile_HeaderFile
#include <Handle_STEPCAFControl_ExternFile.hxx>
#endif
#ifndef _Handle_STEPCAFControl_DataMapNodeOfDataMapOfLabelExternFile_HeaderFile
#include <Handle_STEPCAFControl_DataMapNodeOfDataMapOfLabelExternFile.hxx>
#endif
class Standard_NoSuchObject;
class TDF_Label;
class STEPCAFControl_ExternFile;
class TDF_LabelMapHasher;
class STEPCAFControl_DataMapOfLabelExternFile;
class STEPCAFControl_DataMapNodeOfDataMapOfLabelExternFile;



class STEPCAFControl_DataMapIteratorOfDataMapOfLabelExternFile  : public TCollection_BasicMapIterator {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   STEPCAFControl_DataMapIteratorOfDataMapOfLabelExternFile();
  
  Standard_EXPORT   STEPCAFControl_DataMapIteratorOfDataMapOfLabelExternFile(const STEPCAFControl_DataMapOfLabelExternFile& aMap);
  
  Standard_EXPORT     void Initialize(const STEPCAFControl_DataMapOfLabelExternFile& aMap) ;
  
  Standard_EXPORT    const TDF_Label& Key() const;
  
  Standard_EXPORT    const Handle_STEPCAFControl_ExternFile& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
