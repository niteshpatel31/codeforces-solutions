#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"

bool is_almost_lucky(int n)
{
    int lucky_numbers[10] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477};

    for (ull i = 0; i < 10; i++)
    {
        if (n % lucky_numbers[i] == 0)
            return true;
    }
    return false;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << (is_almost_lucky(n) ? "YES" : "NO") << endl;
    return 0;
}