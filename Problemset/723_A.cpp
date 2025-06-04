#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    vector<int> x = {x1, x2, x3};
    sort(x.begin(), x.end()); // Sort the coordinates
    int median = x[1];        // Median is the second element
    int total_distance = abs(x[0] - median) + abs(x[1] - median) + abs(x[2] - median);
    cout << total_distance << endl;
    return 0;
}