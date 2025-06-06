#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"

template <typename T>
T min(T &a, T &b)
{
    return (a < b) ? a : b;
}
template <typename T>
T max(T &a, T &b)
{
    return (a > b) ? a : b;
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull red{0}, blue{0};
    std::cin >> red >> blue;
    std::cout << min(red, blue) << " " << (max(red, blue) - min(red, blue)) / 2;
    exit(EXIT_SUCCESS);
}