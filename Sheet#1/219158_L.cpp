#include <iostream>

int main(int argc, char const *argv[])
{
    std::string f1, f2, s1, s2;
    std::getline(std::cin, f1, ' ');
    std::getline(std::cin, s1, '\n');
    std::getline(std::cin, f2, ' ');
    std::getline(std::cin, s2, '\n');
    std::cout << ((s1 == s2) ? "ARE Brothers" : "NOT");
    exit(EXIT_SUCCESS);
}