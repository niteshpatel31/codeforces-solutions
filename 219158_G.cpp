#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned long long int num;
    std::cin >> num;
    std::cout << ((unsigned long long int)(num * (num + 1) / 2)) << "\n"; // Arithmetic Progression n(n+1)/2
    exit(EXIT_SUCCESS);
}