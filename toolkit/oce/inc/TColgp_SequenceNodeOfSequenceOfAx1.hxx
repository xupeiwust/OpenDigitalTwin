// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_SequenceNodeOfSequenceOfAx1_HeaderFile
#define _TColgp_SequenceNodeOfSequenceOfAx1_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColgp_SequenceNodeOfSequenceOfAx1.hxx>

#include <gp_Ax1.hxx>
#include <TCollection_SeqNode.hxx>
#include <TCollection_SeqNodePtr.hxx>
class gp_Ax1;
class TColgp_SequenceOfAx1;



class TColgp_SequenceNodeOfSequenceOfAx1 : public TCollection_SeqNode
{

public:

  
    TColgp_SequenceNodeOfSequenceOfAx1(const gp_Ax1& I, const TCollection_SeqNodePtr& n, const TCollection_SeqNodePtr& p);
  
      gp_Ax1& Value()  const;




  DEFINE_STANDARD_RTTI(TColgp_SequenceNodeOfSequenceOfAx1)

protected:




private: 


  gp_Ax1 myValue;


};

#define SeqItem gp_Ax1
#define SeqItem_hxx <gp_Ax1.hxx>
#define TCollection_SequenceNode TColgp_SequenceNodeOfSequenceOfAx1
#define TCollection_SequenceNode_hxx <TColgp_SequenceNodeOfSequenceOfAx1.hxx>
#define Handle_TCollection_SequenceNode Handle_TColgp_SequenceNodeOfSequenceOfAx1
#define TCollection_SequenceNode_Type_() TColgp_SequenceNodeOfSequenceOfAx1_Type_()
#define TCollection_Sequence TColgp_SequenceOfAx1
#define TCollection_Sequence_hxx <TColgp_SequenceOfAx1.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColgp_SequenceNodeOfSequenceOfAx1_HeaderFile