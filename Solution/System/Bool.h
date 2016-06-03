//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "System/Object.h"

BEGIN_DOMINION
//*****************************************************************************************************************//
//CBool
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CBool, C_BOOL);

class LIBRARY_EXPORT CBool : public CObject
{
public:
  CLASS_INHERITOR(CObject, CBool);

  CBool();
  CBool(C_BOOL& that);
  CBool(C_BOOL&& that);
  CBool(bool value);
  explicit CBool(WSTRING& value) throw();
  virtual ~CBool();

  //{CObject
  virtual wstring ToString() const override;
  //}

  CLASS_PROPERTY(bool, _value, Value);

  C_BOOL& operator=(C_BOOL& that);
  C_BOOL& operator=(bool that);
  bool operator==(C_BOOL& that);
  bool operator==(bool that);
  bool operator!=(C_BOOL& that);
  bool operator!=(bool that);

private:
  bool _value;
};

END_DOMINION
