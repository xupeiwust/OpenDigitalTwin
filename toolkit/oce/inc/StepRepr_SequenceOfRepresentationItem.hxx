// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_SequenceOfRepresentationItem_HeaderFile
#define _StepRepr_SequenceOfRepresentationItem_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_StepRepr_RepresentationItem.hxx>
#include <Handle_StepRepr_SequenceNodeOfSequenceOfRepresentationItem.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepRepr_RepresentationItem;
class StepRepr_SequenceNodeOfSequenceOfRepresentationItem;



class StepRepr_SequenceOfRepresentationItem  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepRepr_SequenceOfRepresentationItem();
  
  Standard_EXPORT StepRepr_SequenceOfRepresentationItem(const StepRepr_SequenceOfRepresentationItem& Other);
  
  Standard_EXPORT   void Clear() ;
~StepRepr_SequenceOfRepresentationItem()
{
  Clear();
}
  
  Standard_EXPORT  const  StepRepr_SequenceOfRepresentationItem& Assign (const StepRepr_SequenceOfRepresentationItem& Other) ;
 const  StepRepr_SequenceOfRepresentationItem& operator = (const StepRepr_SequenceOfRepresentationItem& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(StepRepr_RepresentationItem)& T) ;
  
      void Append (StepRepr_SequenceOfRepresentationItem& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepRepr_RepresentationItem)& T) ;
  
      void Prepend (StepRepr_SequenceOfRepresentationItem& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(StepRepr_RepresentationItem)& T) ;
  
      void InsertBefore (const Standard_Integer Index, StepRepr_SequenceOfRepresentationItem& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(StepRepr_RepresentationItem)& T) ;
  
      void InsertAfter (const Standard_Integer Index, StepRepr_SequenceOfRepresentationItem& S) ;
  
  Standard_EXPORT  const  Handle(StepRepr_RepresentationItem)& First()  const;
  
  Standard_EXPORT  const  Handle(StepRepr_RepresentationItem)& Last()  const;
  
      void Split (const Standard_Integer Index, StepRepr_SequenceOfRepresentationItem& Sub) ;
  
  Standard_EXPORT  const  Handle(StepRepr_RepresentationItem)& Value (const Standard_Integer Index)  const;
 const  Handle(StepRepr_RepresentationItem)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(StepRepr_RepresentationItem)& I) ;
  
  Standard_EXPORT   Handle(StepRepr_RepresentationItem)& ChangeValue (const Standard_Integer Index) ;
  Handle(StepRepr_RepresentationItem)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(StepRepr_RepresentationItem)
#define SeqItem_hxx <StepRepr_RepresentationItem.hxx>
#define TCollection_SequenceNode StepRepr_SequenceNodeOfSequenceOfRepresentationItem
#define TCollection_SequenceNode_hxx <StepRepr_SequenceNodeOfSequenceOfRepresentationItem.hxx>
#define Handle_TCollection_SequenceNode Handle_StepRepr_SequenceNodeOfSequenceOfRepresentationItem
#define TCollection_SequenceNode_Type_() StepRepr_SequenceNodeOfSequenceOfRepresentationItem_Type_()
#define TCollection_Sequence StepRepr_SequenceOfRepresentationItem
#define TCollection_Sequence_hxx <StepRepr_SequenceOfRepresentationItem.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _StepRepr_SequenceOfRepresentationItem_HeaderFile