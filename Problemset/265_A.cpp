#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string s, t;
    ull count{1};
    std::cin >> s >> t;
    for (ull i = 0, j = 0; i < s.size() && j < t.size(); j++)
    {
        if (t[j] == s[i])
        {
            i++;
            count++;
        }
    }
    std::cout << count;
    exit(EXIT_SUCCESS);
}