// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdPrs_ShadedShape_HeaderFile
#define _StdPrs_ShadedShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Prs3d_Root.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Prs3d_Drawer.hxx>
#include <StdPrs_Volume.hxx>
#include <Standard_Boolean.hxx>
class Prs3d_Presentation;
class TopoDS_Shape;
class gp_Pnt2d;
class BRep_Builder;
class TopoDS_Compound;


//! Auxiliary procedures to prepare Shaded presentation of specified shape.
class StdPrs_ShadedShape  : public Prs3d_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Shades <theShape>.
  //! @param theVolumeType defines the way how to interpret input shapes - as Closed volumes (to activate back-face
  //! culling and capping plane algorithms), as Open volumes (shells or solids with holes)
  //! or to perform Autodetection (would split input shape into two groups)
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& thePresentation, const TopoDS_Shape& theShape, const Handle(Prs3d_Drawer)& theDrawer, const StdPrs_Volume theVolume = StdPrs_Volume_Autodetection) ;
  
  //! Shades <theShape> with texture coordinates.
  //! @param theVolumeType defines the way how to interpret input shapes - as Closed volumes (to activate back-face
  //! culling and capping plane algorithms), as Open volumes (shells or solids with holes)
  //! or to perform Autodetection (would split input shape into two groups)
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& thePresentation, const TopoDS_Shape& theShape, const Handle(Prs3d_Drawer)& theDrawer, const Standard_Boolean theHasTexels, const gp_Pnt2d& theUVOrigin, const gp_Pnt2d& theUVRepeat, const gp_Pnt2d& theUVScale, const StdPrs_Volume theVolume = StdPrs_Volume_Autodetection) ;
  
  //! Validates triangulation within the shape and performs tessellation if necessary.
  Standard_EXPORT static   void Tessellate (const TopoDS_Shape& theShape, const Handle(Prs3d_Drawer)& theDrawer) ;
  
  //! Searches closed and unclosed subshapes in shape structure and puts them
  //! into two compounds for separate processing of closed and unclosed sub-shapes
  Standard_EXPORT static   void ExploreSolids (const TopoDS_Shape& theShape, const BRep_Builder& theBuilder, TopoDS_Compound& theClosed, TopoDS_Compound& theOpened, const Standard_Boolean theIgnore1DSubShape) ;




protected:





private:





};







#endif // _StdPrs_ShadedShape_HeaderFile