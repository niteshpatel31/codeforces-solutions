#include <iostream>

int main(int argc, char const *argv[])
{
    long long int test, ans{0}, num;
    std::cin >> test;
    while (test--)
    {
        std::cin >> num;
        ans += num;
    }
    std::cout << std::abs(ans);
    exit(EXIT_SUCCESS);
}