#include <iostream>
#include <vector>

#define ull unsigned long long
#define ll long long
using namespace std;

// #define endl "\n"
int main(int argc, char const *argv[])
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;
        vector<vector<int>> g(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> g[i][j];
            }
        }

        vector<int> p(2 * n + 1);
        // Extract p_2 to p_{2n}
        for (int k = 2; k <= 2 * n; k++)
        {
            int i = (k - 1 <= n) ? 1 : k - n;
            int j = (k - 1 <= n) ? k - 1 : n;
            p[k] = g[i - 1][j - 1];
        }

        // Find p_1 (missing number)
        vector<bool> seen(2 * n + 1, false);
        for (int k = 2; k <= 2 * n; k++)
        {
            seen[p[k]] = true;
        }
        for (int x = 1; x <= 2 * n; x++)
        {
            if (!seen[x])
            {
                p[1] = x;
                break;
            }
        }

        // Output permutation
        for (int i = 1; i <= 2 * n; i++)
        {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
    exit(EXIT_SUCCESS);
}