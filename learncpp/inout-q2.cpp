// Ask the user to enter three values. The program should then print these
// values. Add an appropriate comment above function main().
#include <iostream>
using namespace std;

int main() {
  cout << "Enter 3 values: ";
  int x{};
  int y{};
  int z{};
  cin >> x >> y >> z;
  cout << "You entered " << x << ", " << y << ", and " << z << ".\n";

  return 0;
}
