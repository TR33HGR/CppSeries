#include <iostream>
#include <array>

class Entity
{
public:
  static const int exampleSize = 5;
  int* example = new int[5];
  int example2[exampleSize];

  std::array<int, 5> another;

  Entity()
  {
    int a[5];
    int count = sizeof(a) / sizeof(int); // 5
    int count2 = sizeof(example) / sizeof(int); // 0

    for (int i = 0; i < exampleSize; ++i)
      example[i] = 2;

    for (int i = 0; i < another.size(); ++i)
      another[i] = 2;
  }

};

int main()
{
  Entity e;
/*
  int example[5];
  example[0] = 2;
  example[4] = 4;

  int* ptr = example;

  for (int i = 0; i < 5; ++i)
    example[i] = 2;

  example[2] = 5;
  *(int*)((char*)ptr + 8) = 6;
  *(ptr + 2) = 7;

  int a = example[0];

  std::cout << example[0] << std::endl;
  std::cout << example << std::endl;
*/
  int* another = new int[5];

  for (int i = 0; i < 5; ++i)
    another[i] = 2;

  delete[] another;

  std::cin.get();
}