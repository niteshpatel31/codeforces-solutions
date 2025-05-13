#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    char c;
    std::string str;
    std::cin >> c >> str;
    std::cout << (char)((c >= 97 && c <= 123) ? c - 32 : c) << str;
    exit(EXIT_SUCCESS);
}