#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"

void print_arr(ull *arr, ull &size)
{
    for (ull i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull test{0}, &size{test}, present{0};
    std::cin >> test;
    ull arr[size];
    for (ull i = 1; i <= size; i++)
    {
        std::cin >> present;
        arr[present - 1] = i;
    }
    print_arr(arr, size);

    exit(EXIT_SUCCESS);
}