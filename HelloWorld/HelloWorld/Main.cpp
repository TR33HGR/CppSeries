#include <iostream>
#include <string>

#include <stdlib.h>

int main()
{
  using namespace std::string_literals;

  std::string name0 = "Cherno"s + "hello";
  std::wstring name0a = L"Cherno"s + L"hello";

  const char* example = R"(Line1
Line2
Line3
Line3)";

const char* ex = "(Line1\n"
"Line2\n"
"Line3\n"
"Line3)\n";

  const char* name = u8"Che\0rno";
  //name[2] = 'a';
  std::cout << strlen(name) << std::endl;

  char name2[] = "Che\0rno";
  name2[2] = 'a'; // works on a copy of Cherno

  const wchar_t* name3 = L"Cherno";
  const char16_t* name3 = u"Cherno";
  const char32_t* name3 = U"Cherno";

  std::cin.get();
}