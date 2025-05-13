#include <iostream>

#define ull unsigned long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned short num;
    std::cin >> num;
    std::cout << ((num % 2 == 0 && num >= 4) ? "YES" : "NO");
    exit(EXIT_SUCCESS);
}