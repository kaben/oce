// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_DeltaOnForget_HeaderFile
#define _TDF_DeltaOnForget_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDF_DeltaOnForget_HeaderFile
#include <Handle_TDF_DeltaOnForget.hxx>
#endif

#ifndef _TDF_AttributeDelta_HeaderFile
#include <TDF_AttributeDelta.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
class TDF_Attribute;


//! This class provides default services for an <br>
//!          AttributeDelta on an Forget action. <br>
//! <br>
//!          Applying this AttributeDelta means RESUMING its <br>
//!          attribute. <br>
class TDF_DeltaOnForget : public TDF_AttributeDelta {

public:

  //! Creates a TDF_DeltaOnForget. <br>
  Standard_EXPORT   TDF_DeltaOnForget(const Handle(TDF_Attribute)& anAtt);
  //! Applies the delta to the attribute. <br>
  Standard_EXPORT     void Apply() ;




  DEFINE_STANDARD_RTTI(TDF_DeltaOnForget)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif