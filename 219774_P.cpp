#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned short num{};
    std::cin >> num;
    unsigned int arr[num], update{0};
    bool even{true};
    for (int i = 0; i < num; i++)
        std::cin >> arr[i];
    while (even)
    {
        for (int i = 0; i < num; i++)
        {
            if (arr[i] % 2 != 0)
            {
                even = false;
                break;
            }
            arr[i] = arr[i] / 2;
        }
        update++;
    }
    std::cout << update - 1;
    exit(EXIT_SUCCESS);
}