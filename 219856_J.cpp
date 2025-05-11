#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::string str;
    std::cin >> str;
    unsigned int arr[27] = {0};
    auto size = str.size();
    for (unsigned long int i = 0; i < size; i++)
    {
        int idx = str[i] - 96;
        arr[idx]++;
    }
    for (int i = 0; i < 27; i++)
    {
        if (arr[i] != 0)
        {
            std::cout << char(96 + i) << " : " << arr[i] << "\n";
        }
    }
    exit(EXIT_SUCCESS);
}