#include "backend.h"
#include <iostream>

int my_add(int a, int b) {
    std::cout << "IN C++ adding" << std::endl;
    return a + b;
}

int my_sub(int a, int b) {
    std::cout << "IN C++ subtracting" << std::endl;
    return a - b;
}

int my_mul(int a, int b) {
    std::cout << "IN C++ multiplying" << std::endl;
    return a*b;
}
