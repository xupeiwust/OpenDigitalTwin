// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataXtd_Point_HeaderFile
#define _TDataXtd_Point_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TDataXtd_Point.hxx>

#include <TDF_Attribute.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Standard_OStream.hxx>
class Standard_GUID;
class TDF_Label;
class gp_Pnt;
class TDF_Attribute;
class TDF_RelocationTable;



//! The basis to define a point attribute.
//! The topological attribute must contain a vertex.
//! You use this class to create reference points in a design.
//!
//! Warning:  Use TDataXtd_Geometry  attribute  to retrieve the
//! gp_Pnt of the Point attribute
class TDataXtd_Point : public TDF_Attribute
{

public:

  
  //! class methods
  //! =============
  //!
  //! Returns the GUID for point attributes.
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  

  //! Sets the label Label as a point attribute.
  //! If no object is found, a point attribute is created.
  Standard_EXPORT static   Handle(TDataXtd_Point) Set (const TDF_Label& label) ;
  

  //! Sets the label Label as a point attribute containing the point P.
  //! If no object is found, a point attribute is created.
  //! Point methods
  //! =============
  Standard_EXPORT static   Handle(TDataXtd_Point) Set (const TDF_Label& label, const gp_Pnt& P) ;
  
  Standard_EXPORT TDataXtd_Point();
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;




  DEFINE_STANDARD_RTTI(TDataXtd_Point)

protected:




private: 




};







#endif // _TDataXtd_Point_HeaderFile