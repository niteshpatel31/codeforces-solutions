#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0}, num{0};
    std::cin >> test;
    while (test--)
    {
        std::cin >> num;
        std::cout << ((num % 2 == 0) ? "NO" : "YES") << endl;
    }
    exit(EXIT_SUCCESS);
}