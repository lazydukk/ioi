#include <iostream>

void print( int x ) {
  std::cout << x << '\n';
}

int main() {
  print( static_cast<int>( 5.5 ) ); // explicitly converts double value to an
                                    // int double value 5.5 => int value 5
  return 0;
}
