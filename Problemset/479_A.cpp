#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"

ull max(ull a, ull b, ull c, ull d)
{
    if (a >= b && a >= c && a >= d)
        return a;
    else if (b >= a && b >= c && b >= d)
        return b;
    else if (c >= a && b && c >= b && c >= d)
        return c;
    else
        return d;
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull a, b, c;
    std::cin >> a >> b >> c;
    std::cout << std::max(max(max(a + b * c, a + b + c, a * b + c, a * b * c), (a + b) * c, a + (b * c), a * (b + c)), (a * b) + c);
    exit(EXIT_SUCCESS);
}