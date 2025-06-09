#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0};
    char a, b, c, d, e, f;
    std::cin >> test;
    while (test--)
    {
        std::cin >> a >> b >> c >> d >> e >> f;
        std::cout << ((a + b + c == d + e + f) ? "YES" : "NO") << endl;
    }
    exit(EXIT_SUCCESS);
}