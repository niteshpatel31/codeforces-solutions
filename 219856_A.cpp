#include <iostream>

int main(int argc, char const *argv[])
{
    std::string s1, s2;
    std::cin >> s1 >> s2;
    std::cout << s1.size() << " " << s2.size() << "\n"
              << s1 << " " << s2;
    exit(EXIT_SUCCESS);
}