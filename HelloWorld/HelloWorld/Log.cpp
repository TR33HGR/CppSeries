#include <iostream>

#include "Common.h"
#include "Log.h"

void InitLog()
{
  Log("Initializing Log");
}

void Log(const char* message)
{
  std::cout << message << std::endl;
}