#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned long long n, m;
    std::cin >> n >> m;
    std::cout << (n % 10 + m % 10);
    exit(EXIT_SUCCESS);
}