#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string str;
    std::cin >> str;
    ll upper{0}, lower{0};
    for (ll i = 0; i < str.size(); i++)
    {
        if (str[i] >= 65 && str[i] <= 95)
            upper++;
        else
            lower++;
    }
    // (upper > lower) ? lower = upper - lower : lower = lower - upper;
    if (upper <= lower)
    {
        for (ll i = 0; i < str.size(); i++)
            std::cout << (char)((str[i] >= 65 && str[i] <= 90) ? str[i] + 32 : str[i]);
    }
    else
    {
        for (ll i = 0; i < str.size(); i++)
            std::cout << (char)((str[i] >= 97 && str[i] <= 123) ? str[i] - 32 : str[i]);
    }
    exit(EXIT_SUCCESS);
}