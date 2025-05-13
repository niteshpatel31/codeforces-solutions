#include <iostream>

#define ull unsigned long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ull n, k, idx{0};
    std::cin >> n >> k;
    k--;
    ull arr[n] = {0};
    for (ull i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        if (arr[i] < arr[k] && arr[i] != 0)
            break;
        else if (arr[i] == 0)
            break;
        else
            idx++;
    }
    std::cout << idx;
    exit(EXIT_SUCCESS);
}