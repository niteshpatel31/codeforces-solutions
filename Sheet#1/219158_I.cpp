#include <iostream>

int main(int argc, char const *argv[])
{
    long long int a, b;
    std::cin >> a >> b;
    if (a >= b)
    {
        std::cout << "Yes\n";
        exit(EXIT_SUCCESS);
    }
    std::cout << "No\n";
    exit(EXIT_SUCCESS);
}