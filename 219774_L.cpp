#include <iostream>

void sub_array(int *arr, short size)
{
    short iterator{1};
    int max{0};
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j <= iterator; j++)
        {
            if (max < arr[j])
                max = arr[j];
            std::cout << max << " ";
        }
    }
    return;
}

int main(int argc, char const *argv[])
{
    short test{};
    std::cin >> test;
    while (test--)
    {
        short num{0};
        std::cin >> num;
        int arr[num];
        for (int i = 0; i < num; i++)
            std::cin >> arr[i];
        sub_array(arr, num);
    }
    exit(EXIT_SUCCESS);
}