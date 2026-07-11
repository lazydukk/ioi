#include <iostream>

void printInt( const int x )
{
  std::cout << x << '\n';
}

const int getValue()
{
  return 5;
}

int main()
{
  printInt( 5 ); // 5 will be used as the initializer for x
  printInt( 6 ); // 6 will be used as the initializer for x

  std::cout << getValue() << '\n';

  return 0;
}

// don't use const for value parameters
// don't use const when returning by value
