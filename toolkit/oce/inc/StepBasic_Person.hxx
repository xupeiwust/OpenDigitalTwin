// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_Person_HeaderFile
#define _StepBasic_Person_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_Person.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_Interface_HArray1OfHAsciiString.hxx>
#include <Standard_Boolean.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class TCollection_HAsciiString;
class Interface_HArray1OfHAsciiString;



class StepBasic_Person : public MMgt_TShared
{

public:

  
  //! Returns a Person
  Standard_EXPORT StepBasic_Person();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aId, const Standard_Boolean hasAlastName, const Handle(TCollection_HAsciiString)& aLastName, const Standard_Boolean hasAfirstName, const Handle(TCollection_HAsciiString)& aFirstName, const Standard_Boolean hasAmiddleNames, const Handle(Interface_HArray1OfHAsciiString)& aMiddleNames, const Standard_Boolean hasAprefixTitles, const Handle(Interface_HArray1OfHAsciiString)& aPrefixTitles, const Standard_Boolean hasAsuffixTitles, const Handle(Interface_HArray1OfHAsciiString)& aSuffixTitles) ;
  
  Standard_EXPORT   void SetId (const Handle(TCollection_HAsciiString)& aId) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Id()  const;
  
  Standard_EXPORT   void SetLastName (const Handle(TCollection_HAsciiString)& aLastName) ;
  
  Standard_EXPORT   void UnSetLastName() ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) LastName()  const;
  
  Standard_EXPORT   Standard_Boolean HasLastName()  const;
  
  Standard_EXPORT   void SetFirstName (const Handle(TCollection_HAsciiString)& aFirstName) ;
  
  Standard_EXPORT   void UnSetFirstName() ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) FirstName()  const;
  
  Standard_EXPORT   Standard_Boolean HasFirstName()  const;
  
  Standard_EXPORT   void SetMiddleNames (const Handle(Interface_HArray1OfHAsciiString)& aMiddleNames) ;
  
  Standard_EXPORT   void UnSetMiddleNames() ;
  
  Standard_EXPORT   Handle(Interface_HArray1OfHAsciiString) MiddleNames()  const;
  
  Standard_EXPORT   Standard_Boolean HasMiddleNames()  const;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) MiddleNamesValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbMiddleNames()  const;
  
  Standard_EXPORT   void SetPrefixTitles (const Handle(Interface_HArray1OfHAsciiString)& aPrefixTitles) ;
  
  Standard_EXPORT   void UnSetPrefixTitles() ;
  
  Standard_EXPORT   Handle(Interface_HArray1OfHAsciiString) PrefixTitles()  const;
  
  Standard_EXPORT   Standard_Boolean HasPrefixTitles()  const;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) PrefixTitlesValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbPrefixTitles()  const;
  
  Standard_EXPORT   void SetSuffixTitles (const Handle(Interface_HArray1OfHAsciiString)& aSuffixTitles) ;
  
  Standard_EXPORT   void UnSetSuffixTitles() ;
  
  Standard_EXPORT   Handle(Interface_HArray1OfHAsciiString) SuffixTitles()  const;
  
  Standard_EXPORT   Standard_Boolean HasSuffixTitles()  const;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) SuffixTitlesValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbSuffixTitles()  const;




  DEFINE_STANDARD_RTTI(StepBasic_Person)

protected:




private: 


  Handle(TCollection_HAsciiString) id;
  Handle(TCollection_HAsciiString) lastName;
  Handle(TCollection_HAsciiString) firstName;
  Handle(Interface_HArray1OfHAsciiString) middleNames;
  Handle(Interface_HArray1OfHAsciiString) prefixTitles;
  Handle(Interface_HArray1OfHAsciiString) suffixTitles;
  Standard_Boolean hasLastName;
  Standard_Boolean hasFirstName;
  Standard_Boolean hasMiddleNames;
  Standard_Boolean hasPrefixTitles;
  Standard_Boolean hasSuffixTitles;


};







#endif // _StepBasic_Person_HeaderFile