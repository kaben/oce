// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopLoc_Datum3D_HeaderFile
#define _TopLoc_Datum3D_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopLoc_Datum3D_HeaderFile
#include <Handle_TopLoc_Datum3D.hxx>
#endif

#ifndef _gp_Trsf_HeaderFile
#include <gp_Trsf.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_ConstructionError;
class gp_Trsf;


//! Describes a coordinate transformation, i.e. a change <br>
//! to an elementary 3D coordinate system, or position in 3D space. <br>
//! A Datum3D is always described relative to the default datum. <br>
//! The default datum is described relative to itself: its <br>
//! origin is (0,0,0), and its axes are (1,0,0) (0,1,0) (0,0,1). <br>
class TopLoc_Datum3D : public MMgt_TShared {

public:

  //! Constructs a default Datum3D. <br>
  Standard_EXPORT   TopLoc_Datum3D();
  //! Constructs a Datum3D form a Trsf from gp. An error is <br>
//!          raised if the Trsf is not a rigid transformation. <br>
  Standard_EXPORT   TopLoc_Datum3D(const gp_Trsf& T);
  //! Returns a gp_Trsf which, when applied to this datum, <br>
//! produces the default datum. <br>
       const gp_Trsf& Transformation() const;
  
//! Writes the contents of this Datum3D to the stream S. <br>
  Standard_EXPORT     void ShallowDump(Standard_OStream& S) const;




  DEFINE_STANDARD_RTTI(TopLoc_Datum3D)

protected:




private: 


gp_Trsf myTrsf;


};


#include <TopLoc_Datum3D.lxx>



// other Inline functions and methods (like "C++: function call" methods)
inline void ShallowDump(const Handle_TopLoc_Datum3D& me,Standard_OStream& S) {
 me->ShallowDump(S);
}



#endif
