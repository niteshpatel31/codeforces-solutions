#include <iostream>

#define ull unsigned long long
#define endl "\n"

ull ceil(double num)
{
    ull buffer = num;
    if ((double)buffer == (double)num && num != 0)
        return buffer;
    return ++buffer;
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    double n, m, a;
    ull sum{0};
    std::cin >> n >> m >> a;

    sum = ceil(n / a) * ceil(m / a);
    std::cout << sum << endl;

    exit(EXIT_SUCCESS);
}
