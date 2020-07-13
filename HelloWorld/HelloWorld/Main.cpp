#include <iostream>

class Entity
{
public:
  float X, Y;

  Entity()
  {
    X = 0.0f;
    Y = 0.0f;
  }

  Entity(float x, float y)
  {
    X = x;
    Y = y;
  }

  void Print()
  {
    std::cout << X << ", " << Y << std::endl;
  }
};

class Log
{
public:
  Log() = delete;

  static void Write()
  {

  }
};

int main()
{
  Log::Write();
  Log l;

  Entity e(10.0f, 5.0f);
  e.Print();
  std::cin.get();
}