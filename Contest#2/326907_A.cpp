#include <iostream>

int main(int argc, char const *argv[])
{
    int a, b;
    std::cin >> a >> b;
    std::cout << ((a - b >= 0) ? (a - b) : 0);
    exit(EXIT_SUCCESS);
}