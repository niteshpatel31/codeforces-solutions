#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned short test, pos_min, pos_max;
    std::cin >> test;
    int arr[test];
    int max{-2147483646}, min(__INT32_MAX__), buffer{};
    for (int i = 0; i < test; i++)
    {
        std::cin >> buffer;
        arr[i] = buffer;
        if (max < buffer)
        {
            max = buffer;
            pos_max = i;
        }
        if (min > buffer)
        {
            min = buffer;
            pos_min = i;
        }
    }
    // swapping
    buffer = arr[pos_min];
    arr[pos_min] = arr[pos_max];
    arr[pos_max] = buffer;

    for (int i = 0; i < test; i++)
        std::cout << arr[i] << " ";
    exit(EXIT_SUCCESS);
}