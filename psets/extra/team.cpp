#include <iostream>
using namespace std;

int main() {
  // 1. Declare an integer N and read it from the user.
  int N{};
  cin >> N;

  // 2. Declare an integer variable called 'count' and set it to 0.
  // This will keep track of how many problems they solve.
  int count{ 0 };

  // 3. Create a loop that runs exactly N times.
  // (A 'for' loop or a 'while' loop works perfectly here).
  while ( N > 0 ) {

    // 4. INSIDE THE LOOP: Declare three integers (a, b, c) and read them.
    int a{};
    int b{};
    int c{};
    cin >> a >> b >> b;

    // 5. INSIDE THE LOOP: Use an 'if' statement to check your mathematical
    // rule. (If the sum of a, b, and c is greater than or equal to 2)
    if ( ( a + b + c ) >= 2 ) {
      // 6. INSIDE THE IF STATEMENT: Add 1 to 'count'.
      count++;
    } else {
      N = N - 1;
    }
  }
  // 7. OUTSIDE THE LOOP: Print the final value of 'count'.
  cout << count << '\n';
  return 0;
}
