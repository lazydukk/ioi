#include <iostream>

int main()
{
  const double gravity{ 9.8 }; // preferred
  int const squared{ 4 };      // `east const` style-- not preferred.
  std::cout << gravity << '\n';

  const int num; // error: must be initialized when creating
  num = 6;       // error: can't change a constant variable in execution
}
