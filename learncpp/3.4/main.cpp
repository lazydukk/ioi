#include <iostream>

int getValue() {
  // clang-format off
std::cerr << "getValue() called\n"; // debuggine statements
  // clang-format on

  return 4;
}

int main() {
  // clang-format off
std::cerr << "main() called\n"; // debuggine statements
  // clang-format on
  std::cout << getValue() << '\n'; // fix => getValue -> getValue()
  return 0;
}

// after fixing the code, remove the debugging statements
