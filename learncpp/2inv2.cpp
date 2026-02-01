#include <iostream>
using namespace std;

int main()
{
    cout << "Enter an integer: ";
    int x{};
    cin >> x;

    cout << "Enter an integer: ";
    int y{};
    cin >> y;

    cout << x << " + " << y << " is " << x + y << ".\n";
    cout << x << " - " << y << " is " << x - y << ".\n";
    return 0;
}
