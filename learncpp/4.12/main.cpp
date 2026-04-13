#include <iostream>

void print( int x ) {
  std::cout << x << '\n';
}

int main() {
  print( 5.5 ); // warning: we're passing in a double value
  return 0;
}
