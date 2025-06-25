#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0}, a{0}, b{0}, c{0};
    std::cin >> test;
    while (test--)
    {
        std::cin >> a >> b >> c;
        std::cout << ((a + b == c || b + c == a || a + c == b) ? "YES" : "NO") << endl;
    }
    exit(EXIT_SUCCESS);
}