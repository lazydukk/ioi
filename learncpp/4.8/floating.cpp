#include <iomanip> // for output manipulator std::setprecision()
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

  std::cout << 9.87654321f << '\n';
  std::cout << 987.654321f << '\n';
  std::cout << 987654.321f << '\n';
  std::cout << 9876543.21f << '\n';
  std::cout << 0.0000987654321f << '\n';

  std::cout << std::setprecision( 17 ); // show 17 digits of precision
  std::cout << 3.33333333333333333333333333333333333333f
            << '\n'; // f suffix means float
  std::cout << 3.33333333333333333333333333333333333333
            << '\n'; // no suffix means double

  float f{ 123456789.0f }; // f has 10 significant digits
  std::cout << std::setprecision( 9 );
  std::cout << f << '\n';

  double z{ 0.1 };
  std::cout << z << '\n'; // use default cout precision of 6
  std::cout << std::setprecision( 17 );
  std::cout << z << '\n';

  std::cout << std::setprecision( 17 );

  double d1{ 1.0 };
  std::cout << d1 << '\n';

  double d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 +
             0.1 }; // shoudl equal to 1.0
  std::cout << d2 << '\n';

  
  
  return 0;
}
