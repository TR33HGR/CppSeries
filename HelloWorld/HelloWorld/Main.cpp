#include <iostream>
#include <string>

class Entity
{
private:
  int m_X, m_Y;
  int* m_A, *m_B;
  mutable int var;
public:
  int GetX() const
  {
    // m_X = 2;
    var = 2;
    return m_X;
  }

  int GetY()
  {
    return m_Y;
  }

  void SetX(int x)
  {
    m_X = x;
  }

  const int* const GetA() const
  {
    return m_A;
  }

};

void PrintEntity(const Entity& e)
{
  std::cout << e.GetX() << std::endl;
  // std::cout << e.GetY() << std::endl;
}

int main()
{
  Entity e;

  const int MAX_AGE = 90;

  const int* a = new int;
  // int const* a = new int;

  // *a = 2;
  a = (int*)&MAX_AGE;
  std::cout << *a << std::endl;

  int* const b = new int;

  *b = 2;
  // b = (int*)&MAX_AGE;
  std::cout << *b << std::endl;

  const int* const c = new int;

  //*c = 2;
  // b = (int*)&MAX_AGE;
  std::cout << *c << std::endl;


  std::cin.get();
}