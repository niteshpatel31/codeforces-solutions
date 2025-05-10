#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::string str;
    std::cin >> str;
    auto size = str.size();
    for (unsigned long int i = 0, j = size - 1; i < size; i++, j--)
    {
        if (str[i] != str[j])
        {
            std::cout << "NO";
            exit(EXIT_SUCCESS);
        }
    }
    std::cout << "YES";
    exit(EXIT_SUCCESS);
}