#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

std::string GetName()
{
  return "Cherno";
}

class Device {};

class DeviceManager
{
private:
  std::unordered_map<std::string, std::vector<Device*>> m_Devices;

public:
  const std::unordered_map<std::string, std::vector<Device*>>& GetDevices()
  {
    return m_Devices;
  }
};

int main()
{
  // Bad case
  auto name = GetName();
  int a = name.size();

  std::vector<std::string> strings;
  strings.push_back("Apple");
  strings.push_back("Orange");

  for (auto it = strings.begin();
    it != strings.end(); it++) {
    std::cout << *it << std::endl;
  }

  //using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;
  //typedef std::unordered_map<std::string, std::vector<Device*>> DeviceMap;

  DeviceManager dm;
  const auto& devices = dm.GetDevices();

  std::cin.get();
}
