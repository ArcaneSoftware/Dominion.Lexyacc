//***********************************************************************************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//***********************************************************************************************************************************************************************************//
#include "Context.h"

using namespace Dominion::Compilation::Essay;
//***********************************************************************************************************************************************************************************//
//CContext
//***********************************************************************************************************************************************************************************//
wstring CContext::DEFAULT_TO_KEY(WSTRING& input)
{
  return input;
}

CContext::CContext() :
  CObject(),
  _ToKey(DEFAULT_TO_KEY),
  _entryID(NONE_ID)
{
}

CContext::CContext(FToContextKey ToKey) :
  _ToKey(ToKey),
  _entryID(NONE_ID)
{
}

CContext::CContext(C_CONTEXT& that) :
  CObject(that),
  _variableMap(that._variableMap),
  _functionMap(that._functionMap),
  _syntaxes(that._syntaxes),
  _ToKey(that._ToKey),
  _entryID(that._entryID)
{
}

CContext::CContext(C_CONTEXT&& that) :
  CObject(that),
  _variableMap(move(that._variableMap)),
  _functionMap(move(that._functionMap)),
  _syntaxes(move(that._syntaxes)),
  _ToKey(move(that._ToKey)),
  _entryID(move(that._entryID))
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

  _variableMap[_ToKey(identifier.ToString())] = CVariable(access, identifier, initialValueID, initialValueID);
}

void CContext::DefineFunction(EAccessType access, C_NAMESPACE& liveNamespace, WSTRING& name, int32_t parameterChainID, int32_t blockID)
{
  auto identifier = CIdentifier(liveNamespace, name);
  auto function = CFunction(access, identifier, parameterChainID, blockID);

  for each(auto each in GetSyntax(parameterChainID)->Pick(this))
  {
    auto paremeter = GetSyntax(each)->GetIdentifier().ToString();

    function.AppendParameter(paremeter);
  }

  _functionMap[_ToKey(identifier.ToString())] = move(function);
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

shared_ptr<CReducibleSyntax> CContext::GetSyntax(int32_t syntaxID) const
{
  return ExistSyntax(syntaxID) ?
         _syntaxes[syntaxID] :
         shared_ptr<CReducibleSyntax>(nullptr);
}

int32_t CContext::AppendSyntax(CReducibleSyntax* syntax)
{
  _syntaxes.push_back(shared_ptr<CReducibleSyntax>(syntax));

  return _syntaxes.size() - 1;
}

CVariable CContext::GetVariable(WSTRING& identifier) const
{
  auto iterator = _variableMap.find(identifier);

  return iterator == _variableMap.end() ? move(CVariable()) : iterator->second;
}

CFunction CContext::GetFunction(WSTRING & identifier) const
{
  auto iterator = _functionMap.find(identifier);

  return iterator == _functionMap.end() ? move(CFunction()) : iterator->second;
}

void CContext::AssignFunctionArgumentID(WSTRING& function, WSTRING& parameter, int32_t argumentID)
{
  auto functionIterator = _functionMap.find(function);

  if (functionIterator != _functionMap.end())
  {
    SetVariableValue(parameter, argumentID);
  }
}

bool CContext::SetVariableValue(WSTRING& identifier, int valueID)
{
  auto iterator = _variableMap.find(identifier);

  if (iterator != _variableMap.end())
  {
    iterator->second.SetRealValueID(valueID);

    return true;
  }
  else
  {
    return false;
  }
}

bool CContext::SetVariableValue(C_IDENTIFIER& identifier, int valueID)
{
  return SetVariableValue(identifier.ToString(), valueID);
}

FToContextKey CContext::ToKey()
{
  return _ToKey;
}

C_CONTEXT& CContext::operator=(C_CONTEXT& that)
{
  CObject::operator=(that);

  _variableMap = that._variableMap;
  _functionMap = that._functionMap;
  _syntaxes = that._syntaxes;
  _ToKey = that._ToKey;
  _entryID = that._entryID;

  return *this;
}

C_CONTEXT& CContext::operator=(C_CONTEXT&& that)
{
  CObject::operator=(that);

  _variableMap = move(that._variableMap);
  _functionMap = move(that._functionMap);
  _syntaxes = move(that._syntaxes);
  _ToKey = move(that._ToKey);
  _entryID = move(that._entryID);

  return *this;
}
