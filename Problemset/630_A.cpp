#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull pow{0}, ans{1};
    std::cin >> pow;
    while (pow--)
    {
        ans *= 5;
        if (ans > 100)
        {
            std::cout << 25 << endl;
            exit(EXIT_SUCCESS);
        }
    }
    std::cout << ans;
    exit(EXIT_SUCCESS);
}