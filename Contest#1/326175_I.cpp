#include <iostream>

int main(int argc, char const *argv[])
{
    char first, last;
    std::cin >> first >> last;
    short f = (short)first - 48, l = (short)last - 48;
    if (f == 0 || l == 0)
        std::cout << "YES";
    else
        std::cout << ((f > l) ? ((f % l == 0) ? "YES" : "NO") : ((l % f == 0) ? "YES" : "NO"));
    exit(EXIT_SUCCESS);
}
