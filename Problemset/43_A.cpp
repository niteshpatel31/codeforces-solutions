#include <iostream>
#include <unordered_map>
#include <algorithm>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::unordered_map<std::string, ull> team;
    ull test{0}, max{0};
    std::string buffer, res;
    std::cin >> test;
    while (test--)
    {
        std::cin >> buffer;
        ++team[buffer];
        if (max < team[buffer])
        {
            team[buffer];
            res = buffer;
            max = team[buffer];
        }
    }
    std::cout<<res;
    exit(EXIT_SUCCESS);
}