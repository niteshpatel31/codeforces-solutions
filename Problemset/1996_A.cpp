#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll test{0}, l, r, x{0}, y{0};
    std::cin >> test;
    while (test--)
    {
        std::cin >> l >> r;
        x = l;
        y = x * 2;
        if (y - l > r)
            std::cout << "-1" << endl;
        else
            std::cout << x << " " << y << endl;
    }
    exit(EXIT_SUCCESS);
}