#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0}, front{0}, a, b, c, d;
    std::cin >> test;
    while (test--)
    {
        std::cin >> a >> b >> c >> d;
        if (a < b)
            front++;
        if (a < c)
            front++;
        if (a < d)
            front++;
        std::cout << front << endl;
        front = 0;
    }
    exit(EXIT_SUCCESS);
}