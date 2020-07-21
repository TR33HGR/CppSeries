#include <iostream>
#include <string>

void PrintString(const std::string& string)
{
  std::cout << string << std::endl;
}

int main()
{
  std::string name = "Cherno";
  name += " hello!";
  std::string name2 = std::string("Cherno") + " hello!";
  bool contains = name.find("no") != std::string::npos;
  name.size();
  //char name2[7] = { 'C', 'h', 'e', 'r', 'n', 'o', 0 };
  std::cout << name << std::endl;

  std::cin.get();
}