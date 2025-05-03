#include <iostream>

int main(int argc, char const *argv[])
{
    long long int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    int sum = (a * b * c * d);
    auto x1 = (sum % 10);
    auto x2 = sum % 100 / 10;
    std::cout << x2 << x1 << std::endl;
    exit(EXIT_SUCCESS);
}
