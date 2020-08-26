#include <iostream>
#include <string>

class Entity
{
private:
  std::string m_Name;
  int m_Age;
public:
  Entity(const std::string& name)
    : m_Name{name}
    , m_Age{-1}
  {}

  Entity(int age)
    : m_Name{std::string{"Unknown"}}
    , m_Age{age}
  {}
};

class Entity2
{
private:
  std::string m_Name;
  int m_Age;
public:
  explicit Entity2(int age)
    : m_Name{std::string{"Unknown"}}
    , m_Age{age}
  {}
};

void PrintEntity(const Entity& entity)
{
  // Print
}

int main()
{
  PrintEntity(22);
  PrintEntity(std::string{"Cherno"});

  Entity a{"Cherno"};
  Entity b{22};

  Entity c = {"Cherno"};
  Entity d = 22;

  Entity2 e{22};
  //Entity2 f = 22;

  std::cin.get();
}