#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    // sets data types for variables
    int a;  // Int ("%d"): 32 Bit integer
    long b; // Long ("%ld"): 64 bit integer
    char c; // Char ("%c"): Character type
    float d; // Float ("%f"): 32 bit real value
    double e; // Double ("%lf"): 64 bit real value
    
    cin >> a >> b >> c >> d >> e;
    
    // printf is used instead of cout to control the output
    printf("%d\n%ld\n%c\n%f\n%lf\n", a, b, c, d, e);
    return 0;
}