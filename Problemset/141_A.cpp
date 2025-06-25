#include <iostream>

#define ull unsigned long long
#define ll long long
#define endl "\n"

int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string guest, host, card;
    std::cin >> guest >> host >> card;
    ull size_g{guest.size()}, size_h(host.size()), size_c{card.size()};
    ll alphabet[26]{0};

    if (size_c != size_h + size_g)
        std::cout << "NO";
    else
    {
        for (ull i = 0, j = 0, k = 0; k < size_c; k++)
        {
            if (i < size_h)
            {
                alphabet[host[i] - 65]++;
                i++;
            }
            if (j < size_g)
            {
                alphabet[guest[j] - 65]++;
                j++;
            }
            alphabet[card[k] - 65]--;
        }
        for (ull i = 0; i < 26; i++)
        {
            if (alphabet[i] > 0 || alphabet[i] < 0)
            {
                std::cout << "NO\n";
                exit(EXIT_SUCCESS);
            }
        }
        std::cout << "YES";
    }
    exit(EXIT_SUCCESS);
}