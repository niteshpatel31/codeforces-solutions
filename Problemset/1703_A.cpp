#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0};
    char a, b, c;
    std::cin >> test;
    while (test--)
    {
        std::cin >> a >> b >> c;
        std::cout << (((a == 'y' || a == 'Y') && (b == 'e' || b == 'E') && (c == 's' || c == 'S')) ? "YES" : "NO") << endl;
    }
    exit(EXIT_SUCCESS);
}