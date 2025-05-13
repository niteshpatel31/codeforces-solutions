#include <iostream>

#define ull unsigned long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ull test;
    std::cin >> test;
    while (test--)
    {
        std::string str;
        std::cin >> str;
        ull size = str.size();
        if (size <= 10)
            std::cout << str;
        else
        {
            std::cout << str[0] << size - 2 << str[size - 1];
        }
        std::cout << endl;
    }
    exit(EXIT_SUCCESS);
}