#include <iostream>
using namespace std;

int add(int a, int b) {
    return a * b;
}

int main() {
   int num = 10;
   int *ptr = &num; // pointer ptr now points to the memmory address of the num
   int value = *ptr;
   cout << value << endl;

   int (*funcpntr) (int, int) = add;
   funcpntr(4, 5);
   cout << add << endl;

    return 0;
}
