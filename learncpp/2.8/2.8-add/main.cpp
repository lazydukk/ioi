#include <iostream>
using namespace std;

int add(int x, int y); // neeeded so main.cpp knows that add() is a function
                       // defeined else where

int main() {
  cout << "The sum 3 and 4 is: " << add(3, 4) << '\n';
  return 0;
}
