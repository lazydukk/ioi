#include <iostream>
using namespace std;

int getValueFromUser() {
  cout << "Enter an integer: ";
  int input{};
  cin >> input;
  return input; // return the value of input back to the caller
}

int main() {
  // stores the returned value in an temp object
  cout << getValueFromUser() << '\n';
  // temp obj is destroyed
  return 0;
}
