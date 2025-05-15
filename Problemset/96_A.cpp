#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string str;
    ull _0{0}, _1{0};
    std::getline(std::cin, str, '\n');
    for (ull i = 0; i < str.size(); i++)
    {
        if (str[i] == '1')
        {
            _1++;
            _0 = 0;
        }
        else
        {
            _1 = 0;
            _0++;
        }
        if (_0 >= 7 || _1 >= 7)
        {
            std::cout << "YES";
            exit(EXIT_SUCCESS);
        }
    }
    std::cout << "NO";

    exit(EXIT_SUCCESS);
}