#include <iostream>

bool isLucky(long long num)
{
    if (num == 0)
        return false;
    while (num > 0)
    {
        long long digit = num % 10;
        if (digit != 4 && digit != 7)
            return false;
        num /= 10;
    }
    return true;
}

void generateLuckyNumbers(long long a, long long b)
{
    bool found = false;
    for (long long i = 1; i <= b; i++)
    {
        if (i >= a && isLucky(i))
        {
            std::cout << i << " ";
            found = true;
        }
    }
    if (!found)
    {
        std::cout << -1;
    }
}

int main()
{
    long long a, b;
    std::cin >> a >> b;
    generateLuckyNumbers(a, b);
    std::cout << std::endl;
    return 0;
}