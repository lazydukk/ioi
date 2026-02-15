#include <iostream>

int getInteger() {
  std::cout << "Enter an integer: ";
  int x{};
  std::cin >> x;
  return x;
}

char getChar() {
  std::cout << "Enter a character: ";
  char y{};
  std::cin >> y;
  return y;
}
