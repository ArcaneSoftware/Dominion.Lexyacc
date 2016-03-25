#include "stdafx.h"
//********************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//********************************************************************************************************************//
#include "Variable.h"

using namespace Dominion;
using namespace Dominion::Dotnet::System;
using namespace Dominion::Compilation::Essay;
//********************************************************************************************************************//
//Variable
//********************************************************************************************************************//
Variable^ Variable::CREATE(C_VARIABLE& native)
{
  auto accessTypeString = CLIString::NativeToCLI(CAccessTypeEnum(native.GetAccessType()).ToString().c_str());
  auto result = gcnew Variable();

  result->AccessType = EnumHelper<AccessTypeEnum>::PARSE(accessTypeString);
  result->InitialValueID = native.GetInitialValueID();
  result->RealValueID = native.GetRealValueID();
  result->IsArgument = native.GetIsArgument();

  return result;
}

Variable::Variable()
{

}

Variable::~Variable()
{
}

Variable::!Variable()
{
}

int32_t Variable::InitialValueID::get()
{
  return _initialValueID;
}

void Variable::InitialValueID::set(int32_t value)
{
  _initialValueID = value;
}

int32_t Variable::RealValueID::get()
{
  return _realValueID;
}

void Variable::RealValueID::set(int32_t value)
{
  _realValueID = value;
}

bool Variable::IsArgument::get()
{
  return _isArgument;
}

void Variable::IsArgument::set(bool value)
{
  _isArgument = value;
}
