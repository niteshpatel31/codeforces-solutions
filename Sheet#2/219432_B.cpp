#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned short num;
    std::cin >> num;
    if (num == 1 || num == 0)

        std::cout << "-1\n";

    for (short i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            std::cout << i << "\n";
    }
    exit(EXIT_SUCCESS);
}