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
  _variableMap(that._variableMap),
  _syntaxVector(that._syntaxVector),
  _entryID(that._entryID),
  _ToVariableKey(that._ToVariableKey)
{
}

CContext::CContext(C_CONTEXT&& that) :
  CObject(that),
  _variableMap(move(that._variableMap)),
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
  _variableMap.clear();
  _syntaxVector.clear();
}

FToVariableKey CContext::ToVariableKey()
{
  return _ToVariableKey;
}

void CContext::DefineVariable(C_NAMESPACE& a_namespace, WSTRING& name, int32_t initialValueID)
{
  auto identifier = CIdentifier(a_namespace, name);

  _variableMap[_ToVariableKey(identifier.ToString())] = CVariable(identifier, initialValueID);
}

bool CContext::ExistSyntax(int32_t index) const
{
  return index != NONE_ID && index < _syntaxVector.size();
}

bool CContext::HasDefinedVariable(WSTRING& fullName) const
{
  return _variableMap.find(_ToVariableKey(fullName)) != _variableMap.end();
}

bool CContext::HasDefinedVariable(C_NAMESPACE& a_namespace, WSTRING& name) const
{
  auto checkedNamespace = CNamespace(a_namespace);
  bool defined = false;

  while (!checkedNamespace.Empty())
  {
    defined = HasDefinedVariable(CIdentifier(checkedNamespace, name).ToString());

    if (defined)
    {
      break;
    }

    checkedNamespace = checkedNamespace.GetParent();
  }

  return defined;
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

  _variableMap = that._variableMap;
  _syntaxVector = that._syntaxVector;
  _entryID = that._entryID;
  _ToVariableKey = that._ToVariableKey;

  return *this;
}
