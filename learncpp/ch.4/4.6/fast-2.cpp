#include <cstdint>
#include <iostream>

int main() {
  std::uint_fast16_t sometype{ 0 };
  std::cout << sometype << '\n';
  sometype = sometype - 1;
  std::cout << sometype << '\n';
  return 0;
}
