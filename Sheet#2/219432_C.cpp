#include <iostream>

int main(int argc, char const *argv[])
{
    int size, even{0}, odd{0}, negative{0}, positive{0};
    std::cin >> size;
    int arr[size], temp{size};
    while (temp--)
        std::cin >> arr[temp];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;

        if (arr[i] < 0)
            negative++;
        else if (arr[i] > 0)
            positive++;
    }

    std::cout << "Even: " << even << "\n";
    std::cout << "Odd: " << odd << "\n";
    std::cout << "Positive: " << positive << "\n";
    std::cout << "Negative: " << negative << "\n";
    // Even: 3
    // Odd: 2
    // Positive : 1
    // Negative : 3

    exit(EXIT_SUCCESS);
}