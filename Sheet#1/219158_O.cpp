#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned short a, b;
    char s;
    std::cin >> a >> s >> b;
    switch (s)
    {
    case '+':
        std::cout << (a + b);
        exit(EXIT_SUCCESS);
    case '-':
        std::cout << (a - b);
        exit(EXIT_SUCCESS);
    case '*':
        std::cout << (a * b);
        exit(EXIT_SUCCESS);
    case '/':
        std::cout << (a / b);
        exit(EXIT_SUCCESS);
    default:
        exit(EXIT_SUCCESS);
    }
    exit(EXIT_SUCCESS);
}