#include <iostream>

int main()
{
    std::string name;
    int age;
    std::string school;

    std::cout << "What's your name?: ";
    std::getline(std::cin, name);

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "What is your school?: ";

    std::cin.ignore(); // Is used to discard the leftover newline character in the input buffer after reading an integer with std::cin >> age;, ensuring that the subsequent std::getline call works correctly.
    std::getline(std::cin, school);

    std::cout << "Hello " << name << ". You are " << age << " years old" << '\n';
    std::cout << "School: " << school << '\n';
    return 0;
}