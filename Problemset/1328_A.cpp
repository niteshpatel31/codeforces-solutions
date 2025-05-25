#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0}, num, div;
    std::cin >> test;
    while (test--)
    {
        std::cin >> num >> div;
        if (div > num)
            std::cout << div - num << endl;
        else
        {
            ull res = num / div;
            bool _is_div = (num % div == 0) ? true : false;
            std::cout << ((!_is_div) ? ((res + 1) * div - num) : 0) << endl;
        }
    }
    exit(EXIT_SUCCESS);
}