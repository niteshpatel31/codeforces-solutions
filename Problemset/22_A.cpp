#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll test{0}, num{0};
    std::cin >> test;
    ll min{__LONG_LONG_MAX__}, ans{__LONG_LONG_MAX__}, size{test};
    while (test--)
    {
        std::cin >> num;
        if (num < min)
        {
            ans = min;
            min = num;
        }
        else if (num > min && num < ans)
            ans = num;
        // std::cout << min << " : " << ans << endl;
    }
    if (size > 1 && (ans != num || min != num) && ans != __LONG_LONG_MAX__)
        std::cout << ans;
    else
        std::cout << "NO";
    exit(EXIT_SUCCESS);
}