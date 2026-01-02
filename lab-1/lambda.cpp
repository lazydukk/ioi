#include <iostream>
using namespace std;

int main() {
   // Lambda function with no capture, parameters, or return type.
   auto printHello = [] () {
       cout << "Hello wordl \n";
   };
   printHello();

   // lambda func with parameters
   auto add = [](int a, int b){
       return a + b;
   };
   int result = add(3, 7); //return 10

   // lamba func with capture-by-value
   int multiplier = 3;
   auto times = [multiplier](int a) {
       return a * multiplier;
   };
   int result2 = times(10); // returns 30

   // lambda function with capture-by-referance
   int expiresInDays = 45;
   auto updateDays = [&expiresInDays](int newDays) {
       expiresInDays = newDays;
   };
   updateDays(30); // expires in 30 days

   cout << result << endl;
   cout << result2 << endl;
   return 0;
}
