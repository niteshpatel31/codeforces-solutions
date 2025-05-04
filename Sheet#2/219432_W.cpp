#include <iostream>

int main()
{
    unsigned int n;
    std::cin >> n;

    // Upper half including middle
    for (unsigned int i = 1; i <= n + 1; ++i)
    {
        // Print spaces
        for (unsigned int j = 0; j < n + 1 - i; ++j)
        {
            std::cout << ' ';
        }
        // Print asterisks
        for (unsigned int j = 0; j < (2 * i - 1); ++j)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    // Lower half
    for (unsigned int i = n; i >= 1; --i)
    {
        // Print spaces
        for (unsigned int j = 0; j < n + 1 - i; ++j)
        {
            std::cout << ' ';
        }
        // Print asterisks
        for (unsigned int j = 0; j < (2 * i - 1); ++j)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    return 0;
}