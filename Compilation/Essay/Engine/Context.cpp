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
wstring CContext::DEFAULT_TO_KEY(WSTRING& input)
{
  return input;
}

CContext::CContext() :
  _entryID(NONE_ID),
  _ToKey(DEFAULT_TO_KEY)
{
}

CContext::CContext(C_CONTEXT& that) :
  CObject(that),
  _variableMap(that._variableMap),
  _functionMap(that._functionMap),
  _syntaxVector(that._syntaxVector),
  _entryID(that._entryID),
  _ToKey(that._ToKey)
{
}

CContext::CContext(C_CONTEXT&& that) :
  CObject(that),
  _variableMap(move(that._variableMap)),
  _functionMap(move(that._functionMap)),
  _syntaxVector(move(that._syntaxVector)),
  _entryID(move(that._entryID)),
  _ToKey(move(that._ToKey))
{
}

CContext::CContext(FToEssayKey ToEssayKey) :
  _entryID(NONE_ID),
  _ToKey(ToEssayKey)
{
}

CContext::~CContext()
{
  _variableMap.clear();
  _functionMap.clear();
  _syntaxVector.clear();
}

FToEssayKey CContext::ToKey()
{
  return _ToKey;
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
  return syntaxID != NONE_ID && syntaxID < _syntaxVector.size();
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

C_VARIABLE& CContext::GetVariable(WSTRING& identifier) const
{
  auto iterator = _variableMap.find(identifier);

  if (iterator != _variableMap.end())
  {
    return iterator->second;
  }
}

C_VARIABLE& CContext::GetVariable(C_IDENTIFIER& identifier) const
{
  return GetVariable(identifier.ToString());
}

C_CONTEXT& CContext::operator=(C_CONTEXT& that)
{
  CObject::operator=(that);

  _variableMap = that._variableMap;
  _functionMap = that._functionMap;
  _syntaxVector = that._syntaxVector;
  _entryID = that._entryID;
  _ToKey = that._ToKey;

  return *this;
}
