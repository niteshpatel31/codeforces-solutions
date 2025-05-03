#include <iostream>

int main(int argc, char const *argv[])
{
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if (a + b * c == d || a + b - c == d || a - b * c == d || a - b + c == d || a * b + c == d || a * b - c == d)
        std::cout << "YES";
    else
        std::cout << "NO";
    exit(EXIT_SUCCESS);
}