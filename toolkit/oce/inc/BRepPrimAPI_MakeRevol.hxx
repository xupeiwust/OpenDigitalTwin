// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrimAPI_MakeRevol_HeaderFile
#define _BRepPrimAPI_MakeRevol_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <BRepSweep_Revol.hxx>
#include <TopTools_ListOfShape.hxx>
#include <BRepPrimAPI_MakeSweep.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
class TopoDS_Shape;
class gp_Ax1;
class BRepSweep_Revol;
class TopTools_ListOfShape;


//! Class to make revolved sweep topologies.
//!
//! a revolved sweep is defined by :
//!
//! * A basis topology which is swept.
//!
//! The   basis topology  must   not  contain solids
//! (neither composite solids.).
//!
//! The basis topology  may be copied  or  shared in
//! the result.
//!
//! * A rotation axis and angle :
//!
//! - The axis is an Ax1 from gp.
//!
//! - The angle is in [0, 2*Pi].
//!
//! - The angle default value is 2*Pi.
//!
//! The result is a topology with a higher dimension :
//!
//! - Vertex -> Edge.
//! - Edge   -> Face.
//! - Wire   -> Shell.
//! - Face   -> Solid.
//! - Shell  -> CompSolid.
//!
//! Sweeping a Compound sweeps  the elements  of the
//! compound  and creates    a  compound with    the
//! results.
class BRepPrimAPI_MakeRevol  : public BRepPrimAPI_MakeSweep
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Builds the Revol of base S, axis  A and angle  D. If C
  //! is true, S is copied.
  Standard_EXPORT BRepPrimAPI_MakeRevol(const TopoDS_Shape& S, const gp_Ax1& A, const Standard_Real D, const Standard_Boolean Copy = Standard_False);
  
  //! Builds the Revol of base S, axis  A and angle 2*Pi. If
  //! C is true, S is copied.
  Standard_EXPORT BRepPrimAPI_MakeRevol(const TopoDS_Shape& S, const gp_Ax1& A, const Standard_Boolean Copy = Standard_False);
  
  //! Returns the internal sweeping algorithm.
  Standard_EXPORT  const  BRepSweep_Revol& Revol()  const;
  
  //! Builds the resulting shape (redefined from MakeShape).
  Standard_EXPORT virtual   void Build() ;
  
  //! Returns the first shape of the revol  (coinciding with
  //! the generating shape).
  Standard_EXPORT   TopoDS_Shape FirstShape() ;
  
  //! Returns the TopoDS Shape of the end of the revol.
  Standard_EXPORT   TopoDS_Shape LastShape() ;
  
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Generated (const TopoDS_Shape& S) ;
  
  //! Returns the TopoDS Shape of the beginning of the revolution,
  //! generated with theShape  (subShape of the generating shape).
  Standard_EXPORT   TopoDS_Shape FirstShape (const TopoDS_Shape& theShape) ;
  
  //! Returns the TopoDS Shape of the end of the revolution,
  //! generated with  theShape (subShape of the  generating shape).
  Standard_EXPORT   TopoDS_Shape LastShape (const TopoDS_Shape& theShape) ;
  
  //! Check if there are degenerated edges in the result.
  Standard_EXPORT   Standard_Boolean HasDegenerated()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& Degenerated()  const;




protected:





private:



  BRepSweep_Revol myRevol;
  TopTools_ListOfShape myDegenerated;


};







#endif // _BRepPrimAPI_MakeRevol_HeaderFile