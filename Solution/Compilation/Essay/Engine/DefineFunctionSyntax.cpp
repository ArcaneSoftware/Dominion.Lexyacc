//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "DefineFunctionSyntax.h"

using namespace Dominion::Compilation::Essay;
//*******************************************************************************************************************//
//CDefineFunctionSyntax
//*******************************************************************************************************************//
CDefineFunctionSyntax::CDefineFunctionSyntax() :
  CBaseSyntax(ESyntaxType::DefineFunction),
  _parameterChainID(NONE_ID),
  _blockID(NONE_ID)
{
}

CDefineFunctionSyntax::CDefineFunctionSyntax(C_DEFINE_FUNCTION_SYNTAX& that) :
  CBaseSyntax(that),
  _accessType(that._accessType),
  _name(that._name),
  _parameterChainID(that._parameterChainID),
  _blockID(that._blockID)
{
}

CDefineFunctionSyntax::CDefineFunctionSyntax(C_DEFINE_FUNCTION_SYNTAX&& that) :
  CBaseSyntax(that),
  _accessType(move(that._accessType)),
  _name(move(that._name)),
  _parameterChainID(move(that._parameterChainID)),
  _blockID(move(that._blockID))
{
}

CDefineFunctionSyntax::CDefineFunctionSyntax(int32_t liveLine, C_NAMESPACE& liveNamespace, EAccessType accessType, WSTRING& name, int32_t parameterChainID, int32_t blockID) :
  CBaseSyntax(ESyntaxType::DefineVariable, liveLine, liveNamespace),
  _accessType(accessType),
  _name(name),
  _parameterChainID(parameterChainID),
  _blockID(blockID)
{
}

CDefineFunctionSyntax::~CDefineFunctionSyntax()
{
}

C_DEFINE_FUNCTION_SYNTAX& CDefineFunctionSyntax::operator=(C_DEFINE_FUNCTION_SYNTAX& that)
{
  CBaseSyntax::operator=(that);

  _accessType = that._accessType;
  _name = that._name;
  _parameterChainID = that._parameterChainID;
  _blockID = that._blockID;

  return *this;
}