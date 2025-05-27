#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull k, l, m, n, d, undiv{0};
    std::cin >> k >> l >> m >> n >> d;
    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        std::cout << d;
        exit(EXIT_SUCCESS);
    }
    for (ull i = 1; i <= d; i++)
    {
        if ((i % k != 0) && (i % l != 0) && (i % m != 0) && (i % n != 0))
            undiv++;
    }
    std::cout << d - undiv;
    exit(EXIT_SUCCESS);
}