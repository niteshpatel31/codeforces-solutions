#include <iostream>
#include <vector>
#include <algorithm>

#define ull unsigned long long
#define ll long long
#define endl "\n"

void print_arr(std::vector<ull> a, ull size)
{

    for (int i = 0; i < size; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << endl;
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0}, size{0}, sum{0}, total_sum{0}, counter{0};
    std::cin >> test;
    size = test;
    std::vector<ull> arr(test);
    while (test--)
    {
        std::cin >> arr[test];
    }
    std::sort(arr.begin(), arr.end());
    for (ull i = 0; i < size; i++)
        total_sum += arr[i];

    for (ll i = size - 1; i > -1; i--)
    {
        sum += arr[i];
        counter++;

        if (total_sum - sum < sum)
        {
            std::cout << counter;
            break;
        }
    }
    exit(EXIT_SUCCESS);
}