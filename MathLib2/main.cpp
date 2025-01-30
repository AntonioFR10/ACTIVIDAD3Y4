#include <iostream>
#include "BasicMath.h"
#include "AdvancedMath.h"
#include <cmath>

int main() {
    std::cout << "Suma: " << BasicMath::add(5, 3) << std::endl;
    std::cout << "Factorial de 5: " << AdvancedMath::factorial(5) << std::endl;
    std::cout << "Raíz cuadrada de 25: " << std::sqrt(25) << std::endl;
    return 0;
}
