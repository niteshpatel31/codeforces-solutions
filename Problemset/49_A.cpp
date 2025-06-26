#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string str;
    char c;
    std::getline(std::cin, str, '\n');
    for (ull i = str.size() - 1; i >= 0; i--)
    {
        c = str[i];
        if (c != ' ' && c != '?')
        {
            switch (c)
            {
            case 'A':
            case 'E':
            case 'O':
            case 'I':
            case 'U':
            case 'Y':
            case 'a':
            case 'e':
            case 'o':
            case 'i':
            case 'u':
            case 'y':
                std::cout << "YES";
                exit(EXIT_SUCCESS);
            default:
                std::cout << "NO";
                exit(EXIT_SUCCESS);
            }
        }
    }
    exit(EXIT_SUCCESS);
}