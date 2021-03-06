// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_DoubleMapIteratorOfLabelDoubleMap_HeaderFile
#define _TDF_DoubleMapIteratorOfLabelDoubleMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_TDF_DoubleMapNodeOfLabelDoubleMap_HeaderFile
#include <Handle_TDF_DoubleMapNodeOfLabelDoubleMap.hxx>
#endif
class Standard_NoSuchObject;
class TDF_Label;
class TDF_LabelMapHasher;
class TDF_LabelDoubleMap;
class TDF_DoubleMapNodeOfLabelDoubleMap;



class TDF_DoubleMapIteratorOfLabelDoubleMap  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   TDF_DoubleMapIteratorOfLabelDoubleMap();
  
  Standard_EXPORT   TDF_DoubleMapIteratorOfLabelDoubleMap(const TDF_LabelDoubleMap& aMap);
  
  Standard_EXPORT     void Initialize(const TDF_LabelDoubleMap& aMap) ;
  
  Standard_EXPORT    const TDF_Label& Key1() const;
  
  Standard_EXPORT    const TDF_Label& Key2() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
