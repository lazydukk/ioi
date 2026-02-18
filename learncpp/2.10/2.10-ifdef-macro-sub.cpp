#include <iostream>

#define PRINT_JOE
#define FOO 9 // Here's a macro subsitution

int main() {
#ifdef PRINT_JOE
  std::cout << "Joe \n";
#endif

#ifdef FOO // This FOO does not get replaced with 9 because it’s part of another
           // preprocessor directive
  std::cout << FOO << '\n'; // This gets replaced by 9,
                            // because it's part of the normal code
#endif
  return 0;
}
