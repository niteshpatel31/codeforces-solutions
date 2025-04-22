#include <bits/stdc++.h>

bool search(uint32_t arr[], uint32_t size, uint32_t &key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            key = i;
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    uint32_t size, key;
    std::cin >> size;
    uint32_t arr[size];
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];
    std::cin >> key;
    (search(arr, size, key)) ? std::cout << key : std::cout << "-1";
    exit(EXIT_SUCCESS);
}