#include <iostream>
#define ull unsigned long int

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    bool ans{false};
    std::string x{"010"}, y{"101"};
    unsigned short test{0};
    std::cin >> test;
    while (test--)
    {
        std::string str, check = std::string("");
        std::cin >> str;
        for (ull i = 2; i < str.size(); i++)
        {
            check += str[i - 2];
            check += str[i - 1];
            check += str[i];
            if (check == x || check == y)
                ans = true;
            check.erase();
        }
        std::cout << ((ans) ? "Good" : "Bad") << "\n";
        ans = false;
    }
    exit(EXIT_SUCCESS);
}