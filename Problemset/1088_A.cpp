#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull x{0}, a{0};
    std::cin >> x;
    if (x >= 3)
    {
        std::cout << ((x % 2 == 0) ? x : x - 1) << " " << 2 << endl;
    }
    else
    {
        if (x == 2)
            std::cout << 2 << " " << 2 << endl;
        else
            std::cout << "-1";
    }
    exit(EXIT_SUCCESS);
}