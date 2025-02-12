---
tags:
  - ioi/basic/programming
  - programming/cpp
---
# Basics

### 1. Variables
1. `int`: integers (whole numbers)
```cpp
int x;
x = 5;
```
or
```cpp
int x = 5
```

2. `double`: decimals
```cpp
double gpa = 3.9;
double temp = 27.6;
```

3. `char`: single character (only)
```cpp
char grade = 'A';
char initial = 'D';
```

4. `bool`: booleans (true or false)
```cpp
bool student = true;
bool power = false;
```

5. `std::string`: string (objects that represents a sequence of text)
```cpp
std::string output = "Hello";
std:: string name = "John";
```

6. `const`: constant variables (after assigning it cannot be changed later / in other words: read only)
	- As a rule normally when const is used, that var name is capitalized
```cpp
const double PI = 3.14;
const int WIDTH = 1920;
const int HEIGHT = 1080;
```

#### 2. Namespaces
- Provides a solution for preventing name conflicts in large project. 
- Each entity needs a unique name.
- A namespace allows for identically named entities as long as namespaces are different.
```cpp
namespace first{
	int x = 1;
}
namespace second{
	int x = 2;
}

int main() {
	using namespace second; // defaults to using second namespace;
	int x = 0;
	std::cout << first::x; // uses the var from first namespace
}
```
- `using namespace std;` means that it's using the standard namespace. (Which may leads to conflicts).
	- Another way to do this (to only some of the variables) is by;
	```cpp
	using std::cout;
	using std::str;
	string name = "Bob";
```

### 3. Typedef
- Reserved keyword used to create an additional name(alias) for another data type.
- New identifier for an existing type helps with readability and reduces typos.
- When using typedefs, `#include <vector>` header file must be imported.

>[!Tip]
>Here, "std::vector<std::pair<std::string, int>>" is the data type that we are asigning a new name, and the name asigned is "pairlist_t". "t" is used so that the programmer knows it's a data type.

```cpp
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
```
 
 >[!important]
>Use when there is a clear benefit replaced with `using` (works better w/ templates)

```cpp
using text_t = std::string;
using number_t = int;
```

### 4. Arithmetic operators
- Return the result of a specific arithmetic operation (+ - * / )
```cpp
int students = 9;

// Addition
students = students + 7; //or
students += 7;
// Increment operator
students++;

// Substraction
students = students - 2;
students -= 2;
// Decrement operator 
sutdents--;

// Multiplication 
students = students * 2;
students *= 2;

// Divition
students = students / 2;
students /= 2;

// Modulus operator 
int remainder = students % 3;
```

- Order how the arithmetic operations are done:
	1. Parenthesis
	2. Multiplication & Division 
	3. Addition & Subtraction

### 5. Type Conversions
- Type conversion is used to convert one data type to another data type.
    - Implicit => Automatic
    - Explicit => Precede value with new data type (int)
```cpp
double x = (int) 3.14; // Explicit
char y = 100; // Implicit (reads in as a ASCII value and outputs the corresponding letter)
std::cout << (char) 100; // Same as above 
```
```cpp
int correct = 8;
int questions = 10;
double score = correct/(double)questions * 100;
std::cout << score << "%" << '\n';
```
>[!summary]
>When 8 is divided by 10; It equals to 0.8;
>But as questions is an integer, it truncates the 8 from 0.8 and only gives 0; Thus resulting `0%`. By using type conversion to convert question var's data type from int to double in the arrithmetic operation it retains the decimal point. Thus gives the correct answer `80%`

### 6. User Input
- `<<` => Insertion operator
- `>>` => (Extraction operator
- `cout` => outputs a result
- `cin` => takes and input   
```cpp
std::cout << "What's your name?: ";
std::cin >> name;
```
- To read a string that could contain strings, can use `getline` function.
```cpp
std::cout << "What's your name?: ";
std::getline(std::cin, name);
std::cout << "What is your age?: ";
std::cin >> age;
std::cout << "What is your school?: ";
std::cin.ignore(); // Is used to discard the leftover newline character in the input buffer after reading an integer with std::cin >> age;, ensuring that the subsequent std::getline call works correctly.
std::getline(std::cin, school);
```