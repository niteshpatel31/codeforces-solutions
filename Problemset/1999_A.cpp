#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll test{0}, num;
    std::cin >> test;
    while (test--)
    {
        std::cin >> num;
        std::cout << (num % 10) + (num / 10) << endl;
    }
    exit(EXIT_SUCCESS);
}