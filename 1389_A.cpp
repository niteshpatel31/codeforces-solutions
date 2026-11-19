
#include <bits/stdc++.h>

#define YES "YES"
#define NO "NO"
#define ENDL '\n';
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  ll t{};
  std::cin >> t;
  while (t--) {
    ll x{}, y{}, l, r;
    cin >> l >> r;
    if (l * 2 <= r) {
      x = l;
      y = l * 2;
      cout << x << ' ' << y;
    } else
      cout << "-1 -1";
    cout << ENDL;
  }

  return EXIT_SUCCESS;
}
