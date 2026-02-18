#include <iostream>

void doIt(int x) {
  // parameter x is created and initialized with x = 1;
  int y{4};
  std::cout << "doIt: x = " << x << " y = " << y << '\n'; // x = 1 && y = 4;
  // prints doIt: x = 1 y = 4
  //
  x = 3; // var x is asigned value 3;
  std::cout << "doIt: x = " << x << " y = " << y << '\n'; // x = 3 && y = 4;
  // prints doIt: x = 3 y = 4
  // then y and x are destroyed
}

int main() {
  int x{1}; // x is created and initialized with 1;
  int y{2}; // y is created and initiazlied with 2

  std::cout << "main: x = " << x << " y = " << y
            << '\n'; // here x = 1 && y = 2;

  doIt(x); // doIt() is called with arg = 1;

  std::cout << "main: x = " << x << " y = " << y
            << '\n'; // prints main: x = 1 y = 2

  return 0;
} // main's y and x are destroyed
