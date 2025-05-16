#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull x{0}, ones{0}, k{0};
    std::cin >> x;
    while (x > 0)
    {
        k = 0;
        while ((1u << k) <= x)
        {
            k++;
        }
        k--;              // Largest k where 2^k <= x
        x -= (1U << k); // Subtract 2^k
        ones++;
    }

    std::cout << ones;
    exit(EXIT_SUCCESS);
}