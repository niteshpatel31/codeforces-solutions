#include <iostream>
#include <iomanip>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0};
    float sum{0}, num;
    std::cin >> test;
    auto size = test;
    while (test--)
    {
        std::cin >> num;
        sum += num;
    }
    std::cout << std::setprecision(12) << (sum / size);
    exit(EXIT_SUCCESS);
}