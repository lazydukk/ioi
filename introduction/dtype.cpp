#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // read data type
    char ch;
    double d;
    scanf("%c %lf", &ch, &d);
    // print data type
    ch = 'X';
    d = 123.123456;
    printf("%c %lf", ch, d);
    return 0;
}
