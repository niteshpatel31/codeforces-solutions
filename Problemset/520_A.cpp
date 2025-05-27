#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"

void print_arr(ull *arr, ull size)
{
    for (ull i = 0; i < size; i++)
    {
        std::cout << char(i + 97) << " : " << arr[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0};
    std::string str;
    std::cin >> test >> str;
    ull atoz[26] = {0};
    if (test < 26)
    {
        std::cout << "NO";
        exit(EXIT_SUCCESS);
    }
    for (ull i = 0; i < test; i++)
    {
        (str[i] >= 65 && str[i] <= 90) ? atoz[str[i] - 65]++ : atoz[str[i] - 97]++;
    }
    for (ull i = 0; i < 26; i++)
    {
        if (atoz[i] == 0)
        {
            std::cout << "NO";
            exit(EXIT_SUCCESS);
        }
    }
    print_arr(atoz, 26);
    std::cout << "YES";
    exit(EXIT_SUCCESS);
}