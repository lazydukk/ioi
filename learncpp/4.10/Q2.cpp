// A prime number is a whole number greater than 1 that can only be divided
// evenly by 1 and itself. Write a program that asks the user to enter a number
// 0 through 9 (inclusive). If the user enters a number within this range that
// is prime (2, 3, 5, or 7), print “The digit is prime”. Otherwise, print “The
// digit is not prime”.

#include <iostream>

int getUserInput() {
  std::cout << "Enter a number from 0 to 9: ";
  int x{};
  std::cin >> x;
  return x;
}

bool isPrime( int y ) {
  if ( y == 2 )
    return true;
  else if ( y == 3 )
    return true;
  else if ( y == 5 )
    return true;
  else if ( y == 7 )
    return true;

  return false; // if the user didn't enter 2,3,5,7, the digit must not be prime
}

int main() {
  int y{ getUserInput() };
  if ( isPrime( y ) )
    std::cout << "The digit is a prime\n";
  else
    std::cout << "The digit is not prime\n";

  return 0;
}
