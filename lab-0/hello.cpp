#include <iostream> // this is the most basic header file
#include <vector>

typedef std::string text_t;
typedef int number_t;
// main function
int main()
{
    // variables
    int x;
    x = 5;
    int y = 6;
    int sum = x + y;

    double gpa = 3.9;
    double temp = 27.6;
    std::string name = "Bob";
    std::cout << "Hello " << name << '\n';

    text_t say_it = "Hello from typedef";
    number_t numb_it = 69;
    std::cout << say_it << '\n';
    std::cout << numb_it << '\n';

    int students = 18;
    // students = students + 1;
    students += 1;
    students++; // only adds one to the var
    std::cout << "Number of T students " << students << '\n';
    int remainder = students % 3; // remainder operator
    std::cout << "Students left after dividing into groups of 3 = " << remainder << '\n';

    int mod_op = 2 % 2;
    std::cout << "Remainder = " << mod_op << '\n';
    return 0;
}