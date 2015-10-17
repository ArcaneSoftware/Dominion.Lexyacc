//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include "Dominion/Native/System/Base.h"

#ifdef COMPILER_MSC_CLR

using namespace System;

BEGIN_DOMINION
public ref class CLIString
{
public:
  static void CLIToNative(String^ input, wchar_t* output);
  static String^ NativeToCLI(const wchar_t* input);
  static String^ NativeToCLI(char* input);
};

END_DOMINION
#endif