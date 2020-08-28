#include <iostream>
#include <string>

class Entity
{
public:
  int x;
  void Print() const
  {
    std::cout << "Hello!" << std::endl;
  }
};

class ScopedPtr
{
private:
  Entity* m_Obj;
public:
  ScopedPtr(Entity* entity)
    : m_Obj{entity}
  {}
  ~ScopedPtr()
  {
    delete m_Obj;
  }
  Entity* operator->()
  {
    return m_Obj;
  }
  const Entity* operator->() const
  {
    return m_Obj;
  }
};

struct Vector3
{
  float x, z, y;
};

int main()
{
  const ScopedPtr entity = new Entity();
  entity->Print();

  int offsetX = (int)&((Vector3*)nullptr)->x;
  int offsetY = (int)&((Vector3*)nullptr)->y;
  int offsetZ = (int)&((Vector3*)nullptr)->z;
  std::cout << offsetY << std::endl;

  std::cin.get();
}