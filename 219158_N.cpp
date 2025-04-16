#include <iostream>

int main(int argc, char const *argv[])
{
    char x;
    std::cin >> x;
    if (x <= 123 && x >= 97)
    {
        std::cout << char(x - 32) << "\n";
        exit(EXIT_SUCCESS);
    }
    std::cout << char(x + 32) << "\n";
    exit(EXIT_SUCCESS);
}