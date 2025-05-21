#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0};
    char c;
    bool ans{false};
    std::cin >> test;
    while (test--)
    {
        std::cin >> c;
        if (c == '1')
        {
            ans = true;
            break;
        }
    }
    std::cout << ((ans) ? "HARD" : "EASY");
    exit(EXIT_SUCCESS);
}