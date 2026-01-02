#include <iostream>
using namespace std;

int main() {
    int a = 5, b =10;
    // Logical Operators
    // AND
    if (a > 0 && b > 0) {
        cout << "Both are postive\n";
    }
    // OR
    if (a > 0 || b > 0) {
        cout << "At least one of them is postive\n";
    }
    // NOT
    if (!(a < 0)) {
        cout << "A is not negative\n";
    }

    int m = 3, n = 4, l = -10;
    if (m > 0 && (n > 0 || l > 0) ) {
        cout << "At least two values are postive\n";
    }
}
