#include <iostream>

int Multiply(int a, int b)
{
  return a * b;
}

void MulitpyAndLog(int a, int b)
{
  int result = Multiply(a, b);
  std::cout << result << std::endl;
}

int main()
{
  MulitpyAndLog(3, 2);
  MulitpyAndLog(8, 5);
  MulitpyAndLog(90, 45);
  std::cin.get();
}