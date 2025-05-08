#include <iostream>
#define ull unsigned long long

ull m_max(ull a, ull b)
{
    if (a > b)
        return a;
    return b;
}

int main(int argc, char const *argv[])
{
    ull test, num, max{0}, _max{0};
    std::cin >> test;
    while (test--)
    {
        std::cin >> num;
        while (num % 2 == 0 && num >= 1)
        {
            if (num > 4 && num % 4 != 0)
            {
                max++;
                break;
            }
            num /= 2;
            max++;
            // std::cout << _max << std::endl;
        }
        _max = m_max(max, _max);
        max = 0;
    }
    std::cout << _max;
    exit(EXIT_SUCCESS);
}