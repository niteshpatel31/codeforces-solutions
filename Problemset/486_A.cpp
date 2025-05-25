#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long x, res = 0;
    std::cin >> x;
    if (x % 2 == 0)
        res = x / 2;
    else
        res = ((x + 1) / 2) * (-1);
    std::cout << res;
    exit(EXIT_SUCCESS);
}