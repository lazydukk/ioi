
#include <iostream>

char userIn() {
  std::cout << "Enter a single character: ";
  char x{};
  std::cin >> x;
  return x;
}

int charAsInt( char c ) {
  return c;
}

int getInt( int c ) {
  return c;
}

int main() {
  // implicit conversion #1
  char a{ userIn() };
  char c{ a };
  int ascii{ a };
  std::cout << "You entered '" << c << "', which has ASCII code " << ascii
            << ".\n";

  // implicit conversion #2
  std::cout << "You entered '" << c << "', which has ASCII code "
            << charAsInt( c ) << ".\n";

  // implicit conversion #3
  std::cout << "You entered '" << c << "', which has ASCII code " << getInt( c )
            << ".\n";
  return 0;
}
