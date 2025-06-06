#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll test{0}, rating{0};
    std::cin >> test;
    while (test--)
    {
        std::cin >> rating;
        if (rating <= 1399)
            std::cout << "Division 4";
        else if (rating <= 1599)
            std::cout << "Division 3";
        else if (rating <= 1899)
            std::cout << "Division 2";
        else
            std::cout << "Division 1";
        std::cout << endl;
    }
    exit(EXIT_SUCCESS);
}