#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
template <typename T>
T max(T &a, T &b, T &c) { return ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)); }

template <typename T>
T min(T &a, T &b, T &c) { return ((a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c)); }

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0}, a, b, c;
    std::cin >> test;
    while (test--)
    {
        std::cin >> a >> b >> c;
        if (a != min(a, b, c) && a != max(a, b, c))
            std::cout << a;
        else if (b != min(a, b, c) && b != max(a, b, c))
            std::cout << b;
        else
            std::cout << c;
        std::cout << endl;
    }
    exit(EXIT_SUCCESS);
}