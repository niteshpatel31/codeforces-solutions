#include <iostream>

int main(int argc, char **argv)
{
    int x, y;
    char c;
    std::cin >> x >> c >> y;
    switch (c)
    {
    case '<':
        if (x < y)
            std::cout << "Right";
        else
            std::cout << "Wrong";
        break;
    case '>':
        if (x > y)
            std::cout << "Right";
        else
            std::cout << "Wrong";
        break;
    case '=':
        if (x == y)
            std::cout << "Right";
        else
            std::cout << "Wrong";
        break;
    default:
        break;
    }
    exit(EXIT_SUCCESS);
}