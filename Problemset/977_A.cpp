#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ull test{0}, num{0};
    std::cin >> num >> test;
    while (test--)
    {
        if (num % 10 != 0)
            num--;
        else
            num /= 10;
    }
    std::cout << num;
    exit(EXIT_SUCCESS);
}