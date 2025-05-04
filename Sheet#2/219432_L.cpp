#include <iostream>

auto gcd(unsigned short x, unsigned short y)
{
    auto temp = y;
    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main(int argc, char const *argv[])
{
    unsigned short x, y;
    std::cin >> x >> y;
    std::cout << gcd(x, y);
    exit(EXIT_SUCCESS);
}