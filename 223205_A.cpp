#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main(int argc, char const *argv[])
{
    int x, y;
    std::cin >> x >> y;
    std::cout << add(x, y);
    exit(EXIT_SUCCESS);
}