#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned short test{};
    short x, y;
    std::cin >> test;
    while (test--)
    {
        int ans{0};
        std::cin >> x >> y;
        if (x > y)
        {
            auto buffer = y;
            y = x;
            x = buffer;
        }
        for (size_t i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
                ans += i;
        }
        std::cout << ans << "\n";
    }
    exit(EXIT_SUCCESS);
}