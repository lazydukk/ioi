#include <iostream>

// implementation of the getUserInput function
int getUserInput() {
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  return input;
}

// implementation of getting the mathematical operator from the user
char getMathOperation() {
  std::cout << "Enter the mathematical operation (+, -, *, /: ";
  char input{};
  std::cin >> input;

  return input;
}

/*
// implementation of calculating the result
int calculateResult(int x, int y, char z) {
  // needs upcoming topics
  }
*/

int main() {
  // get first number from the user
  int valueOne{getUserInput()}; // Note we've included
                                // code here to test the return value!
  std::cout << valueOne << '\n';

  // get mathematical operation from the user
  char operation{getMathOperation()};
  std::cout << operation << '\n';

  // get second number from the user
  int valueTwo{getUserInput()};
  std::cout << valueTwo << '\n';

  // calculate the result
  // calculateResult();

  // print result
  // printResult();
  return 0;
}
