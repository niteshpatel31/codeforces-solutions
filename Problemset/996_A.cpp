#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull amount{0}, denomination{0};
    std::cin >> amount;
    while (amount != 0)
    {
        if (amount >= 100)
        {
            amount -= 100;
            denomination++;
            // std::cout << "Rs.100 : ";
        }
        else if (amount >= 20)
        {
            amount -= 20;
            denomination++;
            // std::cout << "Rs.20 : ";
        }
        else if (amount >= 10)
        {
            amount -= 10;
            denomination++;
            // std::cout << "Rs.10 : ";
        }
        else if (amount >= 5)
        {
            amount -= 5;
            denomination++;
            // std::cout << "Rs.5 : ";
        }
        else
        {
            amount--;
            denomination++;
            // std::cout << "Rs.1 : ";
        }
        // std::cout << denomination << " : " << amount << endl;
    }
    std::cout << denomination;
    exit(EXIT_SUCCESS);
}