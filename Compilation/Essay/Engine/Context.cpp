//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "Context.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CContext
//*******************************************************************************************************************//
CContext::CContext() :
  CBaseContext()
{
}

CContext::CContext(C_CONTEXT& that) :
  CBaseContext(that),
  _variableMap(that._variableMap),
  _functionMap(that._functionMap),
  _syntaxes(that._syntaxes)
{
}

CContext::CContext(C_CONTEXT&& that) :
  CBaseContext(that),
  _variableMap(move(that._variableMap)),
  _functionMap(move(that._functionMap)),
  _syntaxes(move(that._syntaxes))
{
}

CContext::~CContext()
{
  _variableMap.clear();
  _functionMap.clear();
  _syntaxes.clear();
}

void CContext::DefineVariable(EAccessType access, C_NAMESPACE& liveNamespace, WSTRING& name, int32_t initialValueID)
{
  auto identifier = CIdentifier(liveNamespace, name);

  _variableMap[_ToKey(identifier.ToString())] = CVariable(access, identifier, initialValueID);
}

void CContext::DefineFunction(EAccessType access,
                              C_NAMESPACE& liveNamespace,
                              WSTRING& name,
                              int32_t parameterChainID,
                              int32_t blockID)
{
  auto identifier = CIdentifier(liveNamespace, name);

  _functionMap[_ToKey(identifier.ToString())] = CFunction(access, identifier, parameterChainID, blockID);
}

bool CContext::HasDefinedIdentifier(WSTRING& fullName, EIdentifierType identifierType) const
{
  bool defined = false;

  switch (identifierType)
  {
    case EIdentifierType::Variable:
      defined = _variableMap.find(_ToKey(fullName)) != _variableMap.end();
      break;
    case EIdentifierType::Function:
      defined = _functionMap.find(_ToKey(fullName)) != _functionMap.end();
      break;
    default:
      break;
  }

  return defined;
}

bool CContext::HasDefinedIdentifier(C_NAMESPACE& liveNamespace, WSTRING& name, EIdentifierType identifierType) const
{
  bool defined = HasDefinedIdentifier(CIdentifier(liveNamespace, name).ToString(), identifierType);

  return defined;
}

bool CContext::ExistSyntax(int32_t syntaxID) const
{
  return syntaxID != NONE_ID && syntaxID < _syntaxes.size();
}

shared_ptr<CAbstractSyntaxTree<ESyntaxType>> CContext::GetSyntax(int32_t syntaxID) const
{
  if (ExistSyntax(syntaxID))
  {
    return _syntaxes[syntaxID];
  }
  else
  {
    return shared_ptr<CAbstractSyntaxTree<ESyntaxType>>(nullptr);
  }
}

int32_t CContext::AppendSyntax(CAbstractSyntaxTree<ESyntaxType>* syntax)
{
  _syntaxes.push_back(shared_ptr<CAbstractSyntaxTree<ESyntaxType>>(syntax));

  return _syntaxes.size() - 1;
}

CVariable CContext::GetVariable(WSTRING& identifier) const
{
  auto iterator = _variableMap.find(identifier);

  return iterator == _variableMap.end() ? move(CVariable()) : iterator->second;
}

CVariable CContext::GetVariable(C_IDENTIFIER& identifier) const
{
  return GetVariable(identifier.ToString());
}

void CContext::SetVariableValue(WSTRING& identifier, int valueID)
{
  auto iterator = _variableMap.find(identifier);

  if (iterator != _variableMap.end())
  {
    iterator->second.SetRealValueID(valueID);
  }
}

void CContext::SetVariableValue(C_IDENTIFIER& identifier, int valueID)
{
  SetVariableValue(identifier.ToString(), valueID);
}

C_CONTEXT& CContext::operator=(C_CONTEXT& that)
{
  CBaseContext::operator=(that);

  _variableMap = that._variableMap;
  _functionMap = that._functionMap;
  _syntaxes = that._syntaxes;

  return *this;
}
