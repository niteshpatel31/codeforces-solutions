#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0}, min{__UINT64_MAX__}, max{0}, num{0}, res{0};
    std::cin >> test;
    for (ull i = 0; i < test; i++)
    {
        std::cin >> num;
        if (max == 0)
            max = num;
        if (num < min)
        {
            min = num;
            res++;
        }
        else if (num > max)
        {
            max = num;
            res++;
        }
        // std::cout << "min : " << min << " => max : " << max << endl;
    }
    std::cout << ((res <= 1 && test > 1 && max != min) ? 1 : res - 1);
    exit(EXIT_SUCCESS);
}