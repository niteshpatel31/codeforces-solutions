#include <iostream>
#include <climits>

long long _min(long long a, long long b)
{
    if (a < b)
        return a;
    return b;
}

int main(int argc, char const *argv[])
{
    long long size, k;
    std::cin >> size >> k;
    long long counter{0}, num, min{LONG_MAX};
    while (size--)
    {
        std::cin >> num;
        min = _min(num, min);
        if (size == 0 || ++counter == k)
        {
            std::cout << min << " ";
            min = LONG_MAX;
            counter = 0;
        }
    }
    exit(EXIT_SUCCESS);
}