#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str, ans;
    std::getline(std::cin, str, '\n');
    for (ull i = 0; i < str.size();)
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            ans += ' ';
            i += 3;
        }
        else
        {
            ans += str[i];
            i++;
        }
    }
    ull i = 0;
    for (i = 0; i < ans.size(); i++)
    {
        if (ans[i] != ' ')
        {
            break;
        }
    }
    for (; i < ans.size(); i++)
    {
        if (ans[i] == ' ' && ans[i + 1] == ' ' && ans.size() - i > 3)
        {
            std::cout << ' ';
            ++i;
        }
        else
            std::cout << ans[i];
    }
    exit(EXIT_SUCCESS);
}