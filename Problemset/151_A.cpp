#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"

ull min(ull a, ull b, ull c)
{
    return (a < b && a < c) ? a : ((b < c) ? b : c);
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull n{0}, k{0}, l{0}, c{0}, d{0}, p{0}, nl{0}, np{0};
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    std::cout << min((k * l) / nl, c * d, p / np) / n;
    exit(EXIT_SUCCESS);
}