#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str;
    ull atoz[26]{0}, dist{0};
    std::getline(std::cin, str, '\n');
    for (ull i = 0; i < str.size(); i++)
    {
        // std::cout << str[i] << " : " << std::boolalpha << (str[i] != ' ' && str[i] != '{' && str[i] != '}' && str[i] != ',') << endl;
        if (str[i] != (' ' || '{' || '}' || ','))
            atoz[str[i] - 97]++;
    }
    for (ull i = 0; i < 26; i++)
    {
        if (atoz[i] > 0)
            dist++;
    }
    std::cout << dist;
    exit(EXIT_SUCCESS);
}