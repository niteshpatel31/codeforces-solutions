#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int test, num;
    std::cin >> test;
    while (test--)
    {
        std::cin >> num;
        if (num < 0)
            std::cout << "2 ";
        else if (num == 0)
            std::cout << "0 ";
        else
            std::cout << "1 ";
    }
    exit(EXIT_SUCCESS);
}