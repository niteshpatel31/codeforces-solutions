#include <iostream>

int main(int argc, char const *argv[])
{
    int64_t x, y;
    std::cin >> x >> y;
    std::cout << x << " + " << y << " = " << (x + y) << "\n";
    std::cout << x << " * " << y << " = " << (x * y) << "\n";
    std::cout << x << " - " << y << " = " << (x - y) << "\n";
    exit(EXIT_SUCCESS);
}