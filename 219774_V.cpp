#include <iostream>

int main(int argc, char const *argv[])
{
    // std::ios::sync_with_stdio(false);
    unsigned short m, n, idx{0};
    std::cin >> n >> m;
    unsigned int freq[m + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        unsigned int buffer{0};
        std::cin >> buffer;
        freq[buffer]++;
    }
    for (int i = 1; i <= m; i++)
        std::cout << freq[i] << "\n";
    exit(EXIT_SUCCESS);
}