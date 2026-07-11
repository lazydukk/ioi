// question 01
// The following program is supposed to add two numbers, but doesn’t work
// correctly.
// Use the integrated debugger to step through this program and watch
// the value of x. Based on the information you learn, fix the following
// program:

// solution:
// The major issue here is in the second line of function main -- the return
// value of readNumber isn’t assigned to anything, so it is discarded. A minor
// issue is that readNumber is taking an argument when it should have a local
// variable instead.

#include <iostream>

int readNumber() {
  std::cout << "Please enter a number: ";
  int x{};
  std::cin >> x;
  return x;
}

void writeAnswer( int x ) {
  std::cout << "The sum is: " << x << '\n';
}

int main() {
  /*
    int x{};
    readNumber( x );
    x = x + readNumber( x );
   */
  int x{ readNumber() };
  x = x + readNumber();
  writeAnswer( x );
  return 0;
}
