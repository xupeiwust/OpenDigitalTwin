// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint_HeaderFile
#define _IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint.hxx>

#include <IntRes2d_IntersectionPoint.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class IntRes2d_IntersectionPoint;
class IntRes2d_SequenceOfIntersectionPoint;



class IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint : public TCollection_SeqNode
{

public:

  
    IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint(const IntRes2d_IntersectionPoint& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      IntRes2d_IntersectionPoint& Value()  const;




  DEFINE_STANDARD_RTTI(IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint)

protected:




private: 


  IntRes2d_IntersectionPoint myValue;


};

#define SeqItem IntRes2d_IntersectionPoint
#define SeqItem_hxx <IntRes2d_IntersectionPoint.hxx>
#define TCollection_SequenceNode IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint
#define TCollection_SequenceNode_hxx <IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint.hxx>
#define Handle_TCollection_SequenceNode Handle_IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint
#define TCollection_SequenceNode_Type_() IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint_Type_()
#define TCollection_Sequence IntRes2d_SequenceOfIntersectionPoint
#define TCollection_Sequence_hxx <IntRes2d_SequenceOfIntersectionPoint.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _IntRes2d_SequenceNodeOfSequenceOfIntersectionPoint_HeaderFile