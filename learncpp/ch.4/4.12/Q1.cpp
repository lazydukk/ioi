#include <iostream>

char userIn() {
  std::cout << "Enter a single character: ";
  char x{};
  std::cin >> x;
  return x;
}

int main() {
  char c{ userIn() };
  std::cout << "You entered '" << c << "', which has ASCII code "
            << static_cast<int>( c );
  return 0;
}
