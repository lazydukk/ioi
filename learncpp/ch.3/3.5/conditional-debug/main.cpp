#include <iostream>

#define ENABLE_DEBUG // comment out to disable debugging

int getUserInput() {
#ifdef ENABLE_DEBUG
  // clang-format off
std::cerr << "getUserInput() called\n";
  // clang-format on
#endif

  std::cout << "Enter a number: ";
  int x{};
  std::cin >> x;
  return x;
}

int main() {
#ifdef ENABLE_DEBUG
  // clang-format off
std::cerr << "main() called\n";
  // clang-format on
#endif

  int x{ getUserInput() };
  std::cout << "You entered: " << x << '\n';

  return 0;
}
