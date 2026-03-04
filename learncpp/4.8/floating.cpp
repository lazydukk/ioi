#include <iostream>

int main() {
  int a{ 5 };
  double b{ 5.0 }; // 5.0 is a floating point literal (no suffic means double
                   // type by default)
  float c{ 5.0f }; // 5.0 is a floating point literal, f suffic means float type
  int d{ 0 };
  double e{ 0.0 }; // 0.0 is a double

  std::cout << a << '\n';
  std::cout << b << '\n';
  std::cout << c << '\n';
  std::cout << d << '\n';
  std::cout << e << '\n';

  std::cout << 5.0 << '\n';
  std::cout << 6.7f << '\n';
  std::cout << 9876543.21 << '\n'; // will be printed in scientific notation
  return 0;
}
