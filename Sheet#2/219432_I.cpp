#include <iostream>

bool palindrome(std::string &arr)
{
    for (int i = 0, j = arr.size() - 1; i < arr.size(); i++, j--)
    {
        if (arr[j] != arr[i])
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    std::string arr;
    bool print_zero{false};
    std::cin >> arr;
    int i = arr.size();
    while (i--)
    {
        if (arr[i] == '0' && !print_zero)
        {
            std::cout << "";
        }
        else
        {
            std::cout << arr[i];
            print_zero = true;
        }
    }
    std::cout << "\n"
              << ((palindrome(arr)) ? "YES" : "NO");
    exit(EXIT_SUCCESS);
}