#include <iostream>

int main()
{
  const int maxStudentPerClass{ 30 };
  const int totalStudents{
      numClassrooms * maxStudentPerClass }; // now obvious what this 30 means
  const int maxNameLength{ 30 };
  setMax(
      maxNameLength ); // now obvioust this 30 is used in a different context

  // badnumbers may also be text too
  printAppwelcome( "MyCalcualtor" ); // bad: app name may be used in other
                                     // places or change in the future

  return 0;
}

// const int maxStudentPerSchool {num classroom * 30};
// setMax(30); // magic number=> bad practice

// Avoid magic numbers in your code (use constexpr variables instead, see
// lesson 5.6 -- Constexpr variables).
