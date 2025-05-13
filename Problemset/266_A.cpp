#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ull stones{0}, count{0};
    char c, x;
    std::cin >> stones >> c;
    for (ull i = 1; i < stones; i++)
    {
        std::cin >> x;
        if (c == x)
            count++;
        c = x;
    }
    std::cout << count;
    exit(EXIT_SUCCESS);
}