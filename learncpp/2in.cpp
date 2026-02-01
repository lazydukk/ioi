#include <iostream>
using namespace std;

// Write a program that asks the user to enter a number, and then enter a second number. The program should tell the user what the result of adding and subtracting the two numbers is.

int main()
{
    cout << "Enter two numbers seperated by a space: ";
    int x{};
    int y{};
    cin >> x >> y;
    cout << "Addition of: " << x << " and " << y << " is: " << x + y << '\n';
    cout << "Subtraction of: " << x << " and " << y << " is: " << x - y << '\n';
    return 0;
}
