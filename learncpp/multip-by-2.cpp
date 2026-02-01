#include <iostream>
using namespace std;

int main()
{
    cout << "Enter an integer: ";
    int num{};
    cin >> num;
    cout << "Double that number is: " << num * 2 << '\n'; //use an expression to multiply num * 2 at the point where we are going to print it
    return 0;
}
