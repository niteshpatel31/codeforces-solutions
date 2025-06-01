#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str;
    ull tokens{1};
    std::getline(std::cin, str, '\n');
    for (ull i = 0; i < str.size(); i++)
    {
        if (tokens == 1)
        {
            if (str[i] == '.')
                std::cout << 0;
            else
                tokens++;
        }
        else
        {
            if (str[i] == '.')
            {
                std::cout << 1;
            }
            else
                std::cout << 2;
            tokens = 1;
        }
    }
    exit(EXIT_SUCCESS);
}