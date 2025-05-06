#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned short num;
    std::cin >> num;
    for (short i = 1; i <= num; i++)
    {
        for (short j = 1; j <= num; j++)
        {
            if (j == i)
            {
                if ((num / 2) + 1 == i && (num / 2) + 1 == j)
                    std::cout << 'X';
                else
                    std::cout << '\\';
            }
            else if (j == num - i + 1)
                std::cout << "/";
            else
                std::cout << '*';
        }
        std::cout << "\n";
    }
    exit(EXIT_SUCCESS);
}