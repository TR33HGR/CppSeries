#include <iostream>
#include <string>

class Entity
{
public:
  Entity()
  {
    std::cout << "Created Entity!" << std::endl;
  }

  ~Entity()
  {
    std::cout << "Destroyed Entity!" << std::endl;
  }

private:
  int x;
};

int* CreateArray()
{
  // int array[50];
  int* array = new int[50];
  return array;
}

void FillArray(int* array)
{
  // fill array
}

class ScopedPtr
{
private:
  Entity* m_Ptr;
public:
  ScopedPtr(Entity* ptr)
    : m_Ptr{ptr}
  {}

  ~ScopedPtr()
  {
    delete m_Ptr;
  }
};

int main()
{
  int array[50];
  FillArray(array);

  {
    Entity e;
    Entity* e2 = new Entity();
    ScopedPtr e3 = new Entity();
    ScopedPtr e4{new Entity};
  }

  std::cin.get();
}