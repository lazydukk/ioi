#include "square.h"

int getSquareSides() { return 4; } // actual definition for gteSquareSides

int getSquarePerimeter(int sideLength) { return sideLength * getSquareSides(); }
