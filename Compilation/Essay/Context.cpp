//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "Context.h"
#include "EssaySyntax.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CContext
//*******************************************************************************************************************//
CContext::CContext() :
  _entryID(NONE_ID),
  _ToVariableKey(nullptr)
{
}

CContext::CContext(C_CONTEXT& that) :
  CObject(that),
  _definedVariableMap(that._definedVariableMap),
  _syntaxVector(that._syntaxVector),
  _entryID(that._entryID),
  _ToVariableKey(that._ToVariableKey)
{
}

CContext::CContext(C_CONTEXT&& that) :
  CObject(that),
  _definedVariableMap(move(that._definedVariableMap)),
  _syntaxVector(move(that._syntaxVector)),
  _entryID(move(that._entryID)),
  _ToVariableKey(move(that._ToVariableKey))
{
}

CContext::CContext(FToVariableKey ToVariableKey) :
  _entryID(NONE_ID),
  _ToVariableKey(ToVariableKey)
{
}

CContext::~CContext()
{
  _definedVariableMap.clear();
  _syntaxVector.clear();
}

FToVariableKey CContext::ToVariableKey()
{
  return _ToVariableKey;
}

void CContext::DefineVariable(WSTRING& name, int32_t initialValue)
{
  //_definedVariableMap[_ToVariableKey(name)] = CVariable(name, initialValue);
}

bool CContext::ExistSyntax(int32_t index) const
{
  return index != NONE_ID && index < _syntaxVector.size();
}

bool CContext::DefinedVariable(WSTRING& name) const
{
  return _definedVariableMap.find(_ToVariableKey(name)) != _definedVariableMap.end();
}

shared_ptr<CEssaySyntax> CContext::GetSyntax(int32_t syntaxID) const
{
  if (ExistSyntax(syntaxID))
  {
    return _syntaxVector[syntaxID];
  }
  else
  {
    return shared_ptr<CEssaySyntax>(nullptr);
  }
}

int32_t CContext::AppendSyntax(CEssaySyntax* syntax)
{
  _syntaxVector.push_back(shared_ptr<CEssaySyntax>(syntax));

  return _syntaxVector.size() - 1;
}

C_CONTEXT& CContext::operator=(C_CONTEXT& that)
{
  CObject::operator=(that);

  _definedVariableMap = that._definedVariableMap;
  _syntaxVector = that._syntaxVector;
  _entryID = that._entryID;
  _ToVariableKey = that._ToVariableKey;

  return *this;
}
