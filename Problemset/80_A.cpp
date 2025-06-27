#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull x, y;
    const ull arr[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    std::cin >> x >> y;
    if (y % 2 == 0 && y != 2)
    {
        std::cout << "NO";
        exit(EXIT_SUCCESS);
    }
    else
    {
        for (int i = 0; i < 14; i++)
        {
            if (x < arr[i + 1] && x >= arr && y == arr[i + 1])
            {
                std::cout << "YES";
                exit(EXIT_SUCCESS);
            }
        }
    }
    std::cout << "NO";
    exit(EXIT_SUCCESS);
}