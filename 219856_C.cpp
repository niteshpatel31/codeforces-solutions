#include <iostream>
int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::string str1, str2;
    std::cin >> str1 >> str2;
    auto size = min(str1.size(), str2.size());
    for (int i = 0; i < size; i++)
    {
        if (str1[i] != str2[i])
        {
            std::cout << ((str1[i] < str2[i]) ? str1 : str2);
            exit(EXIT_SUCCESS);
        }
    }
    std::cout << ((str1.size() == size) ? str1 : str2);
    exit(EXIT_SUCCESS);
}