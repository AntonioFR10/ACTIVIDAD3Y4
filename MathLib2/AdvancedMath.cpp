#include "AdvancedMath.h"

int AdvancedMath::factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int AdvancedMath::combination(int n, int k) {
    if (k > n) return 0;
    return factorial(n) / (factorial(k) * factorial(n - k));
}
