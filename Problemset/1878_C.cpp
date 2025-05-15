#include <iostream>
#include <list>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::list<int> l;

    auto it = std::find(l.begin(), l.end(), 5).first;
    std::cout << it->first;
    exit(EXIT_SUCCESS);
}