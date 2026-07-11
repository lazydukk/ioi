#include <iostream>
using namespace std;

// Write a complete program that reads an integer from the user,
// doubles it using the doubleNumber() function you wrote in the previous quiz
// question, and then prints the doubled value out to the console.

int doubleNumber(int x) { return 2 * x; }

int main() {
  cout << "Enter a number: ";
  int x{};
  cin >> x;
  cout << doubleNumber(x) << '\n';
  return 0;
}
