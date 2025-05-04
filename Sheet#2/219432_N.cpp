#include <iostream>

char c;
void print_sign(int num)
{
    for (int i = 0; i < num; i++)
        std::cout << c;
    std::cout << "\n";
}

int main(int argc, char const *argv[])
{
    int num{0};
    std::cin >> c;
    std::cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        print_sign(arr[i]);
    }
    exit(EXIT_SUCCESS);
}