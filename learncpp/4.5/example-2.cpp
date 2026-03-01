#include <iostream>

int main() {
  unsigned int x{ 2 };
  unsigned int y{ 3 };

  std::cout << x - y << '\n'; // results in overflow as
  // the result is a negative number

  unsigned int u{ 2 };
  signed int s{ 3 }; // signed int is converted to
                     // unsigned as u is an unsigned int
  std::cout << u - s << '\n';
  return 0;
}
