#include <iostream>

int main(int argc, char **argv)
{
    int x, y, z;
    std::cin >> x >> y >> z;
    // minimum of three
    if (x < y && x < z)
        std::cout << x;
    else if (y < z)
        std::cout << y;
    else
        std::cout << z;

    std::cout << " ";

    // maximum of three
    if (x > y && x > z)
        std::cout << x;
    else if (y > z)
        std::cout << y;
    else
        std::cout << z;
    exit(EXIT_SUCCESS);
}