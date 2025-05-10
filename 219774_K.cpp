#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    unsigned int test;
    unsigned long long sum{0};
    char c;
    std::cin >> test;
    while (test--)
    {
        std::cin >> c;
        sum += c - 48;
    }
    std::cout << sum;
    exit(EXIT_SUCCESS);
}