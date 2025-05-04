#include <iostream>

int main(int argc, char const *argv[])
{
    int num;
    std::cin >> num;
    /*
     for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
                std::cout << i << "\n";
        }
    */

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            std::cout << i << "\n";
    }
    std::cout << num << "\n";

    exit(EXIT_SUCCESS);
}