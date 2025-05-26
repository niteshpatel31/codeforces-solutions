#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string hate{"I hate"}, that{" that "}, it{" it "}, love{"I love"};
    ull test{0};
    std::cin >> test;
    for (ull i = 1; i <= test; i++)
    {
        if (i > 1)
            std::cout << that;
        std::cout << ((i % 2 == 0) ? love : hate);
    }
    std::cout << it;
    exit(EXIT_SUCCESS);
}