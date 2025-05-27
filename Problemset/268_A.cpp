#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"

void print_arr(ull *arr, ull *_arr, ull &size)
{
    for (ull i = 0; i < size; i++)
    {
        std::cout << arr[i] << " : " << _arr[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull team{0}, wear{0};
    std::cin >> team;
    ull home[team], guest[team];
    for (ull i = 0; i < team; i++)
    {
        std::cin >> home[i] >> guest[i];
    }
    for (ull i = 0; i < team; i++)
    {
        for (ull j = 0; j < team; j++)
        {
            if (j != i && home[i] == guest[j])
                wear++;
        }
    }
    std::cout << wear;
    exit(EXIT_SUCCESS);
}