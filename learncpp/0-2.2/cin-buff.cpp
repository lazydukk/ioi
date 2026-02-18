#include <iostream> // for std::cout and std::cin
using namespace std;
int main() {
  std::cout << "Enter two numbers: ";

  int x{};
  cin >> x;

  int y{};
  cin >> y;

  cout << "You entered " << x << " and " << y << '\n';

  return 0;
}
