#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull n, a, b, max{0}, before{0}; // a[EXIT] , b[ENTER]
    ll p{0};
    std::cin >> n;
    while (n--)
    {
        std::cin >> a >> b;
        p = (before - a) + b;
        if (p > (ll)max)
            max = p;
        before = (before - a) + b;
    }
    std::cout << max;
    exit(EXIT_SUCCESS);
}