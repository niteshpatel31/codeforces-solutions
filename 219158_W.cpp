#include <iostream>

int main(int argc, char const *argv[])
{
    long long int x, y, z;
    char c, e;
    std::cin >> x >> c >> y >> e >> z;
    switch (c)
    {
    case '+':
        if (x + y == z)
            std::cout << "Yes";
        else
            std::cout << x + y;
        break;
    case '-':
        if (x - y == z)
            std::cout << "Yes";
        else
            std::cout << x - y;
        break;
    case '*':
        if (x * y == z)
            std::cout << "Yes";
        else
            std::cout << x * y;
        break;

    default:
        break;
    }
    exit(EXIT_SUCCESS);
}