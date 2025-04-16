#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned long long int a, b;
    std::cin >> a >> b;
    if (a % b == 0 || b % a == 0)
        std::cout << "Multiples\n";
    else
        std::cout << "No Multiples\n";
    exit(EXIT_SUCCESS);
}