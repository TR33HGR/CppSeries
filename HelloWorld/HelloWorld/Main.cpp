#include <iostream>
#include <string>
#include <memory>

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

  void Print()
  {}
};


int main()
{
  {
    std::shared_ptr<Entity> e0;
    std::weak_ptr<Entity> weakEntity;
    {
      std::unique_ptr<Entity> entity{new Entity};
      std::unique_ptr<Entity> entity2 = std::make_unique<Entity>();
      //std::unique_ptr<Entity> e0 = entity;
      std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
      weakEntity = sharedEntity;
      e0 = sharedEntity;

      entity->Print();
      entity2->Print();
    }
  }

  std::cin.get();
}