//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#pragma once

#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <sys/stat.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <array>
#include <stack>
#include <set>
#include <map>
#include <list>
#include <memory>
#include <utility>
#include <stdexcept>
#include <bitset>
#include <cstdint>
#include <cctype>
#include <algorithm>
#include <functional>
#include <xutility>
#include <cmath>
//#include <mutex>

using namespace std;
//*******************************************************************************************************************//
//Compiler
//*******************************************************************************************************************//
#ifdef _MSC_VER
  #undef COMPILER_MSC
  #undef COMPILER_VC6
  #undef COMPILER_VC2003
  #undef COMPILER_VC2005
  #undef COMPILER_VC2010
  #undef COMPILER_VC2012
  #undef COMPILER_VC2013

  #define COMPILER_MSC
  #if _MSC_VER == 1200
    #define COMPILER_VC6
  #elif _MSC_VER == 1310
    #define COMPILER_VC2003
  #elif _MSC_VER == 1400
    #define COMPILER_VC2005
  #elif _MSC_VER == 1600
    #define COMPILER_VC2010
  #elif _MSC_VER == 1700
    #define COMPILER_VC2012
  #elif _MSC_VER == 1800
    #define COMPILER_VC2013
  #endif
#endif

#ifdef __BORLANDC__
  #undef COMPILER_BCB
  #undef COMPILER_BCB6
  #undef COMPILER_BCB5
  #undef COMPILER_BCB2006

  #define COMPILER_BCB
  #if __BORLANDC__  >= 0x0560 && __BORLANDC__ <= 0x0569
    #define COMPILER_BCB6
  #elif __BORLANDC__ >= 0x0550 && __BORLANDC__ <= 0x0559
    #define COMPILER_BCB5
  #elif __BORLANDC__ >= 0x0570
    #define COMPILER_BCB2006
  #endif
#endif

#ifdef __GNUC__
  #undef COMPILER_GCC
  #undef COMPILER_GCC2X
  #undef COMPILER_GCC3X
  #undef COMPILER_GCC4X

  #define COMPILER_GCC
  #if __GNUC__ == 2
    #define COMPILER_GCC2X
  #elif __GNUC__ == 3
    #define COMPILER_GCC3X
  #elif __GNUC__ == 4
    #define COMPILER_GCC4X
  #endif
#endif
//*******************************************************************************************************************//
//Platform include
//*******************************************************************************************************************//
#ifdef COMPILER_MSC
  #include <windows.h>
  #include <typeinfo.h>
  #include <vcclr.h>
#endif

#ifdef COMPILER_BCB
#endif

#ifdef COMPILER_GCC
#endif
//*******************************************************************************************************************//
//Instruction
//*******************************************************************************************************************//
#ifdef COMPILER_MSC
  #undef INSTRUCTION_X86
  #undef INSTRUCTION_X64
  #undef INSTRUCTION_IA64

  #ifdef _M_IX86
    #define INSTRUCTION_X86
  #endif
  #ifdef _M_X64
    #define INSTRUCTION_X64
  #endif
  #ifdef _M_IA64
    #define INSTRUCTION_IA64
  #endif
#endif

#ifdef COMPILER_BCB
#endif

#ifdef COMPILER_GCC
#endif
//*******************************************************************************************************************//
//Target
//*******************************************************************************************************************//
#ifdef COMPILER_MSC
  #undef TARGET_WINDOWS
  #undef TARGET_WINDOWS_32
  #undef TARGET_WINDOWS_64

  #define TARGET_WINDOWS
  #ifdef _WIN32
    #define TARGET_WINDOWS_32
  #endif
  #ifdef _WIN64
    #define TARGET_WINDOWS_64
  #endif
#endif

#ifdef COMPILER_BCB
#endif

#ifdef COMPILER_GCC
#endif
//*******************************************************************************************************************//
//Character set
//*******************************************************************************************************************//
#ifdef COMPILER_MSC
  #undef CHARSET_UNICODE
  #undef CHARSET_ANSI

  #ifdef _UNICODE
    #define CHARSET_UNICODE
  #else
    #define CHARSET_ANSI
  #endif
#endif
//*******************************************************************************************************************//
//*******************************************************************************************************************//
#ifdef COMPILER_MSC
  #undef LIBRARY_EXPORT

  #define LIBRARY_EXPORT __declspec(dllexport)
#else
  #define LIBRARY_EXPORT
#endif
//*******************************************************************************************************************//
//*******************************************************************************************************************//
#undef CLASS_DECLARATION
#undef TYPEDEF

#define CLASS_DECLARATION(CLASS_NAME, CONST_CLASS_NAME) \
  class CLASS_NAME; typedef const CLASS_NAME CONST_CLASS_NAME;

#define TYPEDEF(SOURCE, TYPE, CONST_TYPE) \
  typedef SOURCE TYPE; \
  typedef const TYPE CONST_TYPE;

#define BEGIN_DOMINION  namespace Dominion{
#define END_DOMINION }
