#include <iostream>
#include <string>

void PrintEntity(const Entity&);

class Entity
{
public:
  int x, y;

  Entity(int x, int y)
  {
    Entity* e = this;

    e->x = x;
    this->y = y;

    Entity& e = *this;

    PrintEntity(*this);

    delete this;
  }

  int GetX() const
  {
    const Entity* e = this;
    const Entity& e2 = *this;

    return x;
  }
};

void PrintEntity(const Entity& e)
{
    // Print
}

int main()
{

  std::cin.get();
}