#include <iostream>
using namespace std;

int main() {
  /*
  int x;    // define an integer variable named x (preferred)
  int y, z; // define two integer variables, named y and z
  */

  int width; // define a variable named width
  width = 5; // copy assignment of value 5 into variable width

  cout << width; // prints 5

  width = 7; // change value stored in variable width to 7

  cout << width; // prints 7
  
  int height{10}; // defined the var height and initializes with init value 10
  cout << height;

  return 0;
}
