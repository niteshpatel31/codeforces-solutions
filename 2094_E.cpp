#include <iostream>
#include <vector>
using namespace std;

using ull = unsigned long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ull> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        ull max_sum = 0;
        // Process each bit (0 to 29, since a_i < 2^30)
        for (int bit = 0; bit < 30; ++bit)
        {
            ull zeros = 0, ones = 0;
            // Count zeros and ones for this bit
            for (int i = 0; i < n; ++i)
            {
                if (a[i] & (1ULL << bit))
                {
                    ones++;
                }
                else
                {
                    zeros++;
                }
            }
            // Contribution: max(zeros * ones, ones * zeros) * 2^bit
            max_sum += max(zeros, ones) * (1ULL << bit);
        }

        cout << max_sum << '\n';
    }

    return 0;
}