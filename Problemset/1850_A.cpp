#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0}, a, b, c;
    std::cin >> test;
    while (test--)
    {
        std::cin >> a >> b >> c;
        if (a + b >= 10 || a + c >= 10 || b + c >= 10)
            std::cout << "YES";
        else
            std::cout << "NO";
        std::cout << endl;
    }
    exit(EXIT_SUCCESS);
}