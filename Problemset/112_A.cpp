#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string str;
    std::cin >> str;
    char c;
    ll ans{0};
    for (ull i = 0; i < str.size(); i++)
    {
        std::cin >> c;
        if (c >= 65 && c <= 90)
            c += 32;
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        if (c < str[i])
        {
            ans = 1;
            break;
        }
        else if (c > str[i])
        {
            ans = -1;
            break;
        }
        else
            ans = 0;
    }
    std::cout << ans;
    exit(EXIT_SUCCESS);
}