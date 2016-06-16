//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#pragma once

#include "System/Case.h"
#include "System/Troublespot.h"

BEGIN_DOMINION
//***********************************************************************************************************************************************************************************//
//CException
//
//***********************************************************************************************************************************************************************************//
CLASS_DECLARATION(CException, C_EXCEPTION);
class LIBRARY_EXPORT CException : public CObject
{
public:
  CLASS_INHERITOR(CObject, CException);

  CException();
  CException(C_EXCEPTION& that);
  CException(C_EXCEPTION&& that);
  CException(C_TROUBLESPOT& troublespot);
  virtual ~CException();

protected:
  void Append(C_CASE& a_case);

public:
  //{CObject
  virtual wstring ToString() const override;
  //}
  //{
  virtual CCase MakeCase(C_TROUBLESPOT& troublespot) const;
  //}
  C_CASE& LatestRecord() const;
  size_t Count() const;

  CLASS_PROPERTY(vector<CCase>, _caseStack, CaseStack);

  C_EXCEPTION& operator=(C_EXCEPTION& that);

private:
  vector<CCase> _caseStack;
};

END_DOMINION
