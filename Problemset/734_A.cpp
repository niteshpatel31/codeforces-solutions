#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0}, _A{0}, _D{0}, count{0};
    char c;
    std::cin >> test;
    while (test--) // O(n)
    {
        std::cin >> c;
        (c == 'A') ? _A++ : _D++;
    }
    if (_A > _D)
        std::cout << "Anton";
    else if (_D > _A)
        std::cout << "Danik";
    else
        std::cout << "Friendship";
    exit(EXIT_SUCCESS);
}