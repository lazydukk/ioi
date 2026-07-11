#include <iostream>

int main() {
  std::cout << "Joe\n";

#if 1 // always true, so the folloeing code will be compiled
  std::cout << "Bob\n";
  /*
  multi line
  comments
   */
  std::cout << "Steve\n";
#endif // until this point

  return 0;
}
