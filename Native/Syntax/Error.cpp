//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "Error.h"

using namespace Dominion;
using namespace Dominion::Syntax;
//*******************************************************************************************************************//
//CEErrorSource
//*******************************************************************************************************************//
map<wstring, EErrorSource> CEErrorSource::STRING_TO_VALUE()
{
  map<wstring, EErrorSource> map;

  map[L"Null"] = EErrorSource::Null;
  map[L"Producing"] = EErrorSource::Producing;
  map[L"Runtime"] = EErrorSource::Runtime;

  return move(map);
}

map<EErrorSource, wstring> CEErrorSource::VALUE_TO_STRING()
{
  map<EErrorSource, wstring> map;

  map[EErrorSource::Null] = L"Null";
  map[EErrorSource::Producing] = L"Producing";
  map[EErrorSource::Runtime] = L"Runtime";

  return move(map);
}

CEErrorSource::CEErrorSource()
{
}

CEErrorSource::CEErrorSource(CE_ERROR_SOURCE& that) :
  CEnum(that)
{
}

CEErrorSource::CEErrorSource(CE_ERROR_SOURCE&& that) :
  CEnum(that)
{
}

CEErrorSource::CEErrorSource(EErrorSource value) :
  CEnum(value, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CEErrorSource::CEErrorSource(WSTRING& valueString) :
  CEnum(valueString, STRING_TO_VALUE, VALUE_TO_STRING)
{
}

CEErrorSource::~CEErrorSource()
{
}
//*******************************************************************************************************************//
//CError
//*******************************************************************************************************************//
CError::CError() :
  _source(EErrorSource::Null),
  _livingLine(0)
{
}

CError::CError(C_ERROR& that) :
  CObject(that),
  _source(that._source),
  _file(that._file),
  _livingLine(that._livingLine),
  _description(that._description)
{
}

CError::CError(C_ERROR&& that) :
  CObject(that),
  _source(move(that._source)),
  _file(move(that._file)),
  _livingLine(move(that._livingLine)),
  _description(move(that._description))
{
}

CError::CError(EErrorSource source, WSTRING& file, int32_t livingLine, WSTRING& description) :
  _source(source),
  _file(file),
  _livingLine(livingLine),
  _description(description)
{
}

CError::~CError()
{
}

wstring CError::ToString() const
{
  auto string = CWStringTemplate(L"Encounter [%x] error:[%x] at line[%x] of file:[%x]").
                Format(CEErrorSource(_source).ToString(),
                       _description,
                       _livingLine, _file);

  return move(string);
}

bool CError::Successed() const
{
  return _source == EErrorSource::Null;
}

C_ERROR& CError::operator=(C_ERROR& that)
{
  CObject::operator=(that);

  _source = that._source;
  _file = that._file;
  _livingLine = that._livingLine;
  _description = that._description;

  return *this;
}
