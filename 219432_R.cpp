#include <iostream>

int main(int argc, char const *argv[])
{
    int test{3};
    short n, m;
    while (test--)
    {
        int ans{0};
        std::cin >> n >> m;
        if (n <= 0 || m <= 0)
            continue;
        if (n > m)
        {
            auto buffer = n;
            n = m;
            m = buffer;
        }
        for (short i = n; i <= m; i++)
        {
            std::cout << i << " ";
            ans += i;
        }
        std::cout << "sum =" << ans << "\n";
    }
    exit(EXIT_SUCCESS);
}