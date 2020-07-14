#include <iostream>

class Entity
{
public:
  float X, Y;

  void Move(float xa, float ya)
  {
    X += xa;
    Y += ya;
  }
};

class Player : public Entity
{
public:
  const char* Name;

  void PrintName()
  {
    std::cout << Name << std::endl;
  }
};


int main()
{
  std::cout << sizeof(Player) << std::endl;

  Player player;
  player.Move(5.0f, 5.0f);
  player.X = 2.0f;
  std::cin.get();
}