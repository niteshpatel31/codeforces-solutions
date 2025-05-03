#include <iostream>

int main(int argc, char const *argv[])
{
    char x;
    std::cin >> x;
    if (x >= 48 && x <= 58)
        std::cout << "IS DIGIT\n";
    else if (x >= 65 && x <= 91)
        std::cout << "ALPHA\nIS CAPITAL\n";
    else if (x >= 97 && x <= 123)
        std::cout << "ALPHA\nIS SMALL\n";
    exit(EXIT_SUCCESS);
}