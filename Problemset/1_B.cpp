#include <iostream>

#define ull unsigned long long
#define endl "\n"

std::string conversion(std::string &str)
{
    std::string s;
    ull num = std::stoll(std::string(str[1] + str[2])), res, saved;
    if (str[0] == 'R')
    {
        if (num > 26)
        {
            res = num / 26;
            saved = num - (res * 26);
            std::cout << res << saved << endl;
        }
    }
    else
    {
    }
    return s;
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0};
    std::cin >> test;
    std::string str;
    for (ull i = 0; i < test; i++)
    {
        std::cin >> str;
        std::cout << conversion(str) << endl;
    }

    exit(EXIT_SUCCESS);
}