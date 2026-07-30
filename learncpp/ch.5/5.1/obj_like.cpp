#include_next <iostream>

#define MY_NAME "lazy"

int main()
{
  std::cout << "My name is " << MY_NAME << '\n';
  return 0;
}
// as the substitution text is a constant value-- object-like macros with
// substitution text are also name constants
//
//
// Prefer constant variables over object-like macros with substitution text.
