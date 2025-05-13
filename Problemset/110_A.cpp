#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ull num{0};
    ull _7{0}, _4{0};
    std::cin >> num;
    while (num != 0)
    {
        auto mod = num % 10;
        if (mod == 7 || mod == 4)
        {
            if (mod == 7)
                _7++;
            else
                _4++;
        }
        else
        {
        }

        num /= 10;
    }
    std::cout << ((_7 + _4 == 7 || _7 + _4 == 4) ? "YES" : "NO");
    exit(EXIT_SUCCESS);
}