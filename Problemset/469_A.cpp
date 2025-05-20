#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<bool> covered(n + 1, false); // Tracks if level i is covered (1-based indexing)

    // Read Little X's levels
    int p;
    cin >> p;
    for (int i = 0; i < p; ++i)
    {
        int level;
        cin >> level;
        covered[level] = true;
    }

    // Read Little Y's levels
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int level;
        cin >> level;
        covered[level] = true;
    }

    // Check if all levels from 1 to n are covered
    bool can_pass = true;
    for (int i = 1; i <= n; ++i)
    {
        if (!covered[i])
        {
            can_pass = false;
            break;
        }
    }

    // Output result
    if (can_pass)
        cout << "I become the guy.\n";
    else
        cout << "Oh, my keyboard!\n";

    return 0;
}