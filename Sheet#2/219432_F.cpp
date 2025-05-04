#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    short x;
    std::cin >> x;
    for (size_t i = 1; i <= 12; i++)
        std::cout << x << " * " << i << " = " << x * i << "\n";
    exit(EXIT_SUCCESS);
}