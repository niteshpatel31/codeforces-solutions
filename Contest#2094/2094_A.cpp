#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0};
    std::cin >> test;
    bool print = false;
    std::string str, res{};
    // std::getline(std::cin, str, '\n');
    while (test-- + 1)
    {
        // std::getline(std::cin, str, '\n');
        std::getline(std::cin, str, '\n');
        for (ull i = 0; i < str.size(); i++)
        {
            if (str[i] == ' ')
                res += str[i + 1];
            else if (i == 0)
                res += str[i];
        }
        if (print)
            std::cout << res << endl;
        str = std::string("");
        res = str;
        print = true;
    }
    exit(EXIT_SUCCESS);
}