#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string s, t;
    std::cin >> s >> t;
    for (ull i = 0, j = t.size() - 1; i < s.size(); i++, j--)
    {
        if (s[i] != t[j] || s.size() != t.size())
        {
            std::cout << "NO";
            exit(EXIT_SUCCESS);
        }
    }
    std::cout << "YES";
    exit(EXIT_SUCCESS);
}