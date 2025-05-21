#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"

bool distinct(ull year)
{
    ull arr[4]{(year / 1000), (year / 100) % 10, (year / 10) % 10, year % 10};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            // std::cout << arr[i] << " : " << arr[j] << endl;
            if (arr[i] == arr[j])
                return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull year;
    std::cin >> year;
    while (true)
    {
        if (distinct(++year))
            break;
    }
    std::cout << year;
    exit(EXIT_SUCCESS);
}