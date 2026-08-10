#include <iostream>

int main() {
  constexpr int x{expr}; // because variable x is constexpr, expr must be
                         // evaluaatabke at compile-time
  return 0;
}
