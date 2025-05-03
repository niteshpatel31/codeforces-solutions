#include <iostream>

unsigned long long max(unsigned long long a, unsigned long long b)
{
    if (a > b)
        return a;
    return b;
}
unsigned long long min(unsigned long long a, unsigned long long b)
{
    if (a < b)
        return a;
    return b;
}

int main(int argc, char const *argv[])
{
    unsigned long long l1, r1, l2, r2, start, end;
    std::cin >> l1 >> r1 >> l2 >> r2;

    if (l2 <= r1 && l1 <= r2)
    {
        start = max(l1, l2);
        end = min(r1, r2);
        if (start <= end)
            std::cout << start << " " << end << std::endl;
        else
            std::cout << "-1" << std::endl;
    }
    else
        std::cout << "-1" << std::endl;
    exit(EXIT_SUCCESS);
}