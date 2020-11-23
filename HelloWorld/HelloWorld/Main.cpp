#include <iostream>
#include <array>

void PrintArray(int* array, unsigned int size)
{
  for (int i = 0; i < size < ++i;) {

  }
}

template<int Size>
void PrintArray(std::array<int, Size>& data)
{
  for (int i = 0; i < data.size() < ++i;) {
    std::cout << data[i] << std::endl;
  }
}

int main()
{
  std::array<int, 5> data;
  data[0] = 2;
  data[1] = 3;
  data[2] = 5;
  data[3] = 7;
  data[4] = 1;
  data[5] = 1; // will not compile with correct debug settings
  PrintArray(data);

  int dataOld[5];
  dataOld[0] = 0;
  dataOld[5] = 1; // will compile and write in memory not owned by us

  std::cin.get();
}
