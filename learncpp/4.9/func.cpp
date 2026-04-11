#include <iostream>

// returns true if x and y are equal, false otherwise
bool isEqual( int x, int y ) {
  return x == y; // operator== return true if x equals y, ans false otherwise
}

int main() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;

  std::cout << "enter another integer: ";
  int y{};
  std::cin >> y;

  std::cout << std::boolalpha; // print bool as true or false

  std::cout << x << " and " << y << " are equal? ";
  std::cout << isEqual( x, y ) << '\n'; // will return true or false
  return 0;
}
