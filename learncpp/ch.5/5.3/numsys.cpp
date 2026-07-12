#include <bitset> // for std::bitset
#include <format> // c++20
#include <iostream>
#include <print> // c++23

int main()
{
  int x{ 012 }; // 0 before the number means this is octal
                // outputs `10`
                // as octal is hardyl ever used-- avoid it
                //
  std::cout << x << '\n';

  int y{ 0xF }; // 0x before the number means this is hexadecimal
  std::cout << y << '\n';

  // int bin{ 0b1011'0010 };      // assign binary 1011 0010 to the variable
  // long value{ 2'132'673'462 }; // much easier to read than 2132673462

  int z{ 12 };
  std::cout << z << '\n';
  std::cout << std::hex << z << '\n';
  std::cout << z << '\n'; // I/O manipulator remains set for future outputs
                          // until it's changed again
  std::cout << std::oct << z << '\n';
  std::cout << std::dec << z << '\n';
  std::cout << z << '\n';

  // std::bitset<8> means we want to store 8 bits
  std::bitset<8> bin1{ 0b1100'0101 }; // binary literal for binary 1100 0101
  std::bitset<8> bin2{ 0xC5 }; // hexadecimal literalf or binary 1100 0101

  std::cout << bin1 << '\n' << bin2 << '\n';
  std::cout << std::bitset<4>{ 0b1010 }
            << '\n'; // creates a temporary std::bitset and prints it

  std::cout << std::format( "{:b}\n", 0b1010 ); // C++20, {:b} formats the
                                                // ment as binary digits
  std::cout << std::format( "{:#b}\n",
                            0b1010 ); // C++20, {:#b} formats the argument as
                                      // 0b-prefixed binary digits

  std::println( "{:b} {:#b}", 0b1010,
                0b1010 ); // C++23, format/print two arguments (same as above)
                          // and a newline

  return 0;
}
