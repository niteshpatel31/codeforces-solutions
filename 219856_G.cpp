#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    char c = '}';
    while (c != '\n')
    {
        c = std::cin.get();
        if (c == ',')
            std::cout
                << ' ';
        else if (c <= 90 && c >= 65)
            std::cout
                << (char)(c + 32);
        else if (c <= 122 && c >= 97)
            std::cout
                << (char)(c - 32);
        else
        {
        }
    }
    exit(EXIT_SUCCESS);
}