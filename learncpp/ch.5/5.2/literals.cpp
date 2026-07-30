#include <iostream>

int main()
{
  return 5;                    // 5 is an integer literal
  bool myNameIsLazy{ true };   // true is a boolean literal
  double d{ 3.4 };             // 3.4 is a double literal
  std::cout << "Hello World!"; // "hello world!" is a c-style string literal

  std::cout << 5L << '\n'; // 5L is type long
  std::cout << 5u << '\n'; // 5u is type unsigned int
  // in most cases it's ok to use non-suffixed int literals; even when
  // initializing non-int types
  //
  std::cout << 5.0 << '\n';  // 5.0 (no suffix) is type double (by default)
  std::cout << 5.0f << '\n'; // 5.0f is type float

  float f{ 4.1f };  // use 'f' suffix so the literal is a float and matches var
                    // type of float
  double dd{ 4.1 }; // change variable to type double so it matches the literal
                    // type double
                    //
  double pi{ 3.14159 }; // 3.141.59 is a double literal in standard notation
  double ddd{ -1.23 };  // the literal can be negative
  double why{ 0.0 };    // prefer '0.0' rather than '0.'-- eventhough it is
  // syntatically acceptable

  double avogadro{
      6.02e23 }; // 6.02 X 10^23 is a double literal in scientific notation
  double protonCharge{ 1.6e-19 }; // charge on a proton is 1.6 X 10^-19
}
