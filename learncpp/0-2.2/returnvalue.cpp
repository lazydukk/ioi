#include <iostream>
using namespace std;

// int is the return type
int returnFive() {
  return 5;
}

int main() {
  cout << returnFive() << '\n';
  cout << returnFive() + 2 << '\n';

  return 0;
}
