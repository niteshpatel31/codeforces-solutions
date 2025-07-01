#include <iostream>
#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
#define endl "\n"

void print_arr(std::vector<ull> &a, ull size)
{
    for (ull i = 0; i < size; i++)
        std::cout << a[i] << " ";
    std::cout << endl;
    return;
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ull test{0}, n, j{0}, k, num{0};
    std::cin >> test;
    while (test--)
    {
        std::cin >> n >> j >> k;
        ull max_i{0}, s{0};
        for (ull i = 0; i < n; i++)
        {
            std::cin >> num;
            if (i == j - 1)
                s = num;
            if (max_i < num)
                max_i = num;
        }
        // ull max_i = *std::max_element(vec.begin(), vec.end());
        // std::cout << "max_i : " << max_i << endl;
        std::cout << ((k == 1 && max_i != s) ? "NO" : "YES") << endl;
    }
    exit(EXIT_SUCCESS);
}