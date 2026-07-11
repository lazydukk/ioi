// The following program is supposed to divide two numbers, but doesn’t work
// correctly.
// Use the integrated debugger to step through this program. For inputs, enter 8
// and 4. Based on the information you learn, fix the following program:

// The issue here is that the second call to readNumber accidentally assigns its
// value to x instead of y, resulting in a division by 0, which causes undefined
// behavior.

#include <iostream>

int readNumber() {
  std::cout << "Please enter a number: ";
  int x{};
  std::cin >> x;
  return x;
}

void writeAnswer( int x ) {
  std::cout << "The quotient is: " << x << '\n';
}

int main() {
  int x{ readNumber() };
  int y{ readNumber() };
  writeAnswer( x / y );
  return 0;
}
