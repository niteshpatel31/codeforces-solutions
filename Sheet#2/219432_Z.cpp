#include <iostream>

unsigned long long three_num(unsigned short s, unsigned short k)
{
    unsigned long long counter{0};
    for (unsigned int i = 0; i <= k && i <= s; i++)
    {
        for (unsigned int j = 0; j <= k && j <= s; j++)
        {
            if ((s - j - i) <= k && (s - j - i) <= s)
                counter++;
        }
    }
    return counter;
}

int main(int argc, char const *argv[])
{
    unsigned short s, k;
    std::cin >> k >> s;
    std::cout << three_num(s, k);
    exit(EXIT_SUCCESS);
}
