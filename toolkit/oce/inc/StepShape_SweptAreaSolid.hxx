// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_SweptAreaSolid_HeaderFile
#define _StepShape_SweptAreaSolid_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepShape_SweptAreaSolid.hxx>

#include <Handle_StepGeom_CurveBoundedSurface.hxx>
#include <StepShape_SolidModel.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class StepGeom_CurveBoundedSurface;
class TCollection_HAsciiString;



class StepShape_SweptAreaSolid : public StepShape_SolidModel
{

public:

  
  //! Returns a SweptAreaSolid
  Standard_EXPORT StepShape_SweptAreaSolid();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_CurveBoundedSurface)& aSweptArea) ;
  
  Standard_EXPORT   void SetSweptArea (const Handle(StepGeom_CurveBoundedSurface)& aSweptArea) ;
  
  Standard_EXPORT   Handle(StepGeom_CurveBoundedSurface) SweptArea()  const;




  DEFINE_STANDARD_RTTI(StepShape_SweptAreaSolid)

protected:




private: 


  Handle(StepGeom_CurveBoundedSurface) sweptArea;


};







#endif // _StepShape_SweptAreaSolid_HeaderFile