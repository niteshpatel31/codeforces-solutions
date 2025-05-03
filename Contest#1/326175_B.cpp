#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned long long a, b, k;
    std::cin >> a >> b >> k;
    if (a % k == 0 && b % k == 0)
        std::cout << "Both";
    else if (a % k == 0 && b % k != 0)
        std::cout << "Memo";
    else if (b % k == 0 && a % k != 0)
        std::cout << "Momo";
    else
        std::cout << "No One";
    exit(EXIT_SUCCESS);
}