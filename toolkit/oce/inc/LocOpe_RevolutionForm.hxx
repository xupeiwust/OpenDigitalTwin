// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_RevolutionForm_HeaderFile
#define _LocOpe_RevolutionForm_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopoDS_Shape.hxx>
#include <gp_Vec.hxx>
#include <Standard_Real.hxx>
#include <gp_Ax1.hxx>
#include <Standard_Boolean.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#include <gp_Pnt.hxx>
class Standard_NoSuchObject;
class StdFail_NotDone;
class TopoDS_Shape;
class gp_Ax1;
class TopTools_ListOfShape;


//! Defines a revolution form (using Revol from BRepSweep)
//! with modifications provided for the RevolutionForm feature.
class LocOpe_RevolutionForm 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT LocOpe_RevolutionForm();
  
  Standard_EXPORT LocOpe_RevolutionForm(const TopoDS_Shape& Base, const gp_Ax1& Axe, const Standard_Real Angle);
  
  Standard_EXPORT   void Perform (const TopoDS_Shape& Base, const gp_Ax1& Axe, const Standard_Real Angle) ;
  
  Standard_EXPORT  const  TopoDS_Shape& FirstShape()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& LastShape()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Shape()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& Shapes (const TopoDS_Shape& S)  const;




protected:





private:

  
  Standard_EXPORT   void IntPerf() ;


  TopoDS_Shape myBase;
  gp_Vec myVec;
  gp_Vec myTra;
  Standard_Real myAngle;
  gp_Ax1 myAxis;
  Standard_Real myAngTra;
  Standard_Boolean myDone;
  Standard_Boolean myIsTrans;
  TopoDS_Shape myRes;
  TopoDS_Shape myFirstShape;
  TopoDS_Shape myLastShape;
  TopTools_DataMapOfShapeListOfShape myMap;
  gp_Pnt myPnt1;
  gp_Pnt myPnt2;


};







#endif // _LocOpe_RevolutionForm_HeaderFile