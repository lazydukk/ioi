#include <iostream>
using namespace std;

// add() takes two integers as parameters, and returns the result of their sum
// The values of x and y are determined by the function that calls add()
int add(int x, int y) { return x + y; }

int multiply(int a, int b) { return a * b; }

int main() {
  cout << add(4, 5) << '\n'; // arg 4 and 5 are passed to the add() fucntion
  cout << add(1 + 2, 3 * 4) << '\n'; // x = 1 +2 = 3; y = 3 * 4 = 12;

  int z{5};
  cout << add(z, z) << '\n'; // evaluates to ( 5 + 5) = 10;
  cout << multiply(z, z) << '\n';
  cout << add(1, multiply(2, 3)) << '\n';      // evals to 1 + 6
  cout << add(1, add(2, 3)) << '\n';           // evals to 1 + 5
  cout << multiply(add(z, z), multiply(3, 2)); // evals to 60
  return 0;
}
