// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_SpecificModule_HeaderFile
#define _IGESDimen_SpecificModule_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESDimen_SpecificModule.hxx>

#include <IGESData_SpecificModule.hxx>
#include <Standard_Integer.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Handle_Message_Messenger.hxx>
#include <Standard_Boolean.hxx>
class IGESData_IGESEntity;
class IGESData_IGESDumper;
class Message_Messenger;


//! Defines Services attached to IGES Entities :
//! Dump & OwnCorrect, for IGESDimen
class IGESDimen_SpecificModule : public IGESData_SpecificModule
{

public:

  
  //! Creates a SpecificModule from IGESDimen & puts it into SpecificLib
  Standard_EXPORT IGESDimen_SpecificModule();
  
  //! Specific Dump (own parameters) for IGESDimen
  Standard_EXPORT   void OwnDump (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent, const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S, const Standard_Integer own)  const;
  
  //! Performs non-ambiguous Corrections on Entities which support
  //! them (BasicDimension,CenterLine,DimensionDisplayData,
  //! DimensionTolerance,DimensionUnits,DimensionedGeometry,
  //! NewDimensionedGeometry,Section,WitnessLine)
  Standard_EXPORT virtual   Standard_Boolean OwnCorrect (const Standard_Integer CN, const Handle(IGESData_IGESEntity)& ent)  const;




  DEFINE_STANDARD_RTTI(IGESDimen_SpecificModule)

protected:




private: 




};







#endif // _IGESDimen_SpecificModule_HeaderFile