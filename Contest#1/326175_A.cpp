#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    float x, p;
    std::cin >> x >> p;
    std::cout << std::setprecision(2) << std::fixed << (float)(p / (1 - x / 100));
    exit(EXIT_SUCCESS);
}