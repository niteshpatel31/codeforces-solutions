#include <iostream>
#define ull unsigned long long

int main(int argc, char const *argv[])
{
    ull seat, row{0}, col{0};
    // ull arr[8][2] = {{0, 0}, {1, 1}, {2, 2}, {3, 3}, {4, 3}, {5, 2}, {6, 1}, {7, 0}};
    std::cin >> seat;
    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         std::cout << arr[i][j] << " ";std::cout << arr[col][1] << " " << arr[row][0];
    //     }
    //     std::cout << "\n";
    // }
    row = seat / 4;
    if (row % 2 == 0)
    {
        col = seat % 4;
        std::cout << row << " " << col;
    }
    else
    {
        col = 3 - (seat % 4);
        std::cout << row << " " << col;
    }

    exit(EXIT_SUCCESS);
}