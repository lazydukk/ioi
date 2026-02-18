#include <iostream>
using namespace std;

int main() {
  int x{5};
  cout << "x is equal to " << x << '\n';
  cout << "Enter a number: ";
  int y{};
  cin >> y;
  cout << "you entered: " << y << '\n';

  cout << "Enter 2 characters seperated by a space: ";
  char a{};
  char b{};
  cin >> a >> b;
  cout << "You entered: " << a << " and " << b << '\n';
  return 0;
}
