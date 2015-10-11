//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Compilation/Syntax/Dependence.h"

BEGIN_DOMINION_COMPILATION_SYNTAX
//*****************************************************************************************************************//
//EErrorSource
//
//*****************************************************************************************************************//
enum class LIBRARY_EXPORT EErrorSource
{
  Null = 0,
  Producing,
  Runtime
};
//*****************************************************************************************************************//
//CASTTypeEnum
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CEErrorSource, CE_ERROR_SOURCE);
class LIBRARY_EXPORT CEErrorSource :
  public CEnum<EErrorSource>
{
public:
  CLASS_INHERITOR(CEnum<EErrorSource>, CEErrorSource);

  static map<wstring, EErrorSource> STRING_TO_VALUE();
  static map<EErrorSource, wstring> VALUE_TO_STRING();

  CEErrorSource();
  CEErrorSource(CE_ERROR_SOURCE& that);
  CEErrorSource(CE_ERROR_SOURCE&& that);
  explicit CEErrorSource(EErrorSource value);
  explicit CEErrorSource(WSTRING& valueString);
  virtual ~CEErrorSource();
};
//*****************************************************************************************************************//
//CError
//
//*****************************************************************************************************************//
CLASS_DECLARATION(CError, C_ERROR);
class LIBRARY_EXPORT CError : public CObject
{
public:
  CLASS_INHERITOR(CObject, CError);

  CError();
  CError(C_ERROR& that);
  CError(C_ERROR&& that);
  explicit CError(EErrorSource source, WSTRING& file, int32_t liveLine, WSTRING& description);
  virtual ~CError();
  //{CObject
  virtual wstring ToString() const override;
  //}
  bool Successed() const;

  CLASS_PROPERTY(EErrorSource, _source, Source);
  CLASS_PROPERTY(wstring, _file, File);
  CLASS_PROPERTY(int32_t, _liveLine, LiveLine);
  CLASS_PROPERTY(wstring, _description, Description);

  C_ERROR& operator=(C_ERROR& that);

private:
  EErrorSource _source;
  wstring _file;
  int32_t _liveLine;
  wstring _description;
};

END_DOMINION_COMPILATION_SYNTAX
