#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ull k, n, w, sum{0};
    std::cin >> k >> n >> w;
    for (ull i = 1; i <= w; i++)
        sum += k * i;
    std::cout << ((sum < n) ? 0 : sum - n);

    exit(EXIT_SUCCESS);
}