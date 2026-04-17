#include <cstdint>
#include <iostream>

void print( int x ) {
  std::cout << x << '\n';
}

int main() {
  print( static_cast<int>( 5.5 ) ); // explicitly converts double value to an
  // int double value 5.5 => int value 5
  char ch{ 97 };
  std::cout << ch << " has value " << static_cast<int>( ch ) << '\n';

  unsigned int u1{ 5 };
  // convert value of u1 to a signed int
  int s1{ static_cast<int>( u1 ) };
  std::cout << s1 << '\n'; // prints 5

  int s2{ 5 };
  // convert value of s2 to an unsigned int
  unsigned int u2{ static_cast<unsigned int>( s2 ) };
  std::cout << u2 << '\n'; // prints 5

  int s{ -1 };
  std::cout << static_cast<unsigned int>( s ) << '\n';

  std::cout << "break" << '\n';

  unsigned int u{ 4294967295 }; // largest 32-bit unsigned int
  std::cout << static_cast<int>( u )
            << '\n'; // implementation-defined prior to C++20, -1 as of C++20
  std::int8_t myInt{ 65 };
  std::cout << myInt << '\n'; // outputs 'A'; treats 'myInt' as a signed char
  std::cout << static_cast<int>( myInt ) << '\n'; // will always print 65

  return 0;
}
