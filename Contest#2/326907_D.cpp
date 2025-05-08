#include <iostream>
#define ull unsigned long long

int main(int argc, char const *argv[])
{
    ull test, start, end, sum{0};
    std::cin >> test;
    while (test--)
    {
        std::cin >> start >> end;
        std::cout << ((end - start + 1) * (start + end) / 2) << "\n";
    }

    exit(EXIT_SUCCESS);
}