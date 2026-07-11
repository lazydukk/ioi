#include "io.h"

int main() {
  int x{ readNumber() };
  int y{ readNumber() };
  // int result{ calcualte( x, y ) };
  // writeAnswer( result );
  writeAnswer( x + y ); // using operator+ to pass
                        // the sum of x and y to writeAnswer()
  return 0;
}
