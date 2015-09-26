//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "CLIString.h"

using namespace System::Runtime::InteropServices;
using namespace Dominion;
//*******************************************************************************************************************//
//CLIString
//*******************************************************************************************************************//
void CLIString::CLIToNative(String^ input, wchar_t* output)
{
  pin_ptr<const wchar_t> chars = PtrToStringChars(input);

  wcscpy(output, chars);
}

String^ CLIString::NativeToCLI(const wchar_t* input)
{
  return Marshal::PtrToStringAuto((IntPtr)(wchar_t*)input);
}

String^ CLIString::NativeToCLI(char* input)
{
  return Marshal::PtrToStringAuto((IntPtr)input);
}
