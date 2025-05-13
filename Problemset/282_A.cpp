#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll test{0}, res{0};
    char c[3];
    std::cin >> test;
    while (test--)
    {
        std::cin >> c[0] >> c[1] >> c[2];
        if (c[0] == 'X' && c[1] == '+')
            res++;
        else if (c[0] == 'X' && c[1] == '-')
            res--;
        else if (c[0] == '-')
            --res;
        else if (c[0] == '+')
            ++res;
        else
        {
        }
    }
    std::cout << res << endl;
    exit(EXIT_SUCCESS);
}