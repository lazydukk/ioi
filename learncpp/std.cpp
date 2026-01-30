#include <iostream>
using namespace std;

int main() {
  int x{5};
  cout << "x is equal to " << x << '\n';
  cout << "Enter a number: ";
  int y{};
  cin >> y;
  cout << "you entered: " << y << '\n';
  return 0;
}
