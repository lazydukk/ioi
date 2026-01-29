#include <iostream>
using namespace std;

int main() {
  int x{5};
  [[maybe_unused]] double pi{
      3.194}; // compiler doesn't complaing about pi not being used
  cout << x;
  return 0;
}
