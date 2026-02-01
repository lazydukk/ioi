#include <iostream>
using namespace std;

void doB()
{
    cout << "In doB() \n";
}

void doA()
{
  cout << "starting doA() \n";
  doB();
  cout << "Ending doA() \n";
}

// definition of main function
int main()
{
    cout << "Starting main() \n";
    doA();
    cout << "Ending main() \n";
    return 0;
}
