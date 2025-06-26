#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // Lucky Ticket
    ull test{0}, num, f{0}, s{0};
    char c;
    std::cin >> test;
    ull input{test / 2};
    while (test--)
    {
        std::cin >> c;
        num = c - 48;
        if (num == 4 || num == 7)
        {
            if (test < input)
                f += c;
            else
                s += c;
        }
        else
        {
            std::cout << "NO";
            exit(EXIT_SUCCESS);
        }
    }
    std::cout << ((f == s) ? "YES" : "NO");
    exit(EXIT_SUCCESS);
}