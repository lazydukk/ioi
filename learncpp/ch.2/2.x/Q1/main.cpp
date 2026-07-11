/*
  Write a single-file program (named main.cpp) that reads two separate integers
  from the user, adds them together, and then outputs the answer. The program
  should use three functions:

  A function named “readNumber” should be used to get (and return) a single
  integer from the user.
  A function named “writeAnswer” should be used to output
  the answer. This function should take a single parameter and have no return
  value.
  A main() function should be used to glue the above functions together.
 */

#include <iostream>

int readNumber() {
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;
  return input;
}

/*
  int calcualte( int x, int y ) {
    return x + y;
  }
 */

void writeAnswer( int x ) {
  std::cout << "The answer is: " << x << '\n';
}

int main() {
  int x{ readNumber() };
  int y{ readNumber() };
  // int result{ calcualte( x, y ) };
  // writeAnswer( result );
  writeAnswer( x + y ); // using operator+ to pass
                        // the sum of x and y to writeAnswer()
  return 0;
}
