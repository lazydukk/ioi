#include <cstdint> // for fixed-width integers
#include <iostream>

int main() {
  std::int32_t x{ 32767 }; // x is always a 32-bit integer
  x = x + 1;
  std::cout << x << '\n';

  std::int8_t y{ 65 }; // initialize 8-bit integral type with value 65
  std::cout << y << '\n';
  return 0;
}
