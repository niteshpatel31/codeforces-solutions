#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ull limark{0}, bob{0}, year{0};
    std::cin >> limark >> bob;
    while (limark <= bob)
    {
        limark *= 3;
        bob *= 2;
        year++;
        // printf("l : %llu, b : %llu, year : %llu\n", limark, bob, year);
    }
    std::cout << year;
    exit(EXIT_SUCCESS);
}