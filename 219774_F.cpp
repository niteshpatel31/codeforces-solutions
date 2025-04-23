#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned short test{};
    std::cin >> test;
    unsigned int arr[test];
    for (int i = test - 1; i >= 0; i--)
        std::cin >> arr[i];
    for (int i = 0; i < test; i++)
        std::cout << arr[i] << " ";
    exit(EXIT_SUCCESS);
}