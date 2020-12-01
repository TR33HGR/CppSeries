#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

void HelloWorld(int a)
{
  std::cout << "Hello World! Value: " << a << std::endl;
}

void ForEach(const std::vector<int>& values, const std::function<void(int)>& func)
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
  auto it = std::find_if(values.begin(), values.end(), [](int value){ return value > 3; });
  std::cout << *it << std::endl;

  int a = 5;

  auto lambda = [=](int value)mutable{ a = 6; std::cout << "Value: " << value << " " << a << std::endl; };

  ForEach(values, lambda);

  std::cin.get();
}
