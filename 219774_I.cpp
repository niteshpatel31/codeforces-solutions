#include <iostream>

int main(int argc, char const *argv[])
{
    short test;
    std::cin >> test;
    while (test--)
    {
        short num;
        std::cin >> num;
        int arr[num], min{897698768};
        for (int i = 0; i < num; i++)
            std::cin >> arr[i];
        for (int i = 0; i < num; i++)
        {
            for (int j = i + 1; j < num; j++)
            {
                if (min > arr[i] + arr[j] + (j - i))
                    min = arr[i] + arr[j] + (j - i);
            }
        }
        std::cout << min << "\n";
    }
    exit(EXIT_SUCCESS);
}