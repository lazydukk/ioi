#include <iostream>

int main() {
  // assume 4 byte integers
  int x{ 2147483647 }; // the maximum value of a 4-byte signed integer
  std::cout << x << '\n';

  x = x + 1; // integer overflow, undefined behavior
  std::cout << x << '\n';

  std::cout << 20 / 4 << '\n';
  std::cout << 8 / 5 << '\n'; // produces an integer result; as integers cant
                              // hold any fractional values, any fractional
                              // portion is simply dropped (not rounded)
  std::cout << -8 / 5 << '\n';
  std::cout << 13 / 5 << '\n';
  std::cout << -13 / 5 << '\n';
  return 0;
}
