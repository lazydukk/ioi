#include <iostream>
using namespace std;

int main() {
  cout << "Enter an integer: ";
  int x{};  // x is defined here
  cin >> x; // and used here

  cout << "Enter another integer: ";
  int y{};  // y is defined here
  cin >> y; // and used here

  int sum{x + y};
  cout << "The sum is: " << sum << '\n';
  return 0;
}
