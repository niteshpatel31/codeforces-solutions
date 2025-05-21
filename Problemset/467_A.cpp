#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll test{0}, p{0}, q{0}, ans{0};
    std::cin >> test;
    while (test--)
    {
        std::cin >> p >> q;
        if (p < (q - 1))
            ++ans;
    }
    std::cout << ans;
    exit(EXIT_SUCCESS);
}