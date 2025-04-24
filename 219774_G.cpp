#include <iostream>

int main(int argc, char const *argv[])
{
    int test;
    std::cin >> test;
    int arr[100000 + 5];
    bool ans;
    for (int i = 0; i < test; i++)
        std::cin >> arr[i];
    for (int i = 0; i < test; i++)
    {
        if (arr[i] == arr[test - 1 - i])
            ans = true;
        else
        {
            ans = false;
            break;
        }
    }
    (ans) ? std::cout << "YES" : std::cout << "NO";
    exit(EXIT_SUCCESS);
}