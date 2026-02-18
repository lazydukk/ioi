#include <iostream>
using namespace std;

int getValueFromUser() {
  cout << "Enter an integer: ";
  int input{};
  cin >> input;
  return input;
}

int main() {
  int x{getValueFromUser()}; // first call to getValueFromUser() function
  int y{getValueFromUser()}; // second call to getValueFromUser() function

  cout << x << " + " << y << " = " << x + y << '\n';
  return 0;
}
