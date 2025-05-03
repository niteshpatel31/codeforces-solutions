#include <iostream>

int main(int argc, char const *argv[])
{
    long long a, b;
    std::cin >> a >> b;
    if (a - b == 1 || b - a == 1 ||( a == b && (a != 0 && b != 0)))
        std::cout << "YES";
    else
        std::cout << "NO";
    exit(EXIT_SUCCESS);
}