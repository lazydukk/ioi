#include <iostream>

int main() {
  bool b1{ true };
  bool b2{ false };

  b1 = false;
  bool b3{}; // default initialize to false

  std::cout << b1 << '\n';
  std::cout << b2 << '\n';
  std::cout << b3 << '\n';

  bool b4{ !true };  // NOT operator => turns true -> false
  bool b5{ !false }; // turn false -> true
  std::cout << b4 << '\n';
  std::cout << b5 << '\n';

  std::cout << true << '\n';
  std::cout << !true << '\n';

  bool b{ false };
  std::cout << b << '\n';
  std::cout << !b << '\n';

  std::cout << std::boolalpha; // prints bools as true or false
  bool c1 = 4;                 // copy initialization allows implicit
                               // conversion from int to bool
  std::cout << c1 << '\n';
  bool c2 = 0; // copy initialization allows implicit
  // conversion from int to bool
  std::cout << c2 << '\n';

  return 0;
}
