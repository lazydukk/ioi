#include <iostream>

int main() {
  // Use double for precision with percentages/decimals
  const double bill = 100.0;
  const double tipRate = 0.2;

  // Calculate values
  double tip = bill * tipRate;
  double total = bill + tip;

  // Use fixed and setprecision for formatted currency output
  std::cout << "Total is " << total << '\n';

  return 0;
}
