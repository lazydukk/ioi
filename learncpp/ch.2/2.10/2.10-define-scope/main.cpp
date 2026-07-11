#include "alex.h" // copies #defined MY_NAME from alex.h
#include <iostream>

int main() {
  std::cout << "My name is: " << MY_NAME << '\n'; // preprocessor replaces M
                                                  // Y_NAME with "Alex"
}
