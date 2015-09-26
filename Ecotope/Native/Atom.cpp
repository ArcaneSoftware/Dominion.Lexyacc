//*******************************************************************************************************************//
//ORGANIZATION:
//AUTHOR:
//SUMMARY:
//*******************************************************************************************************************//
#include "Atom.h"

using namespace Dominion;
//*******************************************************************************************************************//
//SString
//*******************************************************************************************************************//
const wchar_t* SString::EMPTY()
{
  return L"";
}

const wchar_t* SString::TRUE_TEXT()
{
  return L"true";
}

const wchar_t* SString::FALSE_TEXT()
{
  return L"false";
}

wstring SString::TO_WSTRING(MSTRING& input, bool appended)
{
  size_t input_length = input.length();
  wstring output = NSTR;

  if (input_length > 0)
  {
    size_t offset = 0;

    while (offset < input_length)
    {
      wchar_t cstring[BUFFER_SIZE + 1] = { 0 };

      size_t converted_length = mbstowcs(cstring, input.c_str() + offset, BUFFER_SIZE);
      if (converted_length == -1)
      {
        return NSTR;
      }

      offset += converted_length;

      cstring[converted_length] = L'\0';

      output.append(cstring);
    }
  }

  return output;
}

string SString::TO_MSTRING(WSTRING& input, bool appended)
{
  size_t input_length = input.length();
  string output = "";

  if (input_length > 0)
  {
    size_t offset = 0;

    while (offset < input_length)
    {
      char cstring[BUFFER_SIZE + 1] = { 0 };
      size_t converted_characters = wcstombs(cstring, input.c_str() + offset, BUFFER_SIZE);

      if (converted_characters == -1)
      {
        return "";
      }

      offset += converted_characters;

      cstring[converted_characters] = L'\0';

      output.append(cstring);
    }
  }

  return output;
}

vector<wstring> SString::SPLIT(WSTRING& input, wchar_t separator)
{
  wstring operation(input);
  vector<wstring> strings;
  size_t index;

  while ((index = operation.find(separator)) != -1)
  {
    strings.push_back(operation.substr(0, index));

    operation = operation.substr(index + 1, operation.length());
  }

  if (operation.length() > 0)
  {
    strings.push_back(operation);
  }

  return move(strings);
}

wstring SString::SUBSTRING(WSTRING& input, size_t location, size_t length)
{
  if (-1 == length)
  {
    return input.substr(location);
  }
  else
  {
    return (location + length <= input.length()) ? input.substr(location, length) : input.substr(location);
  }
}

wstring SString::TRIM_LEFT(WSTRING& input, wchar_t scrap)
{
  wstring result;

  if (0 != input.length())
  {
    for (size_t i = 0; i < input.length(); i++)
    {
      if (input[i] != scrap)
      {
        result = input.substr(i);

        break;
      }
    }
  }

  return move(result);
}

string SString::TRIM_LEFT(MSTRING& input, char scrap)
{
  return MSTR(TRIM_LEFT(WSTR(input), scrap));
}

wstring SString::TRIM_LEFT_IN(WSTRING& input, WSTRING& scrap)
{
  wstring result;

  if (0 != input.length())
  {
    for (size_t i = 0; i < input.length(); i++)
    {
      bool in = false;

      for (size_t j = 0; j < scrap.length(); j++)
      {
        if (input[i] == scrap[j])
        {
          in = true;
          break;
        }
      }

      if (in)
      {
        result = input.substr(i + 1);
      }
      else
      {
        result = input.substr(i);
        break;
      }
    }
  }

  return move(result);
}

string SString::TRIM_LEFT_IN(MSTRING& input, MSTRING& scrap)
{
  return MSTR(TRIM_LEFT_IN(WSTR(input), WSTR(scrap)));
}

wstring SString::TRIM_RIGHT(WSTRING& input, wchar_t scrap)
{
  wstring result;
  size_t length = input.length();

  if (0 != length)
  {
    for (size_t i = length - 1; i >= 0; i--)
    {
      if (input[i] != scrap)
      {
        result = input.substr(0, i + 1);

        break;
      }
    }
  }

  return move(result);
}

string SString::TRIM_RIGHT(MSTRING& input, char scrap)
{
  return MSTR(TRIM_RIGHT(WSTR(input), scrap));
}

wstring SString::TRIM_RIGHT_IN(WSTRING& input, WSTRING& scrap)
{
  wstring result;

  if (0 != input.length())
  {
    for (size_t i = input.length() - 1; i >= 0; i--)
    {
      bool in = false;

      for (size_t j = 0; j < scrap.length(); j++)
      {
        if (input[i] == scrap[j])
        {
          in = true;
          break;
        }
      }

      if (in)
      {
        result = input.substr(0, i);
      }
      else
      {
        result = input.substr(0, i + 1);
        break;
      }
    }
  }

  return move(result);
}

string SString::TRIM_RIGHT_IN(MSTRING& input, MSTRING& scrap)
{
  return MSTR(TRIM_RIGHT_IN(WSTR(input), WSTR(scrap)));
}

wstring SString::TRIM_IN(WSTRING& input, WSTRING& scraps)
{
  return TRIM_RIGHT_IN(TRIM_LEFT_IN(input, scraps), scraps);
}

string SString::TRIM_IN(MSTRING& input, MSTRING& scraps)
{
  return MSTR(TRIM_IN(WSTR(input), WSTR(scraps)));
}

wchar_t SString::HEAD(WSTRING& input)
{
  return input.empty() ? '\0' : input[0];
}

wchar_t SString::TAIL(WSTRING& input)
{
  return input.empty() ? '\0' : input[input.length() - 1];
}

