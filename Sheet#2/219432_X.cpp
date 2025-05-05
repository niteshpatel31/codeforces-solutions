#include <iostream>
#include <cmath>

unsigned int power(unsigned int num, unsigned int p)
{
    unsigned int ans{1}, res{1};
    for (int i = 0; i < p; i++)
    {
        ans *= num;
    }
    return ans;
}

unsigned int bin_to_dec(unsigned short arr)
{
    unsigned int ans{0};
    for (int i = 0, j = arr - 1; i < arr; i++, j--)
    {
        ans += power(2, j);
    }
    return ans;
}

unsigned short num_of_ones(unsigned int &num)
{
    unsigned short ones{0};
    while (num)
    {
        if (num % 2 != 0)
            ones++;
        num /= 2;
    }
    return ones;
}

int main(int argc, char const *argv[])
{
    unsigned short test;
    std::cin >> test;
    unsigned int num;
    while (test--)
    {
        std::cin >> num;
        std::cout << bin_to_dec(num_of_ones(num)) << "\n";
        // std::cout << b(num) << "\n";
    }
    exit(EXIT_SUCCESS);
}