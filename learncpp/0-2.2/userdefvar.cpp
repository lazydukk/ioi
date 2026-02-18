#include <iostream>
using namespace std;

// user defined-fucntion -> doPrint()
void doPrint()
{
    cout << "In doPrint() \n";
}

// definition of user defined function main()
int main()
{
  cout << "Starting main() \n";
  doPrint();                        // calls back to the function doPrint()
  cout << "Ending main() \n";       // then exectued after doPrint() function
}
