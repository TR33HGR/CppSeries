#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
  String m_Name;
public:
  Entity()
    : m_Name("Unknown")
  {}

  Entity(const String& name)
    : m_Name(name)
  {}

  const String& GetName() const
  {
    return m_Name;
  }
};

int main()
{
  Entity* e;
  {
    Entity entity("Cherno");
    e = &entity;
    std::cout << entity.GetName() << std::endl;
  }

  Entity* e2;
  {
    Entity* entity = new Entity("Cherno2");
    e2 = entity;
    std::cout << entity->GetName() << std::endl;
  }

  std::cin.get();
  delete e2;
}