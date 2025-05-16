#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull lower{0}, i{1};
    bool first{false};
    std::string str;
    std::cin >> str;

    if (str[0] >= 97 && str[0] <= 122)
        first = true;
    for (; i < str.size(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            lower++;
            break;
        }
    }
    if ((first && lower == 0) || lower == 0)
    {
        if (!first)
        {
            str[0] = char(str[0] + 32);
        }
        else
            str[0] = char(str[0] - 32);
        std::cout << str[0];
        for (ull i = 1; i < str.size(); i++)
            std::cout << char(str[i] + 32);
    }
    else
        std::cout << str;
    exit(EXIT_SUCCESS);
}