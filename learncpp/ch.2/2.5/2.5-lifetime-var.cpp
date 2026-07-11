#include <iostream>
using namespace std;

void doSomething() { cout << "Hello \n"; }

int main() {
  int x{0};      // x's lifetime begins here
  doSomething(); // x is still alive druing this func call
  return 0;
} // x's lifetime ends here
