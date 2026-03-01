// usigned integer overflow

#include <iostream>

int main() {
  unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
  std::cout << "x was: " << x << '\n';

  x = 65536; // 65536 is out of range, so we get modulo wrap-around
  std::cout << "x is now: " << x << '\n';

  x = 65537;
  std::cout << "x is now: " << x << '\n';

  return 0;
}
