
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
  ll s{}, p{}, r{};
  std::cin >> p >> r;
  ll d{(p > 9 ? p % 10 : p)};
  if (p == r) {
    cout << 1;
    return EXIT_SUCCESS;
  }
  switch (d) {
  case 0:
    cout << 1;
    break;
  case 5:
    cout << (r == 5 ? 1 : 2);
    break;
  default:
    for (ll i{1}; i < 10; ++i) {
      if ((d * i % 10) == r || d * i == r) {
        s = i;
        break;
      }
    }
    cout << (s ? s : 5);
    break;
  }
  return EXIT_SUCCESS;
}
