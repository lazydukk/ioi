#include <iostream>
using namespace std;

// this function has two integer parameters called x and y;
// then the values x and y are passed in by the caller
void printValue(int x, int y) {
  cout << x << '\n';
  cout << y << '\n';
}

int main() {
  printValue(6, 7); // this function call has 2 arguments; 6 and 7
  return 0;
}
