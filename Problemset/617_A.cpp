#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ull x{0};
    std::cin >> x;
    std::cout << ((x % 5 == 0) ? x / 5 : x / 5 + 1);
    exit(EXIT_SUCCESS);
}