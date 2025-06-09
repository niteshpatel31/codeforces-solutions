#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull n, k, odd{0}, even{0};
    std::cin >> n >> k;
    odd = (n % 2 == 0) ? (n / 2) : n / 2 + 1;
    even = n / 2;
    std::cout << ((k > odd) ? 2 * (k - odd) : (2 * k) - 1);
    exit(EXIT_SUCCESS);
}