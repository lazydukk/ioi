#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b;
    b = a << 4;
/*
    here what it does is -> b = 10 * 2^4
    which is b = 160
*/
    int c = 5;
    int d;
    d = c >> 4;
    cout << b << endl;
    cout << d << endl;

    return 0;
}
