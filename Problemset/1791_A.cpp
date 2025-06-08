#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0};
    char c;
    std::cin >> test;
    while (test--)
    {
        std::cin >> c;
        switch (c)
        {
        case 'c':
        case 'o':
        case 'd':
        case 'e':
        case 'f':
        case 'r':
        case 's':
            std::cout << "YES";
            break;
        default:
            std::cout << "NO";
            break;
        }
        std::cout << endl;
    }
    exit(EXIT_SUCCESS);
}