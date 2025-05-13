#include <iostream>

#define ull unsigned long long
using ll = long long;
#define endl "\n"

void _swap(char &a, char &b)
{
    ll buffer = a;
    a = b;
    b = buffer;
}

ll _min(ll a, ll b)
{
    if (a < b)
        return a;
    return b;
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string str;
    std::cin >> str;
    for (int i = 0; i < str.size(); i += 2)
    {
        for (int j = i + 2; j < str.size(); j += 2)
        {

            if (str[i] > _min(str[i], str[j]))
            {
                _swap(str[i], str[j]);
            }
        }
    }
    std::cout << str;
    exit(EXIT_SUCCESS);
}