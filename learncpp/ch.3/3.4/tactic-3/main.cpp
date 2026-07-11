#include <iostream>

int add( int x, int y ) {
  // clang-format off
std::cerr << "add() called (x= "<< x << ", y=" << y << ")\n";
  // clang-format on
  return x + y;
}

void printResult( int z ) {
  std::cout << "The answer is: " << z << '\n';
}

int getUserInput() {
  std::cout << "Enter a number: ";
  int x{};
  std::cin >> x;
  return x;
}

int main() {
  int x{ getUserInput() };
  // clang-format off
std::cerr << "main::x = " << x << '\n';
  // clang-format on

  int y{ getUserInput() };
  // clang-format off
std::cerr << "main::y = " << y << '\n';
  // clang-format on

  int z{ add( x, y ) }; // passes 5 as a literal for y, thus always y = 5;
  // clang-format off
std::cerr << "main::z = " << z << '\n';
  // clang-format on

  printResult( z );
  return 0;
}
