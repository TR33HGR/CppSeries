#include <iostream>
#include <vector>

void HelloWorld(int a)
{
  std::cout << "Hello World! Value: " << a << std::endl;
}

void ForEach(const std::vector<int>& values, void(*func)(int))
{
  for (int value : values)
    func(value);
}

int main()
{
  typedef void(*HelloWorldFunction)(int);

  HelloWorldFunction function = HelloWorld;

  function(8);
  function(3);
  function(2);
  function(10);

  std::vector<int> values = { 1, 5, 4, 2, 3 };
  ForEach(values, [](int value){ std::cout << "Value: " << value << std::endl; });

  std::cin.get();
}
