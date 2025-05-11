#include <iostream>
#define uli unsigned long int

uli _max(uli a, uli b)
{
    if (a < b)
        return b;
    return a;
}
uli _min(uli a, uli b)
{
    if (a < b)
        return a;
    return b;
}

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    unsigned short test{0};
    std::cin >> test;
    while (test--)
    {
        std::string s, t;
        std::cin >> s >> t;
        std::string result;
        uli max = _max(s.size(), t.size());
        uli min = _min(s.size(), t.size());
        std::string buffer;
        if (s.size() < t.size())
            buffer = t;
        else
            buffer = s;
        for (uli i = 0; i < max; i++)
        {
            if (i < min)
            {
                result += s[i];
                result += t[i];
            }
            else
                result += buffer[i];
        }
        std::cout << result << "\n";
    }
    exit(EXIT_SUCCESS);
}