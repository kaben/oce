// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_DataMapNodeOfDataMapOfStringReal_HeaderFile
#define _TDataStd_DataMapNodeOfDataMapOfStringReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataStd_DataMapNodeOfDataMapOfStringReal_HeaderFile
#include <Handle_TDataStd_DataMapNodeOfDataMapOfStringReal.hxx>
#endif

#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TCollection_ExtendedString;
class TDataStd_DataMapOfStringReal;
class TDataStd_DataMapIteratorOfDataMapOfStringReal;



class TDataStd_DataMapNodeOfDataMapOfStringReal : public TCollection_MapNode {

public:

  
      TDataStd_DataMapNodeOfDataMapOfStringReal(const TCollection_ExtendedString& K,const Standard_Real& I,const TCollection_MapNodePtr& n);
  
        TCollection_ExtendedString& Key() const;
  
        Standard_Real& Value() const;




  DEFINE_STANDARD_RTTI(TDataStd_DataMapNodeOfDataMapOfStringReal)

protected:




private: 


TCollection_ExtendedString myKey;
Standard_Real myValue;


};

#define TheKey TCollection_ExtendedString
#define TheKey_hxx <TCollection_ExtendedString.hxx>
#define TheItem Standard_Real
#define TheItem_hxx <Standard_Real.hxx>
#define Hasher TCollection_ExtendedString
#define Hasher_hxx <TCollection_ExtendedString.hxx>
#define TCollection_DataMapNode TDataStd_DataMapNodeOfDataMapOfStringReal
#define TCollection_DataMapNode_hxx <TDataStd_DataMapNodeOfDataMapOfStringReal.hxx>
#define TCollection_DataMapIterator TDataStd_DataMapIteratorOfDataMapOfStringReal
#define TCollection_DataMapIterator_hxx <TDataStd_DataMapIteratorOfDataMapOfStringReal.hxx>
#define Handle_TCollection_DataMapNode Handle_TDataStd_DataMapNodeOfDataMapOfStringReal
#define TCollection_DataMapNode_Type_() TDataStd_DataMapNodeOfDataMapOfStringReal_Type_()
#define TCollection_DataMap TDataStd_DataMapOfStringReal
#define TCollection_DataMap_hxx <TDataStd_DataMapOfStringReal.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
