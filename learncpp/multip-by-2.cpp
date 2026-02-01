#include <iostream>
using namespace std;

int main()
{
    cout << "Enter an integer: ";
    int num{};
    cin >> num;
    cout << "Double " << num << " is " << num * 2 << '\n';      //use an expression to multiply num * 2 at the point where we are going to print it
    cout << "Tripple " << num << " is "  << num * 3 << '\n';
    return 0;
}
