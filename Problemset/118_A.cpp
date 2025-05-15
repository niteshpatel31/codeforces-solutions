#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string str;
    std::getline(std::cin, str, '\n');
    for (ull i = 0; i < str.size(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        if (str[i] == 97 || str[i] == 121 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117)
        {
        }
        else
        {
            std::cout << '.' << str[i];
        }
    }
    exit(EXIT_SUCCESS);
}