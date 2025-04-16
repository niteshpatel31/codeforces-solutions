#include <iostream>
#include <iomanip>
#include <math.h>

constexpr double PIE = 3.141592653f;

int main(int argc, char **argv)
{
    float radius;
    std::cin >> radius;
    double r_sqr = radius * radius;
    std::cout << std::setprecision(9) << PIE * (r_sqr) << "\n"; // Area = π * R2.
    // print answer till 9 digit precision
    return EXIT_SUCCESS;
}