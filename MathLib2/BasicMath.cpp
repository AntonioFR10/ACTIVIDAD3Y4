#include "BasicMath.h"

double BasicMath::add(double a, double b) { return a + b; }
double BasicMath::subtract(double a, double b) { return a - b; }
double BasicMath::multiply(double a, double b) { return a * b; }
double BasicMath::divide(double a, double b) { return b != 0 ? a / b : 0; }
