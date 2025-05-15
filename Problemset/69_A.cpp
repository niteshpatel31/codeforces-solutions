#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll test{0}, _x{0}, _y{0}, _z{0}, x{0}, y{0}, z{0};
    std::cin >> test;
    while (test--)
    {
        std::cin >> x >> y >> z;
        _x += x;
        _y += y;
        _z += z;
    }
    std::cout << ((_x == 0 && _y == 0 && _z == 0) ? "YES" : "NO");
    exit(EXIT_SUCCESS);
}