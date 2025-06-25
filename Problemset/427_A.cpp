#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll test{0}, cs{0}, event{0}, police{0}; // cs : crime unSolved
    std::cin >> test;
    while (test--)
    {
        std::cin >> event;
        if (event != -1)
            police += event;
        else if (event == -1 && police > 0)
            --police;
        else
            ++cs;
        // std::cout << event << " \t:\t" << police << " \t:\t" << cs << endl;
    }
    std::cout << cs;
    exit(EXIT_SUCCESS);
}