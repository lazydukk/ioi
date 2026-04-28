#include <iostream>

double getTowerHeight() {
  std::cout << "Enter the height of the tower height in meters: ";
  double towerHeight{};
  std::cin >> towerHeight;
  return towerHeight;
}

double calculateHeight( double towerHeight, int seconds ) {
  double gravity{ 9.8 };
  // Using formula: s = (u * t) + (a * t^2) / 2
  // here u (initial velocity) = 0, so (u * t) = 0
  double fallDistance{ gravity * ( seconds * seconds ) / 2.0 };
  double ballHeight{ towerHeight - fallDistance };

  if ( ballHeight < 0.0 )
    return 0.0;

  return ballHeight;
}

void printBallHeight( double ballHeight, int seconds ) {
  if ( ballHeight > 0.0 )
    std::cout << "At " << seconds
              << " seconds, the ball is at height: " << ballHeight
              << " meters\n";
  else
    std::cout << "At " << seconds << " seconds, the ball is on the ground\n";
}

void calculateAndPrintBallHeight( double towerHeight, int seconds ) {
  double ballHeight{ calculateHeight( towerHeight, seconds ) };
  printBallHeight( ballHeight, seconds );
}

int main() {
  double towerHeight{ getTowerHeight() };
  calculateAndPrintBallHeight( towerHeight, 0 );
  calculateAndPrintBallHeight( towerHeight, 2 );
  calculateAndPrintBallHeight( towerHeight, 3 );
  calculateAndPrintBallHeight( towerHeight, 4 );
  calculateAndPrintBallHeight( towerHeight, 5 );
  return 0;
}
