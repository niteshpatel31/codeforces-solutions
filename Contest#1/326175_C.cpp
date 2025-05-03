#include <iostream>

int main(int argc, char const *argv[])
{
    char c;
    std::cin >> c;
    std::cout << (char)((c == 'z' || c == 'Z') ? c - 25 : c + 1);
    exit(EXIT_SUCCESS);
}