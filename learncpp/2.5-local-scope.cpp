#include <iostream>
using namespace std;

int add(int x, int y) { // x and y are created here and enters the scope
  // x and y is only usable within add()
  return x + y;
} // y and x go out of scope and are destroyed here

int main() {
  int a{5}; // a is created, initialized and enters the scope here
  int b{6}; // b is created, inititalized and enters teh scope here

  cout << add(a, b) << '\n';
  return 0;
}
