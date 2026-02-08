#include <iostream>
using namespace std;

// add() takes two integers as parameters, and returns the result of their sum
// The values of x and y are determined by the function that calls add()
int add(int x, int y) { return x + y; }

int main() {
  cout << add(4, 5) << '\n'; // arg 4 and 5 are passed to the add() fucntion
  return 0;
}
