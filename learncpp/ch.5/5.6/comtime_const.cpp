#include <iostream>

int main()
{
  int a { 5 }; // not const at all
  const int b {
    a
  }; // clearly not a constant expression (since initializer is non-const)
  const int c {
    5
  }; // clearl a constant expresion (since initializer is a constant expression)

  const int d {
    someVar
  }; // not obvious whther d is usable in a constant expression or not
  const int e {
    getValue()
  }; // not obvious whether e is usable in a constant expresion or not
  return 0;
}
