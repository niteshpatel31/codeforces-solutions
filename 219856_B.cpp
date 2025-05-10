#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::string str;
    std::getline(std::cin, str, '\\');
    std::cout << str;
    exit(EXIT_SUCCESS);
}