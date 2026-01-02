#include <iostream>
using namespace std;

int main() {
    int num = 42;
    cout << num << endl;

    float pi = 3.14f;
    cout << pi << endl;

    double pi_high_precision = 3.1415926535;
    cout << pi_high_precision << endl;

    char letter = 'A';
    cout << letter << endl;

    bool is_cpp_great = true;
    cout << is_cpp_great << endl;

    // Derived data types
    int numbers[5] = {1, 2, 3, 4, 5};
    int scored[10] = {100, 77, 69}; // partially initialzied array, others are represented as 0
    // int allZero[0] = {0};

    // Pointers
    int numb = 77;
    int* pNum = &numb; // stores the memory address of the variable

    // refrences
    int& numRef = numb; // creates and alias for numb called numRef

    cout << pNum << endl << numRef << endl;

    // User defined data types
    // structures
    struct person {
        string name;
        int age;
        float height;
    };
    person p1 = {"Brian", 18, 5.7};

    // classes
    class persona {
        public:
        string name;
        int age;

        void printInfo() {
            cout << "Name: " << name << ", age: " << age << endl;
        };
    };
    persona p2;
    p2.name = "Mathew";
    p2.age = 18;

    // Unions
    union data {
        int number;
        char lett;
        float decimal;
    };
    data myData;
    myData.number = 42;

    return 0;
}
