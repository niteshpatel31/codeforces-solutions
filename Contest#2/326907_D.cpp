#include <iostream>
#define ull unsigned long long

void _min(ull &a, ull &b)
{
    ull buffer;
    if (a > b)
    {
        buffer = a;
        a = b;
        b = buffer;
    }
}

int main(int argc, char const *argv[])
{
    ull test, start, end, sum{0};
    std::cin >> test;
    while (test--)
    {
        std::cin >> start >> end;
        _min(start, end);
        std::cout << std::fixed << ((end - start + 1) * (start + end) / 2) << "\n";
    }

    exit(EXIT_SUCCESS);
}