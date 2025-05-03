#include <iostream>

int main(int argc, char const *argv[])
{
    long long int x, y, z;
    std::cin >> x >> y >> z;
    if (x <= y && x <= z)
    {
        if (y < z)
            std::cout << x << "\n"
                      << y << "\n"
                      << z << "\n";
        else
            std::cout << x << "\n"
                      << z << "\n"
                      << y << "\n";
    }
    else if (y <= x && y <= z)
    {
        if (x < z)
            std::cout << y << "\n"
                      << x << "\n"
                      << z << "\n";
        else
            std::cout << y << "\n"
                      << z << "\n"
                      << x << "\n";
    }
    else
    {
        if (y <= x)
            std::cout << z << "\n"
                      << y << "\n"
                      << x << "\n";
        else
            std::cout << z << "\n"
                      << x << "\n"
                      << y << "\n";
    }

    std::cout << "\n"
              << x << "\n"
              << y << "\n"
              << z << "\n";
    exit(EXIT_SUCCESS);
}