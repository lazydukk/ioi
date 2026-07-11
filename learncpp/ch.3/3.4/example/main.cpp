#include <iostream>

int add( int x, int y ) {
  // clang-format off
std::cerr << "add() called (x=" << x << ", y=" << y << ")\n";
  // clang-format on

  return x + y;
}

void printResult( int z ) {
  // clang-format off
std::cerr << "printResult() called (z=" << z << ")\n";
  // clang-format on

  std::cout << "The answer is: " << z << '\n';
}

int getUserInput() {
  // clang-format off
std::cerr << "getUserInput() called\n";
  // clang-format on
  std::cout << "Enter a number: ";
  int x{};
  std::cin >> x;

  // clang-format off
std::cerr << "getUserInput::x = " << x << '\n';
  // clang-format on

  return x; // removed "--" before x
}

int main() {
  // clang-format off
std::cerr << "main() called\n";
  // clang-format on

  int x{ getUserInput() };

  // clang-format off
std::cerr << "main::x = " << x << '\n';
  // clang-format on

  int y{ getUserInput() };

  // clang-format off
std::cerr << "main::y = " << y << '\n';
  // clang-format on

  int z{ add( x, y ) };

  // clang-format off
  std::cerr << "main::z = " << z << '\n';
  // clang-format on

  printResult( z );

  return 0;
}
