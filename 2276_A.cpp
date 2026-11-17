
#include <bits/stdc++.h>

#define YES "YES"
#define NO "NO"
#define ENDL '\n'
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll t{};
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    const int s{min(b, a - b)};
    cout << (s <= 0 || a <= 0 || b <= 0 ? -1 : s) << ENDL;
  }

  return EXIT_SUCCESS;
}
