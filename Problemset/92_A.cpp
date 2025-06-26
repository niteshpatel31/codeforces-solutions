#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll n, m, remaining;
    std::cin >> n >> m;
    remaining = m % (n * (n + 1) / 2);
    for (ull i = 1; i <= n; i++)
    {
        if (remaining < i)
        {
            std::cout << remaining;
            exit(EXIT_SUCCESS);
        }
        remaining -= i;
    }
    exit(EXIT_SUCCESS);
}