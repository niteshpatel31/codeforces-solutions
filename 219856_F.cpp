#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    unsigned short test;
    std::cin >> test;
    while (test--)
    {
        std::string str;
        std::cin >> str;
        if (str.size() <= 10)
            std::cout << str << "\n";
        else
            std::cout << str[0] << str.size()-2 << str[str.size() - 1] << "\n";
    }
    exit(EXIT_SUCCESS);
}