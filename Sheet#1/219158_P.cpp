#include <iostream>

int main(int argc, char const *argv[])
{
    char x;
    std::cin >> x;
    std::cout << ((((int)x - 48) % 2 == 0) ? "EVEN" : "ODD");
    exit(EXIT_SUCCESS);
}