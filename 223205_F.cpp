#include <iostream>

unsigned long long pow(unsigned short x, unsigned n)
{
    unsigned long long ans{0}, power{x};
    for (int i = 2; i <= n; i++)
    {
        power *= x;
        if (i % 2 == 0)
            ans += power;
        // std::cout << "power : " << power << "\tans : " << ans << "\n";
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    unsigned short x, n;
    std::cin >> x >> n;
    std::cout << pow(x, n);
    exit(EXIT_SUCCESS);
}