#include <iostream>

enum Example : unsigned char
{
  A = 5, B, C,
};

int a = 0;
int b = 1;
int c = 2;

int main()
{
  Example value = C;

  if (value == 1)
  {
    // Do something;
  }

  std::cin.get();
}