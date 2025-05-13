#include <iostream>

#define ull unsigned long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ull m, n;
    std::cin >> m >> n;
    std::cout << (m * n) / 2;

    exit(EXIT_SUCCESS);
}