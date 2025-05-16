#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull n{0}, m{0}, buffer{0}, pos{1}, sum{1};
    std::cin >> n >> m;
    for (ull i = 0; i < m; i++)
    {
        std::cin >> buffer;
        if (buffer < pos)
            sum += (buffer + n) - pos;
        else
            sum += buffer - pos;
        pos = buffer;
    }
    std::cout << sum - 1 << endl;

    exit(EXIT_SUCCESS);
}