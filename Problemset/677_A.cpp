#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull n, h, p, width{0};
    std::cin >> n >> h;
    while (n--)
    {
        std::cin >> p;
        if (p > h)
            width += 2;
        else
            width += 1;
    }
    std::cout << width;
    exit(EXIT_SUCCESS);
}