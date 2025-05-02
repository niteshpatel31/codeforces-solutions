#include <iostream>

bool is_lucky(long long num, long long digit_a, long long digit_b)
{
    long long sum{0};
    if (num == 0)
        return false;
    while (num > 0)
    {
        long long digit = num % 10;
        sum += digit;
        num /= 10;
    }
    // std::cout << "sum : " << sum << "\n";
    if (sum >= digit_a && sum <= digit_b)
        return true;
    else
        return false;
}

int main()
{
    long long num, digit_a, digit_b, ans{0};
    std::cin >> num >> digit_a >> digit_b;
    for (long long i = 1; i <= num; i++)
    {
        if (is_lucky(i, digit_a, digit_b))
            ans += i;
    }
    std::cout << ans;
    return 0;
}