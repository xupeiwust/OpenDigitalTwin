// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_Sphere_HeaderFile
#define _IGESSolid_Sphere_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSolid_Sphere.hxx>

#include <Standard_Real.hxx>
#include <gp_XYZ.hxx>
#include <IGESData_IGESEntity.hxx>
class gp_XYZ;
class gp_Pnt;


//! defines Sphere, Type <158> Form Number <0>
//! in package IGESSolid
//! This defines a sphere with a center and radius
class IGESSolid_Sphere : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESSolid_Sphere();
  
  //! This method is used to set the fields of the class Sphere
  //! - aRadius : the radius of the sphere
  //! - aCenter : the center point coordinates (default (0,0,0))
  Standard_EXPORT   void Init (const Standard_Real aRadius, const gp_XYZ& aCenter) ;
  
  //! returns the radius of the sphere
  Standard_EXPORT   Standard_Real Radius()  const;
  
  //! returns the center of the sphere
  Standard_EXPORT   gp_Pnt Center()  const;
  
  //! returns the center of the sphere after applying
  //! TransformationMatrix
  Standard_EXPORT   gp_Pnt TransformedCenter()  const;




  DEFINE_STANDARD_RTTI(IGESSolid_Sphere)

protected:




private: 


  Standard_Real theRadius;
  gp_XYZ theCenter;


};







#endif // _IGESSolid_Sphere_HeaderFile