#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    long double n, k, a;
    std::cin >> n >> k >> a;
    long double calc = (n * k) / a;
    int i = calc;
    long long l = calc;

    if (calc == i)
        std::cout << "int";
    else if (calc == l)
        std::cout << "long long";
    else
        std::cout << "double";
    exit(EXIT_SUCCESS);
}