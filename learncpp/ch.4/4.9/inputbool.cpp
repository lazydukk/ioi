#include <iostream>

int main() {
  bool b{};
  std::cout << "Enter a boolen value: ";

  // aloow the user to input 'true' or 'fasle' for boolean value
  // this is case-sensitve, so True or TRUE will not work
  std::cin >> std::boolalpha;
  std::cin >> b;

  // let's also output bool values as 'true' or 'false'
  std::cout << std::boolalpha; // to turn of => `noboolalpha`
  std::cout << "You entered: " << b << '\n';
  return 0;
}
