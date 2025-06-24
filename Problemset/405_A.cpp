#include <iostream>
#include <vector>
#include <algorithm>

#define ull unsigned long long
#define ll long long
#define endl "\n"

void print_arr(std::vector<ull> &a, ull &size)
{
    for (ull i = 0; i < size; i++)
        std::cout << a[i] << " ";
    return;
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0}, size;
    std::cin >> test;
    size = test;
    std::vector<ull> arr(test);
    while (test--)
        std::cin >> arr[test];
    std::sort(arr.begin(), arr.end());
    print_arr(arr, size);
    exit(EXIT_SUCCESS);
}