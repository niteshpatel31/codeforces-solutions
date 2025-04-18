#include <iostream>

int main(int argc, char const *argv[])
{
    int num;
    std::cin >> num;
    for (int i = 0; i <= num; i++)
    {
        if (num % i == 0)
            std::cout << i << "\n";
    }

    exit(EXIT_SUCCESS);
}