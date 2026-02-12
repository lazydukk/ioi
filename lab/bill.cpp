/*
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
*/

/*
#include <iostream>
#include <iomanip>

// Function to calculate the tip amount
double calculateTip(double bill, double rate) {
    return bill * rate;
}

// Function to calculate the total bill
double calculateTotal(double bill, double tip) {
    return bill + tip;
}

// Function to handle the display of results
void displayBill(double total) {
    std::cout << "Total is $" << std::fixed << std::setprecision(2) << total <<
'\n';
}

int main() {
    const double bill = 100.0;
    const double tipRate = 0.2;

    double tip = calculateTip(bill, tipRate);
    double total = calculateTotal(bill, tip);

    displayBill(total);

    return 0;
}
 */

#include <iostream>

double calcTip(double bill, double rate) { return bill * rate; }

double calcTotal(double bill, double tip) { return bill + tip; }

void show(double total) { std::cout << "Total is: " << total << '\n'; }

int main() {
  const double bill{100.0};
  const double tiprate{0.2};

  double total{calcTotal(bill, calcTip(bill, tiprate))};
  show(total);
}
