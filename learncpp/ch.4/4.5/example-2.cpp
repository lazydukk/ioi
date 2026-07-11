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

  signed int w{ -1 };
  unsigned int z{ 1 };

  if ( w < z )
    std::cout << "-1 is less than 1\n";
  else
    std::cout << "1 is less than -1\n";

  return 0;
}
