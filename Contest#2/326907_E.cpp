#include <iostream>
#define ull unsigned long long

int main(int argc, char const *argv[])
{
    ull seat;
    std::cin >> seat;
    std::cout << seat / 4 << " " << ((seat / 4 % 2 == 0) ? (seat % 4) : 3 - (seat % 4));
    exit(EXIT_SUCCESS);
}