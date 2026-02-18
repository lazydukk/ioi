#include <iostream>

// implementation of the getUserInput function
int getUserInput() {
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  return input;
}

int main() {
  // get first number from the user
  int value{getUserInput()}; // Note we've included
                             // code here to test the return value!
  std::cout << value << '\n';

  // get mathematical operation from the user
  // getMathOperation();

  // get second number from the user
  // getUserInput();

  // calculate the result
  // calculateResult();

  // print result
  // printResult();
  return 0;
}
