// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_CurveRangeSample_HeaderFile
#define _IntTools_CurveRangeSample_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <IntTools_BaseRangeSample.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
class IntTools_Range;


//! class for range index management of curve
class IntTools_CurveRangeSample  : public IntTools_BaseRangeSample
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntTools_CurveRangeSample();
  
  Standard_EXPORT IntTools_CurveRangeSample(const Standard_Integer theIndex);
  
      void SetRangeIndex (const Standard_Integer theIndex) ;
  
      Standard_Integer GetRangeIndex()  const;
  
      Standard_Boolean IsEqual (const IntTools_CurveRangeSample& Other)  const;
  
  Standard_EXPORT   IntTools_Range GetRange (const Standard_Real theFirst, const Standard_Real theLast, const Standard_Integer theNbSample)  const;
  
      Standard_Integer GetRangeIndexDeeper (const Standard_Integer theNbSample)  const;




protected:





private:



  Standard_Integer myIndex;


};


#include <IntTools_CurveRangeSample.lxx>





#endif // _IntTools_CurveRangeSample_HeaderFile