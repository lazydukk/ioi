#include <iostream>

int main() {
  int x{ 4 };
  if ( x )               // if x is non-zore/non-empty
    std::cout << "hi\n"; // if x != 0; then evaluates to TRUE
  else
    std::cout << "bye\n"; // else; FALSE
  return 0;
}
