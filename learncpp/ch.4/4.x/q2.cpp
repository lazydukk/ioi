// The user is asked to enter 2 floating point numbers (use doubles). The user
// is then asked to enter one of the following mathematical symbols: +, -, *, or
// /. The program computes the answer on the two numbers the user entered and
// prints the results. If the user enters an invalid symbol, the program should
// print nothing.
// Example of program :
// Enter a double value : 6.2
// Enter a double value : 5
// Enter +, -, *, or / : *
// 6.2 * 5 is 31

#include <iostream>

double userIn() {
  std::cout << "Enter a double value: ";
  double x{};
  std::cin >> x;
  return x;
}

char mathop() {
  std::cout << "Enter +, -, *, or /: ";
  char operation{};
  std::cin >> operation;
  return operation;
}

void printresult( double x, char operation, double y ) {
  double result{};

  if ( operation == '+' )
    result = x + y;
  else if ( operation == '-' )
    result = x - y;
  else if ( operation == '*' )
    result = x * y;
  else if ( operation == '/' )
    result = x / y;
  else
    return; // early return

  std::cout << x << ' ' << operation << ' ' << y << " is " << result << '\n';
}

int main() {
  double a{ userIn() };
  double b{ userIn() };

  char operation{ mathop() };
  printresult( a, operation, b );

  return 0;
}
