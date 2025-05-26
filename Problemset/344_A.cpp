#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0}, magnet{0};
    char l, r, prev{'x'};
    std::cin >> test;
    while (test--)
    {
        std::cin >> l >> r;
        if (l == prev)
            magnet++;
        prev = r;
    }
    std::cout << ++magnet;
    exit(EXIT_SUCCESS);
}