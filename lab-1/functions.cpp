#include <iostream>
using namespace std;

// creating a function
int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

// prototype function
int multiplyNumbers(int x, int y);

int main() {
    int num1 = 5, num2 = 10;
    int result = addNumbers(num1, num2);
    cout << "result is: " << result << endl;
    int prod = multiplyNumbers(num1, num2);
    cout << "result is: " << prod << endl;
    return 0;
}

// function definition from the prototype
int multiplyNumbers(int x, int y) {
    int product = x * y;
    return product;
}
