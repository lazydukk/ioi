#include <iostream>
using namespace std;

int main() {
    // if-else
    int age = 18;
    if (age >= 18) {
        cout << "You can vote" << endl;
    } else {
        cout << "You can't vote" << endl;
    }

    // switch
    int day = 1;
    switch (day) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuseday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        default: cout << "invalid day"; // result -> monday when day = 1;
    }

    // goto
    int x  = 5;
    if (x == 5)
        goto label; // if the condition is met, makes the program to jump to the `label`
    cout << "this line will be skipped" << endl;
label:
    cout << "Jumped to label!" << endl;
    return 0;
}
