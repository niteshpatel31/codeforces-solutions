#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned int n;
    std::cin >> n;
    for (unsigned int i = 2; i <= n + 1; i++)
    {
        for (unsigned int j = n - i + 1; j > 0; j--)
        {
            std::cout << " ";
        }
        for (unsigned int j = 1; j < i; j++)
        {
            std::cout << "*";
        }
        for (unsigned int j = 1; j < i - 1; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    exit(EXIT_SUCCESS);
}