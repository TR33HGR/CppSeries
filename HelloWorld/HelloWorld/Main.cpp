#include <iostream>

#include "Log.h"

int main()
{
  for (int i = 0; i < 5; i++)
  {
    Log("Hello World!");
  }

  int i = 0;
  while (i < 5)
  {
    Log("Hello World!");
    i++;
  }

  std::cin.get();
}