#include <iostream>

int getInteger();
char getChar();

int main() {
  int x{getInteger()};
  int y{getInteger()};
  char z{getChar()};
  char w{getChar()};
  std::cout << x << " + " << y << " is " << x + y << '\n';
  std::cout << "you entered: " << z << " & " << w << '\n';
  return 0;
}
