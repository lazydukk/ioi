#include <iostream>

int main()
{
  std::cout << "Enter your age: ";
  int age{};
  std::cin >> age;

  const int constAge{ age }; // init const var using non-const value
  age = 5;      // ok as age is non-const, thus we can change it's value
  constAge = 6; // error: constAge is const, thus we can't change it's value

  // initializer of a const var can be a non-const value
  return 0;
}
