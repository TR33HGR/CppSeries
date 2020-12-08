#include <iostream>
#include <string>
#include <algorithm>

namespace apple {

  void print(const char* text)
  {
    std::cout << text << std::endl;
  }

  void print_again()
  {
    return;
  }
}

namespace orange { namespace functions {

  void print(const char* text)
  {
    std::string temp = text;
    std::reverse(temp.begin(), temp.end());
    std::cout << temp << std::endl;
  }
}}

int main()
{
  using apple::print;
  namespace o = orange::functions;

  print("Hello");
  o::print("Hello");
  apple::print_again();

  std::cin.get();
}
