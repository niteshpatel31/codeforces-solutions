#include <iostream>

int main(int argc, char const *argv[])
{
    int num{0};
    std::cin >> num;
    for (int i = num; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    exit(EXIT_SUCCESS);
}