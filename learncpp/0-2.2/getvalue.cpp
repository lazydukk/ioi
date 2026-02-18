#include <iostream>
using namespace std;

// this functions returns an integer value
int getValueFromUser() {
  cout << "Enter an integer: ";
  int input{};
  cin >> input;

  return input;                 // returns the value user entered back to the caller
}


int main() {
  int num{getValueFromUser()};
  cout << num << " double is: " << num * 2 << "\n";
  return 0;
}
