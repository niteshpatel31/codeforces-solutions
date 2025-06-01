#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0}, num{0}, prev{0}, max{1}, current{1};
    std::cin >> test >> num;
    test--;
    prev = num;
    while (test--)
    {
        std::cin >> num;
        if (num > prev)
            current++;
        else
        {
            if (current > max)
                max = current;
            current = 1;
        }
        // std::cout << prev << " : " << num << "\t=> {" << current << ", " << max << "}" << endl;
        prev = num;
    }
    std::cout << ((max > current) ? max : current);
    exit(EXIT_SUCCESS);
}