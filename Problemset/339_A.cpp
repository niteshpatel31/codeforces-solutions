#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    char c;
    std::string str;
    ull sum{0};
    std::cin >> str;
    for (ull i = 0; i < str.size(); i++)
    {
        c = str[i];
        if (c != '+')
        {
            sum += (ull)c - 48;
        }
    }
    std::cout << sum;
    exit(EXIT_SUCCESS);
}