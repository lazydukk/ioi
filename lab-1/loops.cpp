#include <iostream>
using namespace std;

int main() {
    //for loop
    // counts untill i = 4
    for (int i = 0; i < 5; i++) {
        cout << "for: " << i << "\n";
    }

    // while loop
    int a = 0;
    while (a < 5) {
        cout << "while: " << a << "\n";
        a++;
    }

    // do-while loop
    // body is atleast executed even while the condition is false
    int b = 0;
    do {
        cout << "do-while: " << b << "\n";
        b++;
    }while (b < 5);
    
    return 0;
}
