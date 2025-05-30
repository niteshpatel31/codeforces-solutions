#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll test{0}, num1, num2;
    std::cin >> test;
    while (test--)
    {
        std::cin >> num1 >> num2;
        std::cout << num1 + num2 << endl;
    }
    exit(EXIT_SUCCESS);
}