#include <iostream>

unsigned long long int fac(int num)
{
    unsigned long long int ans{1};
    for (int i = num; i >= 0; i--)
    {
        if (i == 0)
        {
            return ans;
        }
        ans = ans * i;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int test;
    std::cin >> test;
    int arr[test];
    for (int i = 0; i < test; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < test; i++)
    {
        std::cout << fac(arr[i]) << "\n";
    }

    exit(EXIT_SUCCESS);
}