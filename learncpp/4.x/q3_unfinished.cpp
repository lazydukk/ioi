// Extra credit: This one is a little more challenging.
// Write a short program to simulate a ball being dropped off of a tower. To
// start, the user should be asked for the height of the tower in meters. Assume
// normal gravity (9.8 m/s2), and that the ball has no initial velocity (the
// ball is not moving to start). Have the program output the height of the ball
// above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go
// underneath the ground (height 0). Use a function to calculate the height of
// the ball after x seconds. The function can calculate how far the ball has
// fallen after x seconds using the following formula: distance fallen =
// gravity_constant * x_seconds2 / 2

#include <iostream>

int getTowerHeight() {
  std::cout << "Enter the height of the tower in meters: ";
  int x{};
  std::cin >> x;
  return x;
}

double distanceCal( int towerHeight, int x_second ) {
  const double g_const{ 9.8 };
  double distance{};
  distance = (g_const * x_second) / 2;
  return distance;
}

int main() {
  int towerHeight{ getTowerHeight() };
  int x_seocnd{};



  //distanceCal( towerHeight, x_seocnd );
}
