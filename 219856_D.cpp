#include <iostream>

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::string s1, s2;
    std::cin >> s1 >> s2;
    std::cout << s1.size() << " " << s2.size() << "\n"
              << s1 << s2 << "\n";
    char buffer = s1[0];
    s1[0] = s2[0];
    s2[0] = buffer;
    std::cout << s1 << " " << s2;
    exit(EXIT_SUCCESS);
}