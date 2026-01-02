#include <iostream>
#include <bitset>
using namespace std;

int main() {
    /*
    5 = 0101
    3 = 0011
    */
    int andop = 5 & 3; // (0101 & 0011 -> 0001 = 1)
    int orop = 5 | 3; // (0101 | 0011 -> 0111 = 7)
    cout << andop << endl;
    cout << orop << endl;
    cout << bitset<4>(andop) << endl;
    cout << bitset<4>(orop) << endl;

    // as a mask
    int a = 0b10011010;
    int m = 0b00010000;
    int mask = a & m;
    cout << bitset<8>(mask) << endl;

    int b = 0b0101;
    int c = 0b10110;
    c <<= 4;
    int shift = c | b;
    cout << bitset<9>(shift) << endl;

    // NOT
    int d = 0b0100;
    int e =~ d;
    cout << bitset<4>(e) << endl;

    // OR
    int f = 0b0011;
    int g = 0b0101;
    int h = f ^ g ; // 0110
    int i = f ^ f; // sets the variable to 0
    cout << bitset<4>(h) << endl;
    cout << bitset<4>(i) << endl;
    return 0;
}
