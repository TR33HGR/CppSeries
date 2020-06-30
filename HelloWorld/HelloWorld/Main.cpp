#include <iostream>

#define LOG(x) cout << x << endl

using namespace std;

void Increment(int& value)
{
  value++;
}

int main()
{
  int a = 5;
  Increment(a);

  LOG(a);

  std::cin.get();
}