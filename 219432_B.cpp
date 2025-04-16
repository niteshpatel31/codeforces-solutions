#include <iostream>

int main(int argc, char const *argv[])
{
    long long int num;
    std::cin >> num;
    for (long long int i = 1; i <= num; i++)
    {
        std::cout << i << "\n";
    }
    exit(EXIT_SUCCESS);
}