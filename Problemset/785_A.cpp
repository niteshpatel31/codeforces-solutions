#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0}, sum{0};
    std::cin >> test;
    std::string str;
    while (test--)
    {
        std::cin >> str;
        switch (str[0])
        {
        case 'T':
            sum += 4;
            break;
        case 'C':
            sum += 6;
            break;
        case 'O':
            sum += 8;
            break;
        case 'D':
            sum += 12;
            break;
        case 'I':
            sum += 20;
            break;
        }
    }
    std::cout << sum;
    exit(EXIT_SUCCESS);
}