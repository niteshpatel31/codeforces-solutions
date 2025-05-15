#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str, msg{"hello"};
    std::cin >> str;
    ull count{0};
    for (ull i{0}; i < str.size(); i++)
    {
        if (str[i] == msg[count])
        {
            count++;
            if (count == msg.size())
                break;
        }
    }
    std::cout << ((count == msg.size()) ? "YES" : "NO");
    exit(EXIT_SUCCESS);
}