#include <iostream>

#define ull unsigned long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ull mat[5][5], row{0}, col{0}, moves{0};

    for (ull i = 0; i < 5; i++)
    {
        for (ull j = 0; j < 5; j++)
        {
            std::cin >> mat[i][j];
            if (mat[i][j] == 1)
            {
                row = i + 1;
                col = j + 1;
            }
        }
    }
    (row <= 3) ? moves += 3 - row : moves += row - 3;
    (col <= 3) ? moves += 3 - col : moves += col - 3;
    std::cout << moves;
    exit(EXIT_SUCCESS);
}