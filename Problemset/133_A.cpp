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
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            std::cout << "YES" << endl;
            exit(EXIT_SUCCESS);
        }
    }
    std::cout << "NO";
    exit(EXIT_SUCCESS);
}