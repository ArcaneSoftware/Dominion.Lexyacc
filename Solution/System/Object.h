//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "System/Atom.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//CObject
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CObject, C_OBJECT);
class LIBRARY_EXPORT CObject
{
public:
  template<typename TBase, typename TInheritor>
  inline static const TInheritor& CAST(const TBase& object)
  {
    return dynamic_cast<const TInheritor&>(object);
  }

  CObject();
  CObject(C_OBJECT& that);
  CObject(C_OBJECT&& that);
  virtual ~CObject();
  //{
  virtual void Finalize();
  //Get type name i.e. this class name.
  //This virtual function should be overrided by its derivative class
  virtual wstring ThisName() const;
  //Convert class to a meaningful WSTRING
  virtual wstring ToString() const;
  virtual size_t Hash() const;
  virtual bool AnalogousTo(C_OBJECT& object) const;
  virtual void Clone(C_OBJECT& object);
  virtual bool EqualTo(C_OBJECT& object) const;
  //}
public:
  C_OBJECT& operator=(C_OBJECT& that);
};

END_DOMINION
//*******************************************************************************************************************//
//Macros
//*******************************************************************************************************************//

//Return needed type name i.e. object`s simplified name by inputing its pPointer.
#undef  CLASS_THIS_NAME
#define CLASS_THIS_NAME WSTR(typeid(*this).name())

//Declare uniform object definition on .h file.
//Every derivative classes must use this macro.
#undef  CLASS_INHERITOR
#define CLASS_INHERITOR(BASE, INHERITOR) \
  virtual wstring ThisName() const { return move(CLASS_THIS_NAME); } \
  const INHERITOR& Cast(C_OBJECT& object) const { return CObject::CAST<CObject, INHERITOR>(object);}

#undef CLASS_GET_PROPERTY
#define CLASS_GET_PROPERTY(TYPE, MEMBER, METHOD) \
  const TYPE& Get##METHOD() const {return MEMBER;}

#undef CLASS_SET_PROPERTY
#define CLASS_SET_PROPERTY(TYPE, MEMBER, METHOD) \
  void Set##METHOD(const TYPE& value) {MEMBER = value;}

#undef CLASS_PROPERTY
#define CLASS_PROPERTY(TYPE, MEMBER, METHOD) \
  const TYPE& Get##METHOD() const {return MEMBER;} \
  void Set##METHOD(const TYPE& value) {MEMBER = value;}
